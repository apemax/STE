SRC_DIR = src
ODIR = obj
IDIR = include
BUILD_DIR = build

BIN = ste

CC = g++
CXXFLAGS = -I$(IDIR) -Werror -Wall -Wextra

_DEPS = global.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = main.o IMethod.o AMethod.o fileio.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

.SECONDEXPANSION:

$(ODIR)/%.o: $(SRC_DIR)/%.cpp $(DEPS) | $$(@D)
	$(CC) -c -o $@ $< $(CXXFLAGS)

$(BUILD_DIR)/$(BIN): $(OBJ) | $$(@D)
	$(CC) -o $@ $^ $(CXXFLAGS)

$(BUILD_DIR):
	mkdir -p $@

$(ODIR):
	mkdir -p $@

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o $(BUILD_DIR)/$(BIN)
