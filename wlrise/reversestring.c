#include <stdio.h>
#include <string.h>
int main()
{
    int i,b,n;
    char txt[30];
    printf("Enter the string: ");
    scanf("%c",&txt[i]);
    n=strlen(txt);
    printf("%d latters",n);
    printf("Reversed String: ");
    for(i=n-1;i>=0;i--)
    {
        printf("%c",txt[i]);
    }
    return 0;
}
