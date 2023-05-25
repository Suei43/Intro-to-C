#include <stdio.h>

int main(){
    //Performance checker
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

    //Grade checker
    int score;
    printf("Enter your score(between 1 and 100): ");
    scanf("%d",&score);
    switch (score){
    case 1 ... 40:
        printf("F\n");
        break;
    case 41 ... 50:
        printf("D\n");
        break;
    case 51 ... 60:
        printf("C\n");
        break;
    case 61 ... 70:
        printf("B\n");
        break;
    case 71 ... 100:
        printf("A\n");
        break;
    default:
    printf("Invalid Grade\n");
        break;
    }
}