//WAP to print a given number withput it's last digit

#include <stdio.h>

int main() 
{  
    int n,num;
    printf("Enter a Number : ");
    scanf("%d",&n);
    
    num = n/10;
    
    printf("%d",num);
    

    return 0;
}