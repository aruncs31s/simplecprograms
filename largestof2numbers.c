#include <stdio.h>
//largest of 2 numbers
int main()
{
    int a,b,c;
    printf("Enter the nubers \n");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c)
    {
        printf("1st number is bigger ans= %d",a);

    }
    else if (b>a && b>c)
    {
        printf("2nd number is bigger ans= %d ",b);

    }
    else 
    {
        printf("3rd number is bigger ans= %d",c);
    }
}