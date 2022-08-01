//WAP to input a three digit number and display the sum of the digits.

#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Input a three digit number : ");
    scanf("%d",&n);
    
    sum=(n/100)+(n/10)%10+n%10;
    
    printf("The sum of three digit is %d",sum);
    

    return 0;
}