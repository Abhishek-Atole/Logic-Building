CC = gcc
CFLAGS = -Wall -Wextra -Werror
SOURCES = $(wildcard *.c)
TARGET = program

all: $(TARGET)

$(TARGET): $(SOURCES)
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCES)

clean:
	rm -f $(TARGET)