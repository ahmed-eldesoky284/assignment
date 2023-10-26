#include <stdio.h>

int main()
{
    int print;
    printf("Enter a student print : ");
    scanf("%d", &print);
    switch (print)
    {
    case 100 ... 85:
        printf("Excellent");
        break;

    case 84 ... 75:
        printf("very good");
        break;
    case 74 ... 65:
        printf("good");
        break;
    case 64 ... 50:
        printf("pass");
        break;

    case 49 ... 0:
        printf("fail");
        break;
    }
}