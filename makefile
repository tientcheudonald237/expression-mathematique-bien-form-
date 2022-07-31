tp:main.c fonction.c fonction.h pile.h pile.c
	gcc -o tp fonction.c pile.c  main.c
run:
	./tp
clean:
	rm tp
