q1:     my_rottate.o rottate_bits.o
	gcc -Wall -ansi -pedantic my_rottate.o rottate_bits.o -o q1

my_rottate:	my_rottate.c rottate_bits.h
	gcc -g -c -Wall -ansi -pedantic my_rottate.c -o my_rottate.o
	
rottate_bits.o: rottate_bits.c rottate_bits.h
	gcc -g -c -ansi -Wall -pedantic rottate_bits.c -o rottate_bits.o


