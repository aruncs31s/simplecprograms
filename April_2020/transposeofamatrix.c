#include <stdio.h>
int main()
//transposeofamatrix
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
        printf("Transpose = \n");

        for(j=0; j<m; ++j)
        {


            for(i=0; i<n; ++i)
            {
                printf("  %d",A[i][j]);
            
            }
            printf("\n");
        }
}


