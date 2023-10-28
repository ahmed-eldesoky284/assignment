#include <stdio.h>

void decimalToBinary(int num)
{
    if (num == 0)
    {
        printf("0");
        return;
    }

    int binaryNum[32];
    int i = 0;

    for (; num > 0;)
    {
        binaryNum[i++] = num % 2;
        num /= 2;
    }

    for (int j = i - 1; j >= 0; j--)
        printf("%d", binaryNum[j]);
}

int main()
{
    int num;
    printf("Enter the Number : ");
    scanf("%d", &num);
    decimalToBinary(num);
    return 0;
}
