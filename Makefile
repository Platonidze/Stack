main.exe : main.o Stack.hpp Element.hpp Stack.o Element.o
	g++ -Wall -Wextra -pedantic -O3 main.o Stack.o Element.o -o main.exe

main.o : main.cpp
	g++ -c -Wall -Wextra -pedantic -O3 main.cpp -o main.o

Stack.o : Stack.cpp
	g++ -c -Wall -Wextra -pedantic Stack.cpp -o Stack.o

Element.o : Element.cpp
	g++ -c -Wall -Wextra -pedantic Element.cpp -o Element.o

clean : 
	rm -f main.o Element.o Stack.o main.exe

.PHONY: clean
