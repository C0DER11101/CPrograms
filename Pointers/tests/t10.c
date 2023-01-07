#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int **arr, row, col;

	printf("enter number of rows and columns: ");
	scanf("%d%*c%d", &row, &col);

	arr=(int**)calloc(row, sizeof(int*));

	for(int i=0; i<row; i++)
		arr[i]=(int*)malloc(col*sizeof(int));

	printf("\nenter elements into the matrix:\n");

	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			printf("[%d][%d]: ", i, j);
			scanf("\n%d: ",(*(arr+i)+j));
		}
	}

	printf("\nshowing entered elements:\n");

	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
			printf("%d ",*(*(arr+i)+j));
		printf("\n");
	}

	for(int i=0; i<row; i++)
		free(arr[i]);

	free(arr);

	return 0;
}
