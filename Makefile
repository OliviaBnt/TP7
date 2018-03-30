CXXFLAGS = -Wall -g  -std=c++11
exe = test
objects = string.o test.o

$(exe) : $(objects)
	$(CXX) $(LDFLAGS) $(LDLIBS) -o $@ $(objects)

test.o : test.cpp string.o

string.o : string.cpp string.h
	$(CXX) -c $(CPPFLAGS) $(CXXFLAGS) -o $@ string.cpp
  
.PHONY:clean
clean:
	-$(RM) $(exe) $(objects)
	
