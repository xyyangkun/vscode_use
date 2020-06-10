
CXXFLAGS += -std=c++11 -I./t1 -g -ggdb

all:test

test:t1.o mycpp.o 
	g++ -o $@ $^	

.cpp.o:
	g++ $(CXXFLAGS) -c -o $@ $^

t1.o:t1/t1.cpp
	g++ $(CXXFLAGS) -c -o $@ $^

clean:
	rm -rf *.o test
