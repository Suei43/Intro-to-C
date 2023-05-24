#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Enter your name:");
    char name[20];
    scanf("%s", name);
    printf("Hello %s!\n", name);
}