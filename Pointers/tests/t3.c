#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int _2D[3][4]={
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};

	int (*ptr)[4];

	ptr=_2D; // ptr stores the address of the 0th 1D array(_2D stores the address of the 0th 1D array)

	printf("\nDisplaying the contents of the 2-d array using the original matrix:\n");

	for(int i=0; i<3; i++)
	{
		for(int j=0; j<4; j++)
			printf("%d ", _2D[i][j]);
		printf("\n");
	}

	printf("\nDisplaying the contents of the 2-d array using \"pointer to array\":\n");

	for(int i=0; i<3; i++)
	{
		for(int j=0; j<4; j++)
			printf("%d ", *(*(ptr+i)+j));

		printf("\n");
	}

	return 0;
}
