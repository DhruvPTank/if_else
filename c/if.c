#include <stdio.h>
int main()

{
	int number;

   printf("enter any number\n");
   scanf("%d",&number);
   if(number>0)
   {
   	printf("you enterd number is positive\n");
   }
   if(number<0)
   {
   	printf("you enterd number is negative\n");
   }
}