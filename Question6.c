//Write a program in C to find the sum of rows and columns of a Matrix
#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum=0,sumc=0;
    printf("Ente The Elements Of Array\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            sum=sum+a[i][j];
        }
    }
    printf("Sum Of Rows is %d \n",sum);
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            sumc=sumc+a[j][i];
        }
    }
    printf("Sum Of Colums is %d",sumc);
}