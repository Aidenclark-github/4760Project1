CC = gcc
CLFAGS = -g
TARGET = driver
OBJS = driver.o

$(TARGET): $(OBJS)
    $(CC) - o $(TARGET) $(OBJS)

loglib.o: driver.o
    ar -rcs loglib.o driver.o
    
driver.o: driver.c
    $(CC) $(CFLAGS) -c driver.c
    
clean:
    rm -rf *.o P1
 

