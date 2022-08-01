//WAP to print unit digit of a given number

#include <stdio.h>

int main() 
{  
    int n,uDigit;
    printf("Enter a Number : ");
    scanf("%d",&n);
    
    uDigit = n%10;
    
    printf("%d",uDigit);
    

    return 0;
}