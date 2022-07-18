CC := g++
SRCDIR := src

BUILDDIR := build
TARGET := main
SRCEXT := cpp
SOURCES := $(shell find $(SRCDIR) -type f -name *.$(SRCEXT))
OBJECTS := $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:.$(SRCEXT)=.o))
CFLAGS := -g -Wall -O3 -std=c++14
INC := -I include/ -I docteste/

$(TARGET): $(OBJECTS)
	$(CC) $^ -o $(TARGET)

$(BUILDDIR)/%.o: $(SRCDIR)/%.$(SRCEXT)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) $(INC) -c -o $@ $<

tests: $(OBJECTS)
	@mkdir -p $(BINDIR)
	$(CC) $(CFLAGS) $(INC) $(TESTES) $(TSTSOURCES) $^ -o $(BINDIR)/testes
	$(BINDIR)/testes

clean:
	$(RM) -r $(BUILDDIR)/* $(TARGET)

.PHONY: all test clean