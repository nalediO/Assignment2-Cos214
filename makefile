all:
	rm -f main
	g++ -std=c++11 -g *.cpp -o main
	./main

build:
	rm -f main
	g++ -std=c++11 -g *.cpp -o main

clean:
	rm -f main

run:
	./main

debug:
	gdb ./main