#include <stdio.h>
#include <stdlib.h>


void print(int x, int y, int arr[][y]){
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            printf("%d ", arr[i][j]);
        }
    }
}

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

    //Working with arrays using pointers
    int* arrptr = arr;
    printf("%p\n",arrptr);
    printf("%p\n",&arr[0]);

    //Variable sized arrays
    int len = 5, counter = 0;
    int arr2[len][len];
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            arr2[i][j] = ++counter + counter;
        }
    }
    printf("%d\n", arr2[3][4]);
    print(len,len,arr2); 
}