#include <stdio.h>
/*read two numbers. Find their product using a user defined 
function */
int mul(int a,int b);
int main()


{
    int a,b,ans;
    printf("Enter the Two Numbers: \n");
    scanf("%d %d",&a,&b);
    ans=mul(a,b);
    printf("Result = %d\n",ans);
    

}
int mul(int a,int b)
{
    int mul;
    mul= a*b;
    return mul;
   
    
}
