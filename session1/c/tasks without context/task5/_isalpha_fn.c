#include <stdio.h>
int _isa(char c)
{
    if ((c >='a' && c<= 'z') || (c >='A' && c <= 'Z'))
    {
        return 1;
    }
    else return 0;
}