students: main.o address.o date.o student.o
	g++ -g main.o address.o date.o student.o -o students

main.o: main.cpp address.h date.h student.h
	g++ -g -c main.cpp

address.o: address.cpp address.h
	g++ -g -c address.cpp

date.o: date.cpp date.h
	g++ -g -c date.cpp

student.o: student.cpp student.h address.h date.h
	g++ -g -c student.cpp

run: students
	./students

clean:
	rm students
	rm *.o

debug: students
	gdb students

valgrind: students
	valgrind --leak-check=full ./students
