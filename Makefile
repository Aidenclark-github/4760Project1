driver: driver.c log.h loglib.c
  gcc -o driver driver.c loglib.c loglib.c -I
  
clean: 
  rm driver.o driver driver.a
