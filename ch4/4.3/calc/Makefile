#PostFix Calculator

CC = gcc 
CFLAGS = -std=c99 -Wall -Wextra -pedantic -pedantic-errors -g  
LDFLAGS = -lm

TARGET = rpc 

SRCDIR = src
OBJDIR = obj
BLDDIR = bin

SRC := $(shell find $(SRCDIR) -name '*.c')
OBJ := $(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o,$(SRC))

$(BLDDIR)/$(TARGET): $(OBJ)
	@mkdir -pv $(BLDDIR)
	$(CC) $(OBJ) -o $@ $(LDFLAGS)

$(OBJDIR)/%.o : $(SRCDIR)/%.c
	@mkdir -pv $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rv $(OBJDIR)

install:
	@sudo cp -rv $(BLDDIR)/$(TARGET) /usr/local/bin

deinstall:
	@sudo rm -rv /usr/local/bin/$(TARGET)
