#include <stdio.h>  
  
int main() {  
    int x;
    printf("Enter Number for \n");  
    scanf("%d", x); 
    int *ptr;
    ptr = &x; 
  
    printf("Value of x: %d\n", x);  
    printf("Address of x: %p\n", &x);  
    printf("Value of ptr: %p\n", ptr);  
    printf("Value stored at the address stored in ptr: %d\n", *ptr);  
  
    *ptr = 15;  
  
    printf("\nAfter changing the value stored at the address stored in ptr\n");  
    printf("Value of x: %d\n", x);  
    printf("Value stored at the address stored in ptr: %d\n", *ptr);  
  
    return 0;  
}  