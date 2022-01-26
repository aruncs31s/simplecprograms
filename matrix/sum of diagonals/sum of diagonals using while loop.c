//sum of diagonal of a mxn matrix using while loop
#include <stdio.h>
int main()
{
    int m,n,i,j,A[100][100],sum;
    printf("Enter the Value of Rows: ");
    scanf("%d",&m);
    printf("\nEnter the value of Columns: ");
    scanf("%d",&n);
    printf("Enter the elements\n");
    i=0;
    while(i<m)
    {
        j=0;
        while(j<n)
        {
            scanf("%d",&A[i][j]);
            j=j+1;
        }
    i=i+1;    
    }
    i=0;
    while(i<m)
    {
        j=0;
        while(j<n)
        {
            printf("\t%d",A[i][j]);
            j=j+1;
        }
        printf("\n");
    i=i+1;    
    }
    i=0;
    while(i<m)
    {
        j=0;
        while(j<n)
        {
            if(A[i][j]==A[j][i])
            {
                sum=sum+A[i][j];
            }
            j=j+1;
        }
        i=i+1;
    }
    printf("\nsum of main diagonal = %d\n",sum);


}
