#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int **a, row, col;

	printf("enter number of rows and columns: ");
	scanf("%d%*c%d", &row, &col);

	a=(int**)calloc(row, sizeof(int*));

	for(int i=0; i<row; i++)
		a[i]=(int*)calloc(col, sizeof(int));

	printf("\nenter elements into the array:\n");

	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			printf("\n[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}

	printf("\nshowing the entered elements:\n");

	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			printf("%d ", a[i][j]);
		}

		printf("\n");
	}

	for(int i=0; i<row; i++)
		free(a[i]);


	free(a);

	return 0;
}
