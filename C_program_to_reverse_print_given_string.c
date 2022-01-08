#include <stdio.h>
#include <string.h>
/* C program To print The Given String in reverse order*/
int main()
{
    int l,i;
    char n[30],m;
    printf("Enter The string: ");
    scanf("%s",n);
    l= strlen(n);
    for(i=0;i<l/2;i++)
    {
        m=n[i];
        n[i]=n[l-1-i];
        n[l-1-i]=m;
    }
    printf("Reversed String: %s\n",n);

   
}