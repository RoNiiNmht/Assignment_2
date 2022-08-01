//WAP which takes a charachter as an input and display its ASCII code

#include<stdio.h>
int main()
{
    char c;
    printf("Enter a charachter : ");
    scanf("%c",&c);
    
    printf("The ASCII code of %c is %d",c,c);
    
    return 0;
}