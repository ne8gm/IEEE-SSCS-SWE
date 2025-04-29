#include <stdio.h>
int main()
{
    char x;
    printf("enter the character you would to  chaeck its status");
    scanf("%c",&x);
    if (x>='a' && x<='z')
    {
        printf("the entered character is lower-case");
    }
    else if(x>='A' && x<='Z')
    {
        printf("the entered character is upper-case");
    }
    else printf("It's not a character");
    return 0;
}