//Write a program in C to find the transpose of a given matrix.
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],i,j;
    printf("Enter The Value of Array\n");
    for(i=0;i<=2;i++)
    {
        for ( j = 0; j <= 2; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Transpose of Array\n");
    for(i=0;i<=2;i++)
    {
        for ( j = 0; j <= 2; j++)
        {
            b[i][j] = a[j][i];
            printf(" %d ",b[i][j]);

        }
    }
    
}