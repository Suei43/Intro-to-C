//Using a pointer to change the value of a constant variable
#include <stdio.h>
int main(void){
    const int x = 5;
    int* x_pointer = &x;
    *x_pointer = 10;
    printf("%d\n", x);
}