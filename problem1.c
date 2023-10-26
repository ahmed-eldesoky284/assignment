#include <stdio.h>
int main()
{
   int num1, num2;
   printf("\nEnter the frist Numbers : ");
   scanf("%d", &num1);
   printf("\nEnter the second Numbers : ");
   scanf("%d", &num2);
   while (num2 > 0)
   {
      num1++;
      num2--;
   }
   printf("%d", num1);
   return (0);
}