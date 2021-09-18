driver: driver.c log.h log.c
  gcc -o driver driver.c log.c log.c -I
  
clean: 
  rm driver.o driver driver.a
