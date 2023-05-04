//Write a program in C to accept a matrix and determine whether it is a sparse matrix
#include <stdio.h>
int main ()
{
    int arr[10][10];
	int i,j,row,col;
	int count=0;
     printf("\n\nDetermine whether a matrix is a sparse matrix :\n");
     printf("----------------------------------------------------\n");	
     printf("Input the number of rows of the matrix : ");
     scanf("%d", &row); 
     printf("Input the number of columns of the matrix : ");
     scanf("%d", &col); 
	 printf("Input elements in the first matrix :\n");
       for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&arr[i][j]);
			if (arr[i][j]==0)
			{
				count++;
			}
            }
        }  
	if (count>((row*col)/2))
	{
		printf ("The given matrix is sparse matrix. \n");
	}
	else
		printf ("The given matrix is not a sparse matrix.\n");

	printf ("There are %d number of zeros in the matrix.\n\n",count);
}
