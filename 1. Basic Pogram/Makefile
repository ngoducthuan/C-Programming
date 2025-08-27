#Compiler
CC = gcc

#Flag
CFLAG = -Wall -Wextra -g

#Source directory
SRC_DIR = src

#Binary directory
BIN_DIR = bin

#Fill all .c file in src
SOURCES = $(wildcard $(SRC_DIR)/*.c)

#Convert src/file.c to src/file.exe
EXECUTABLES = $(patsubst $(SRC_DIR)/%.c, $(BIN_DIR)/%.exe, $(SOURCES))

#Default rule
all: $(EXECUTABLES)

$(BIN_DIR)/%.exe: $(SRC_DIR)/%.c
	@if not exist "$(BIN_DIR)" mkdir "$(BIN_DIR)"
	$(CC) $(CFLAG) -o $@ $<

#Remove .exe file
clean:
	-del $(BIN_DIR)\*.exe 2>nul

.PHONY: all clean
