OUT = program
CXX = g++

OBJECTS = Point.o Edge.o EdgeManager.o

all: $(OUT)
$(OUT): $(OBJECTS)
		$(CXX) -o $@ $^

#$(OBJECTS):
#	asf
