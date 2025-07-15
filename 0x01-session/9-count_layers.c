#include <stdio.h>
#include <stdlib.h>

int sum_layers(int n);

int main()
{
    int no;
    printf("enter the no : ");
    scanf("%d", &no);
    printf("the sum is %d\n", sum_layers(no));
    return 0;
}

int sum_layers(int n)
{
    if (n <= 0)
        return 0;
    return n + sum_layers(n - 1);
}
