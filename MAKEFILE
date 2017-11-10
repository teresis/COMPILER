#
# makefile for TINY
# Borland C Version
# K. Louden 2/3/98
#

CC = gcc

CFLAGS =

OBJS = y.tab.o lex.yy.o main.o util.o
OBJS_FLEX = main.o util.o lex.yy.o

cminus_test: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o cminus_test -ll

main.o: main.c globals.h util.h scan.h
	$(CC) $(CFLAGS) -c main.c

util.o: util.c util.h globals.h
	$(CC) $(CFLAGS) -c util.c
	
scan.o: scan.c scan.h util.h globals.h
	$(CC) $(CFLAGS) -c scan.c

cminus_flex: $(OBJS_FLEX)
	$(CC) $(CFLAGS) main.o util.o lex.yy.o -o cminus_flex -ll

lex.yy.o: cminus.l scan.h util.h globals.h
	flex cminus.l
	$(CC) $(CFLAGS) -c lex.yy.c 
y.tab.o: cminus.y globals.h
	yacc -d cminus.y
	$(CC) -c y.tab.c
clean:
	-rm cminus_test
	-rm cminus_flex
	-rm $(OBJS)
	-rm lex.yy.o

