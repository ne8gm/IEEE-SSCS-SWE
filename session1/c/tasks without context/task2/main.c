#include "_putchar.h"
#include <stdio.h>
int main(void)
{
int i; char x;
for (i=1;i<=5;i++)
{
      for (x='a'; x<='z'; x++)
      {
         _putchar(x);
      }
_putchar('\n');
}
return (0);
}
