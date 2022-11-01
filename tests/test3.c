#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
	char a[100]={'\0'}, input;

	int i=0;

	while(input!='^')
	{
		scanf("%c", &input);
		a[i]=input;
		i++;
	}

	a[i-1]='\0';

	printf("\n\nthis is the string that you entered:\n%s\n", a);

	for(int j=0; j<strlen(a); j++)
		if(a[j]=='\t')
			printf("\nCaught a tab at index %d\n", j);


	return 0;
}
