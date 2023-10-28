#include <stdio.h>
int add(int a, int b)
{
    if (!b)
    {
        return a;
    }
    int sum = a ^ b;
    int adding = (a & b) << 1;
    return add(sum, adding);
}
int main()
{
    int num1, num2;
    printf("\nEnter the frist Numbers : ");
    scanf("%d", &num1);
    printf("\nEnter the second Numbers : ");
    scanf("%d", &num2);
    int result = add(num1, num2);
    printf("\n The result is as : %d ", result);
    return 0;
}
