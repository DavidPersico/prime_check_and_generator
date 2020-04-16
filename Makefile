C++ = g++
C++FLAGS = -std=c++14 -g -Wall

all: prime_generator clean_o

prime_generator: prime_check.o prime_gen.o
		$(C++) $(C++FLAGS) -o $@.exe $^

prime_check.o: prime_check.cpp
		$(C++) $(C++FLAGS) -c $<

prime_check.o: prime_check.cpp
		$(C++) $(C++FLAGS) -c $<

clean_o:
		rm -rf prime_check.o prime_gen.o

clean:
		rm -rf prime_generator.exe
