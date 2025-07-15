#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void print_message(char *msg);
int main()
{ 
    char msg[100];
    printf("enter the desired message (don't exceed over the 100 characters) : ");
    fgets(msg, sizeof(msg), stdin);
    print_message(msg);
    
    return 0;
}
void print_message(char *msg)
{
    printf("%s", msg);
}
