#include<stdio.h>
#include<stdlib.h>

int main(int argc, char*argv[])
{
	for(int i=0; i<10; i++)
	{
		for(int j=0; j<10; j++)
			printf("%s", argv[1]);
		printf("\n");
	}

	return 0;
}
