//WAP to make the last digit of a number stored in a variable as zero.
//Ex. if x=2345 then make it x=2340.
#include<stdio.h>
int main()
{
    int x;
    printf("Enter the value of x : ");
    scanf("%d",&x);
        
    x=x/10*10;
    
    printf("The value of x is %d",x);
    
     return 0;
}