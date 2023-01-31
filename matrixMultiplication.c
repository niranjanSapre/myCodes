#include<stdio.h>
#include<string.h>
void matrixMultiplication(int r1,int c1,int r2,int c2,int M1[r1][c1],int M2[r2][c2]);
int main()
{
	r1=r2=c1=c2=2;
		if(c1==r2)
	{
		int i,j;
		int M1[r1][c1];
		int M2[r2][c2];
		/*printf("\nEnter matrix elements of matrix A\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("\nEnter element A[%d][%d] : ",i,j);
				scanf("%d",&M1[i][j]);
			}
		}*/
		int k=4;
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				M1[i][j]=(int)a[k++]-48;
			}
		}
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				M2[i][j]=(int)a[k++]-48;
			}
		}
		
		for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("\t%d",M1[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("\t%d",M2[i][j]);
		}
		printf("\n");
	}
		
		/*printf("\nEnter matrix elements of matrix B\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("\nEnter element B[%d][%d] : ",i,j);
				scanf("%d",&M2[i][j]);
			}
		}*/
		matrixMultiplication(r1,c1,r2,c2,M1,M2);
	}
	else
	{
		printf("\nMatrix multiplication not possible");
	}
}
void matrixMultiplication(int r1,int c1,int r2,int c2,int M1[r1][c1],int M2[r2][c2])
{
	int i,j,k;
	int M3[r1][c2];
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			M3[i][j]=0;
			for(k=0;k<c2;k++)
			{
				M3[i][j]+=M1[i][k]*M2[k][j];
			}
		}
	}
	printf("\nMatrix Multiplication is\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("\t%d",M3[i][j]);
		}
		printf("\n");
	}
}
