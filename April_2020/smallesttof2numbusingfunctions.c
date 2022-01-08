#include <stdio.h>
//smallest of 2 using function
int small(int a,int b);
int main()

{
    int a,b,smallest;
    printf("Enter the Two values: \n");
    scanf("%d %d",&a,&b);
    if (a==b)
    {
        printf("both the values are same\n");
    }
    else
    {
    
        smallest =  small(a, b);
        printf("\nsmallest is %d\n",smallest);
    }
    return 0;

}
int small(int a,int b)
{
    int num;
    if(a<b)
    {
        printf("1st Number is small ");
        num=a;
    }

    else
    {
        printf("2nd Number is small ");
        num=b;
    }
    return num;
    
}
