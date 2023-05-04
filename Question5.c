//Write a program in C to find the sum of left diagonals of a matrix.
#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum=0;
    printf("Enter The Elements :\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<=2;i++)
    {
            sum = sum + a[i][3-i-1];

    }
    printf("%d ",sum);

}