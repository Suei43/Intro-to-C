#include <stdio.h>
#include <stdlib.h>

int main(){
    //ASCII mainpulation
    char letter = 'a';
    printf("a+1: %c\n", ++letter);

    //Typecasting
    double num = 10.34;
    int num2 = (int)num;
    printf("num: %d\n", num2);

    //Print all elements in an array
    int arr[5] = {1,2,3,4,5};
    int i = 0;
    printf("The size of the given array is: %d\n", sizeof(arr)/sizeof(arr[0]));
    while(i<sizeof(arr)/sizeof(arr[0])){
        printf("%d\n", arr[i]);
        i++;
    }
}