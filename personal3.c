/*Password generator*/
#include<stdio.h>
#include<string.h>
#define MAX 14
void main()
{
    char password[MAX];
    printf("\nEnter your password");
    scanf("%s", &password);
    if (strlen(password) < 8 && strlen(password) > 14)
    {
        printf("Invalid password length");
    }
    else if (password[0] >= 'A' && password[0] <= 'Z') 
    {
        printf("\nPassword is invalid, first character should be a lowercase letter");
    }
    else if (password[0] >= 0 && password[0] <= 9)
    {
        printf("\nPassword is invalid, first character cannot start with a number");
    }
    else
    {
        printf("\nPaswword is valid");
    }

}