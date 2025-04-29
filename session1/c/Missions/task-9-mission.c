#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main(void)
{
	int n;
    int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    last_digit= abs(n%10);
    printf("the no is %d ,and the last digit is %d\n",n,last_digit);
    if(last_digit%2)
    {
        printf("the last digit is odd\n");
    }else printf("the last digit is even\n");
    if (last_digit>5)
    {
        printf("the last digit is greater than 5\n");
    }else if (last_digit<5)
    {
        printf("the last digit is smaller than 5\n");
    }else printf("the last digit is equal to 5\n");
  
	return (0);
}
