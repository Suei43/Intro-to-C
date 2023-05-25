#include<stdio.h>
#define CONSTANT 5
typedef long int LONGER;
int main(){
    LONGER age;
    printf("Enter your age:");
    scanf("%d",&age);
    printf("%d,%d\n", age, CONSTANT);
}