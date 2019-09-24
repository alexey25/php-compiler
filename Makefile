all:
	gcc -Wall *.c -o main
.PHONY: g 
g:
	dot -Tps graph.gv -o graph.ps

.PHONY: run
run:
	./main t.txt

