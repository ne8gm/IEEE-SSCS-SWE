#include <stdio.h>
#include <stdlib.h>
int is_response_detected(int strength);
int main()
{
    int n;
    printf("Enter the strength: ");
    scanf("%d", &n);
    printf("%d",is_response_detected(n));
    return 0;
}
int is_response_detected(int strength)
{
    if (strength > 50)
    return 1;
    else return 0;
}
