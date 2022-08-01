/*WAP to input a number from the user and also umput a digit. Append a digit in the number
  and print the resulting number.*/
//Ex. number=234 and digit=9 then the resulting number 2349.
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    int d;
    printf("Enter a digit : ");
    scanf("%d",&d);
        
    x=x*10+d;
    
    printf("Resulting number is  %d",x);
    
     return 0;
}