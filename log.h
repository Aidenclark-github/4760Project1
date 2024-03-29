#include <time.h>

typedef struct data_struct{
  time_t    time;     // Time stampchar      
  char      type;     // Message type (I/W/E/F)
  char*     string;   // Message string
} data_t;

int addmsg ( const char type, const char * msg );
void clearlog();
char * getlog();
int savelog ( char * filename );
