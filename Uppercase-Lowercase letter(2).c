#include<stdio.h>
int main()
{
    char lower,upper;

    printf("Enter uppercase letter : ");
    scanf("%c",&upper);

    lower = tolower(upper);

    printf("Lowercase letter : %c",lower);

    return 0;
}