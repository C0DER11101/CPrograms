#include<stdio.h>
#include<string.h>

int main(void)
{
	char a[100]={'\0'};

	printf("enter a string: ");

	int i=-1;

	while(a[i]!='z')
	{
		++i;
		scanf("%c", &a[i]);
	}

	printf("%c\n", a[0]);

	for(int i=0; i<strlen(a); i++)
	{
		if(a[i]=='\t')
			printf("\nCaught a tab at index %d\n", i);
	}
	return 0;
}
