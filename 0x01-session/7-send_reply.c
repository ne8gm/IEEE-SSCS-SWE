#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_message(char *msg);
char *get_reply(void);

char msg[100];

int main()
{ 
    printf("enter the desired message (don't exceed over the 100 characters) : ");
    fgets(msg, sizeof(msg), stdin);
    
    printf("%s : %s",get_reply(),msg); 
    
    return 0;
}
void print_message(char *msg)
{
    printf("%s\n", msg);
}
char *get_reply(void)
{
        static char response[] = "the message is received";
        return response;
      
}
