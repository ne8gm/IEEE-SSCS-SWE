#include <stdio.h>
#include <stdlib.h>
int is_strong_signal(int strength);
void check_signal(int strength);
int main()
{
    int x;
    printf("enter the No. of signals: ");
    scanf("%d", &x);
    int i, n[x];
    for (i = 0; i < x; i++)
    {
        printf("enter the strength of signal %d: ", i + 1);
        scanf("%d", &n[i]);
    }
    for (i = 0; i < x; i++)
    {
        printf("Signal %d (%d): ", i + 1, n[i]);
        check_signal(n[i]);
    }
}
int is_strong_signal(int strength)
{
    if (strength > 50)
    return 1;
    else return 0;
}
void check_signal(int strength)
{
    if (is_strong_signal(strength))
        printf("Strong signal detected.\n");
    else
        printf("no signal detected.\n");
}
