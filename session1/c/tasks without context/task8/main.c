#include<stdio.h>
int main()
{
    int x,i;
    for (i=0;i<=9;++i)
    {
        for ( x = 0; x <= 9; ++x)
        {
            printf("%d, ",x*i);
        }
        printf("\n");
    }
    return 0;
}