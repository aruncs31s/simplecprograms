#include <stdio.h>
int main()
//read a mxn matrix
{
    int m,n,i,j,A[20][20];
        printf("Enter the No of Rows \n");
        scanf("%d",&m);
        printf("Enter the No of Columns \n");
        scanf("%d",&n);
        printf("Enter the elements\n");

        for(i=0; i<m; ++i)
        {
            for(j=0; j<n; ++j)
            {
                scanf("  %d",&A[i][j]);
            }
        }
        for(i=0; i<m; ++i)
        {
            for(j=0; j<n; ++j)
            {
                printf("  %d",A[i][j]);

            }
            printf("\n");
        }
}    
