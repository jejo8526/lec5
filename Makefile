CXX = g++  # the compiler
CXXFLAGS = -std=c++17 -Wall -Werror -Wpedantic
# flags for the compiler (use c++17 standards, turn on all optional warnings); add -ggdb if you want to use gdb to debug!

# runs for "make all"
all: test

# runs for "make main"
# the line below this one must be TABBED in (not spaces!)
# files DependsOn.o and main.cpp will be monitored for changes to know if it needs to be re-made
test: test.cpp
	$(CXX) $(CXXFLAGS) test.cpp -o test

# runs for "make clean"
clean:
	rm test
