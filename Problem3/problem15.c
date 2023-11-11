#include <stdio.h>
 
unsigned int countSetBits(unsigned int n)
{
    unsigned int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
 

int main()
{
    int num ;
	printf("Enter an integer: ");
    scanf("%d", &num);
    printf("%d", countSetBits(num));
    return 0;
}