/*Programming in c ,April,2019 II(2)*/
/*cprogram to print multiplication table 
of an enterered number*/
#include <stdio.h>

int main()
{
int a,b,c;
printf("Enter the number: ");
scanf("%d",&a);
printf("To \"?\" times?: ");
scanf("%d",&b);
//
for (c=1;c<=b;c++){
    int mul_table=a*c;
    printf(" %d,",mul_table);
}
printf("\n");
}