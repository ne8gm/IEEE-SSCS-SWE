#include <stdio.h>
#include <stdlib.h>
int signal_strength = 0;

void boost_signal(int n);

int main(void) {
    int n;
    printf("Initial signal strength: %d\n", signal_strength);
    printf("Enter the signal strength to boost: ");
    scanf("%d", &n);
    boost_signal(n);
    printf("Boosted signal strength: %d\n", signal_strength);
    return 0;
}

void boost_signal(int n)
{
    int signal_strength = 100;
    printf("Signal strength boosted by %d\n", n);
}
