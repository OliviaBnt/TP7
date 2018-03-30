CXXFLAGS = -Wall -g  -std=c++11
exe = test
objects = string.o

$(exe) : $(objects)
	$(CXX) $(LDFLAGS) $(LDLIBS) -o $@ $(objects)

test.o : test.cpp string.h

string.o : string.cpp string.h 
	$(CXX) -c $(CPPFLAGS) $(CXXFLAGS) -o $@ string.cpp
	

.PHONY:clean
clean:
	-$(RM) $(exe) $(objects)
	
