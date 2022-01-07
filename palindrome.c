#include <stdio.h>
//to find the given no is palindrome or not
int main()
{
    int a,given_number,c,sum=0;
    printf("Enter The No you want to check > ");
    scanf("%d",&a);
    given_number=a;
    while (a>0)
    {
        c=a%10;
        sum=(sum*10)+c;
        a=a/10;
    }
    if(given_number==sum)
    {
        printf("The given Number is palindrome\n");
    }
    else {
        printf("The given Number is not palindrome\n");
        
    }
}