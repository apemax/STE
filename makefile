CC = g++
CXXFLAGS = -no-pie -Wall
DEPS = global.h

ODIR = obj

BIN = STE

_OBJ = main.o global.o AMethod.o IMethod.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CXXFLAGS)

STE: $(OBJ)
	$(CC) -o $@ $^ $(CXXFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o $(BIN)
