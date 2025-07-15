#include <stdio.h>
#include <stdlib.h>

int main()
{
    int variable_signal = 98;
    int *ptr =&variable_signal;
    printf("Signal strength address: %p\n", (void *)ptr);
    printf("Signal strength value: %d\n", variable_signal);
    
    return 0;
}
