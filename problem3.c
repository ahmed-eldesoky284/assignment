#include <stdio.h>
int main()
{
    int num1, rem1;

    printf("Enter the Number : ");
    scanf("%d", &num1);
    rem1 = num1 % 2;
    if (rem1 == 0)
        printf("%d is an even Number\n", num1);
    else
        printf("%d is an odd Number\n", num1);
    return 0;
}
