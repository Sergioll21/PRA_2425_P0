all:
	g++ -std=c++17 main.cpp BrazoRobotico.cpp -o main

test: all
	./main

clean:
	rm -f main

