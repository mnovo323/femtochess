CC = gcc
CFLAGS = -Wall -Wextra -O2

TARGET = femtochess

SRCS = femtochess.c

all: $(TARGET) count

$(TARGET):
	rm -f $(TARGET)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRCS)

clean:
	rm -f $(TARGET)

count:
	@LINES=$$(grep -v '^\s*$$' $(SRCS) | grep -v '^\s*//' | grep -v '^\s*/\*' | grep -v '^\s*\*' | wc -l); \
	echo "$$LINES lines counted in $(SRCS)"


.PHONY: all clean
