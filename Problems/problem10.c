#include<stdio.h>

int main(){
int num ;
printf("Enter the Number : ");
scanf("%d", &num);
int rev_num = 0;

while(num != 0){
rev_num = rev_num * 10 + (num % 10);
num = num / 10;}

printf("Reversed Number: %d", rev_num);
return 0;
}
