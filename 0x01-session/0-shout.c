#include <stdio.h>
#include <stdlib.h>
void repeat_message(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    repeat_message(n);
    return 0;
}
void repeat_message(int n)
{
    for(int i = 1; i <= n; i++)
    {
        printf("n: Hello,world.\n");
    }
}
