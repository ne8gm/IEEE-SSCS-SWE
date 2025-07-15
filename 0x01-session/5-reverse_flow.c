#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);
int main()
{
    int a, b;
    printf("a : ");
    scanf("%d", &a);
    printf("b : ");
    scanf("%d", &b);
    swap(&a, &b);
    printf("After swapping:\n a : %d, b : %d\n", a, b);
    return 0;
}
void swap(int *a, int *b)
{
    int x;
    x = *a;
    *a = *b;
    *b = x;
}
