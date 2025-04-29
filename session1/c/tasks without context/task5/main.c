#include "_isalpha_fn.h"
#include <stdio.h>
int main()
{
    char c;
    printf("enter to check: "); scanf("%c",&c);
    if (_isa(c))
    printf("the entered value is alphabetical\n");
    else printf("the entered value isn't alphabetical\n");
return 0;
}