SRCS = $(wildcard *.cpp)
PROGS = $(patsubst %.cpp,build/%,$(SRCS))

default: dir $(PROGS)

build/%: %.cpp
	g++ -std=c++11 -O2 -o $@ $<

dir: build/

build/:
	mkdir -p build
