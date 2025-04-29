#include "_putchar.h"
#include <stdio.h>
int main(void)
{
char x;
for (x='a'; x<='z'; x++)
{
      if (x!='q'){_putchar(x);}
}
_putchar('\n');
for (x='A'; x<='Z';x++)
{
     if (x!='Q'){_putchar(x);}
}
_putchar('\n');
return (0);
}
