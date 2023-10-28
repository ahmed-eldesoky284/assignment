// C program to swap two variables
#include <stdio.h>

// Driver code
int main()
{
    int x, y;
    printf("Enter frist Number : ");
    scanf("%d", &x);
    printf("\nEnter second Number : ");
    scanf("%d", &y);

    int temp = x;

    x = y;

    y = temp;

    printf("\nAfter Swapping: frist Number = %d, second Number = %d ", x, y);
    return 0;
}
