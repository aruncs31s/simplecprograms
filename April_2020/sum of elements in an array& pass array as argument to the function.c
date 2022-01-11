#include <stdio.h>
/*April 2020 Xth quie*(b)
Write a user defined function to find the sum of elements in an array . Pass array
 as arguments to the function*/

int main()
{
int i,A[100],n;
printf("Enter the size of the array ");
scanf("%d",&n);
printf("Array elements: \n");
for(i=0;i<n;++i)
{
scanf("%d",&A[i]);
}

sum(A,n);
return 0;
}

int sum(int A[],int n)
{
int total=0;
for(int i=0;i<n;++i)
{
total=total+A[i];
}
printf("total=%d",total);
return 0;
}
