#include <stdio.h>
int main()
{
    int i,n;
    printf("enter the no of rows: ");
    scanf("%d",&n);
    for (i=0;i<=n;++i)
    {
        int x;
        for(x=0;x<=n;++x)
        {
            printf("%d, ",x*i);
        }
        printf("\n");
    }
    return 0;
}