CC = gcc
CLFAGS = -g
TARGET = driver
OBJS = driver.o

$(TARGET): $(OBJS)
    $(CC) - o $(TARGET) $(OBJS)

loglib.a: driver.o
    ar -rcs loglib.a driver.o
    
driver.o: driver.c
    $(CC) $(CFLAGS) -c driver.c
    
clean:
    rm -rf *.o P1
 

