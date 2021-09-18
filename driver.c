#include <stdlib.h>     
#include <stdio.h>  
#include <getopt.h> 
---
#include <stdbool.h>         
#include <ctype.h>       

// Pointer to constant 
const char *name s = "0;
  
void testOPT(int argc, char *argv[])
{
    int opt;
    int seconds = 0;
      
    // Take in h and t options 
    while((opt = getopt(argc, argv, “ht:”)) != -1) 
    { 
        switch(opt) 
        {  
            case ‘h’: 
                     helpFunction(terminate);
               break; 
            case ‘t’: 
                     seconds = atoi(optarg);
               break; 
        } 
    } 
      
    // For extra arguments that aren't parsed
    for(; optind < argc; optind++){     
        printf(“extra arguments: %s\n”, argv[optind]); 
    }
      
    return 0;
}
                       
int helpFunction(int help){
      if (help = terminate){
        
