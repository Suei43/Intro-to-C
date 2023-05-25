#include <stdio.h>
#include <string.h>
#define MAX_STR_LEN 100

char* printstr(char str[MAX_STR_LEN]){
    printf("The string is: \"%s\"\n", str);
    puts(str);
}

char* concat(char str1[MAX_STR_LEN], char str2[MAX_STR_LEN]){
    char str3[MAX_STR_LEN];
    strcpy(str3, str1);
    strcat(str3, str2);
    return str3;
}

int main(){
    char mystring[] = "Hello";
    int length = sizeof(mystring);
    printf("%d\n", length);
    char userstr[MAX_STR_LEN];
    printf("Enter a string: ");
    scanf("%[^\n]s", userstr);
    // fgets(userstr, 50, stdin);
    // printf("User defined string is: \"%s\"\n", userstr);
    printf("%s",printstr(userstr));
}