#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void echo(int n);

int main()
{
    int no;
    printf("enter the desired no to print : ");
    scanf("%d",&no);
    echo(no);
    return 0;
}

void echo(int n)
{
    if (n>0)
    {
       printf("n: Echo...\n");
       echo(--n);
    } 
    else printf("thats the end\n");
    
}
