#include <stdlib.h>     
#include <stdio.h>  
#include <getopt.h> 
#include <ctype.h>

// Pointer to constant 
const char *logger = 0;

// Process the arguments 
void testOPT(int arg_count, char *arg_vector[]) {
    int opt;
    int seconds;
    opt = getopt(arg_count, arg_vector, “ht:”);
      
    # Take in h and t options 
    while(opt != -1) 
    { 
        switch(opt) 
        {  
            case ‘h’: 
                     helpFunction(EXIT_SUCCESS);
               break; 
            case ‘t’: 
			if (seconds = atoi(*optarg)){
				} else {
				}                     
               break; 
        } 
    } 
      
   // For extra arguments that aren't parsed
    for(; optind < arg_count; optind++){     
        printf(“extra arguments: %s\n”, arg_vector[optind]); 
    }
      
    return;
}

// help function with perror
int helpFunction(int help){
      if (help == EXIT_SUCCESS){
              printf("Invoke driver.c using the following format:\n");
              printf("\ndriver [-h] [-t sec] [logfile]\n");
              printf(" -h: Prints help message.\n");
              printf(" -t sec: Prints messages on an average of every 'sec' seconds.\n");
              printf(" [filename]: Saves messages to the specified filename\n");
              printf("\nNOTE: Default filename is messages.log.\n");
	} else {
              // use perror
              perror("Error: Please use correct format for input: [-h] [-t sec] [logfile]");
             {
             exit(help);
} 
 // Logger name function        
 void loggerName(const char *parsed) {
	logger = parsed;
}

// arg_count will be the number of strings pointed to by arg_vector 
// Checks for arguments entered, up to 4	      
int main(int arg_count, char **arg_vector) {
    loggerName(arg_vector[0]);
    switch(arg_count) {
        case 1 :
                    printf("No arguments. Please enter specified arguments.\n");
            break;
        case 2 :
			printf("1 argument has been entered: \n");
			testOPT(arg_count, arg_vector);
            break;
        case 3 :
			printf("2 arguments have been entered: \n");
                    	testOPT(arg_count, arg_vector);
            break;
        case 4 :
			printf("3 arguments have been entered: \n");
                   	testOPT(arg_count, arg_vector);
            break;
        case 5 :
			printf("4 arguments have been entered: \n");
                   	testOPT(arg_count, arg_vector);
            break;
        default:
                   	perror("Error: You have entered too many arguments. ");
			exit(EXIT_FAILURE);
    }
	printf("Output: \n");
	printf(arg_vector[0], arg_vector[1]);
	return 0;
}
               
