#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char str[]="...why?but;not?oh!, where when";
	char *seps="?!;,. \t";
	char *seps2=".,;!? \t";
	int len=strlen(str);
	printf("%s\n", str);

	char *t;

	t=strtok(str, seps2);

	while(t!=NULL)
	{
		printf("%s ", t);
		t=strtok(NULL, seps2);
	}
	printf("\n\n%s\n\n", str);

	printf("\n%s\n", seps2);


	for(int i=0;i<len; i++)
		printf("%c", str[i]);

	printf("\n");
	return 0;
}
