#include "_putchar.h"
int main()
{
    char i='0',x='1';
    for (;i<='8';++i)
    {
        for ( ; x <='9'; ++x)
        {
            _putchar(i);_putchar(x);_putchar(',');_putchar(' ');
        }
        x= i+2;
    }
    return 0;
}