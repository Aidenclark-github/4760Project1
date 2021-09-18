#include <stdlib.h>     
#include <stdio.h>  
#include <getopt.h> 
#include <ctype.h>

# Pointer to constant 
const char *logger = 0;
  
void testOPT(int arg_count, char *arg_vector[])
{
    int opt;
    int seconds = 0;
      
    # Take in h and t options 
    while((opt = getopt(arg_count, arg_vector, “ht:”)) != -1) 
    { 
        switch(opt) 
        {  
            case ‘h’: 
                     helpFunction(EXIT_SUCCESS);
               break; 
            case ‘t’: 
                     seconds = atoi(optarg);
               break; 
        } 
    } 
      
    # For extra arguments that aren't parsed
    for(; optind < arg_count; optind++){     
        printf(“extra arguments: %s\n”, arg_vector[optind]); 
    }
      
    return;
}
                       
int helpFunction(int help){
      if (help == EXIT_SUCCESS){
              printf("Invoke driver.c using the following format:\n");
              printf("\ndriver [-h] [-t sec] [logfile]\n");
              printf(" -h: Prints help message.\n");
              printf(" -t sec: Prints messages on an average of every 'sec' seconds.\n");
              printf(" [filename]: Saves messages to the specified filename\n");
              printf("\nNOTE: Default filename is messages.log.\n");
	} else {
              #use perror
              perror("Error: Please use correct format for input: [-h] [-t sec] [logfile]");
             {
             exit(help);
} 
        
 void loggerName(const char *parsed) {
	logger = parsed;
}

#argc will be the number of strings pointed to by argv. 
int main(int arg_count, char **arg_vector) {
    loggerName(arg_vector[0]);
    switch(arg_count) {
        case 1 :
                    printf("No arguments detected.\n");
            break;
        case 2 :
			              printf("1 argument detected\n");
			              testOPT(arg_count, arg_vector);
            break;
        case 3 :
			              printf("2 arguments detected\n");
                    testOPT(arg_count, arg_vector);
            break;
        case 4 :
			              printf("3 arguments detected. .\n");
                    testOPT(arg_count, arg_vector);
            break;
        case 5 :
			              printf("4 arguments detected.\n");
                    testOPT(arg_count, arg_vector);
            break;
        default:
                    perror("Too many arguments");
			              exit(EXIT_FAILURE);
    }
	
	printf("Main end:", arg_vector[0], arg_vector[1]);
	return 0;
}
               
