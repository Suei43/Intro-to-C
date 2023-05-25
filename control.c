#include <stdio.h>

int main(){
    //Grade checker
    char grade[1];
    printf("Enter your grade: ");
    scanf("%s",grade);
    switch (grade[0])
    {
    case 'A':
        printf("Excellent\n");
        break;
    case 'B':
        printf("Good\n");
        break;
    case 'C':
        printf("Average\n");
        break;
    case 'F':
        printf("Fail\n");
        break;
    default:
        printf("Invalid grade\n");
        break;
    }
}