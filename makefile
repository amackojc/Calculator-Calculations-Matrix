calculator: main.o cal.o matrix.o
	g++ main.o cal.o matrix.o -o calculator

main.o: main.cpp
	g++ -c main.cpp

cal.o: cal.cpp cal.h
	g++ -c cal.cpp

matrix.o: matrix.cpp matrix.h
	g++ -c matrix.cpp

clean: 
	rm *.o calculator

run: 
	./calculator