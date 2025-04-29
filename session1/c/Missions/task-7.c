#include<stdio.h>
int main()
{ 
    int no = 0;
   printf("enter a no between 1 and 9 : "); scanf("%d",&no);
   if (no>=1 && no <= 9)
   {
    printf("the corresponding character is %c\n", no +'A' - 1);
   }
   else printf("ERROR : the input no must be between 1 and 9\n");

return 0;
}
