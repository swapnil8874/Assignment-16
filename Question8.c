//Write a program in C to print or display an upper triangular matrix.
#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    printf("Enter The Value\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]); 
        }
    }
     printf(" Lower triangular is\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            if(j>=i)
            {
                printf("%d ",a[i][j]);
            }
            else
            printf("%d ",0);
        }
        printf("\n");
    }
    
}