#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
	char *option;
	
	option=(char*)malloc(10*sizeof(char));
	int opt, chosen=0;

	char *digits[]={
		"1",
		"2",
		"3",
		"4"
	};

	printf("\nChoose one of them:\n");
	printf("1) 1.\n");
	printf("2) 2.\n");
	printf("3) 3.\n");
	printf("4) 4.\n");
	scanf("%s", option);

	for(int i=0; i<4; i++)
	{
		if(strcmp(option, digits[i])==0)
		{
			chosen=1;
			break;
		}
	}

	if(chosen==1)
	{
		sscanf(option, "%d", &opt);

		switch(opt)
		{
			case 1:
				printf("\nYou chose 1.\n");
				break;
			case 2:
				printf("\nYou chose 2.\n");
				break;
			case 3:
				printf("\nYou chose 3.\n");
				break;
			case 4:
				printf("\nYou chose 4.\n");
				break;
			default:
				printf("\nInvalid option.\n");
				break;
		}
	}

	else
	{
		printf("\nInvalid option.\n");
	}

	free(option);

	return 0;
}
