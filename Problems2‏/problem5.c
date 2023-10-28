#include<stdio.h>
#include<math.h>

int main() {
    int num, digitCount;
    
    printf("Enter a positive integer\n");
    scanf("%d", &num);
    
    if(num < 0) num = num *-1;
    if(num){
       digitCount = (int)log10((double)num) + 1;
    } else {
       digitCount = 1;
    }
    printf("Digit Count = %d", digitCount);
    return 0;
}