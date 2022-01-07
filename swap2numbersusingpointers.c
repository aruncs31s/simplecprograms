#include <stdio.h>
//swap 2 numbers using pointers
int main()
{
    int a,b,*c,*d,tmp;
    printf("Enter the 2 numbers \n");
    scanf("%d%d",&a,&b);
    printf("Entered Values\na= %d\nb= %d\n",a,b);
    c= &a;
    d= &b;
    tmp= *d;
    *d = *c;
    *c = tmp;
    printf("Result\na= %d\nb= %d\n",a,b);


}