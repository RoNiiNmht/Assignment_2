//WAP to swap a values of two int variables
#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("After swaping the value of a is %d and b is %d",a,b);
    
    return 0;
}