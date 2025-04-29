#include "_putchar.h"
int main()
{
    char i,x,y='2';
    for (i='0';i<='7';++i)
    {
        for (x=i+1 ; x <='8'; ++x)
        {
            for (y=x+1;y<='9';++y)
            {
                _putchar(i);_putchar(x);_putchar(y);_putchar(',');_putchar(' ');
            }
            
        }
       
    }
    _putchar('\n');
    return 0;
}