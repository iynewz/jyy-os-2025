CC = gcc
CFLAGS = -Wall -g -I../testkit

TARGET = main
SRCS = main.c ../testkit/testkit.c

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)

run: $(TARGET)
	TK_RUN=1 TK_VERBOSE=1 ./$(TARGET)

clean:
	rm -f $(TARGET)