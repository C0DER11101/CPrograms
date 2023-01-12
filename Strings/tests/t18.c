#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char arr1[]="Priyanuj", arr2[]="Priyansu";

	if(strncmp(arr1, arr2, 5)==0)
		printf("\nFirst 5 letters are the same in both strings!\n");
	else
		printf("\nNot same!!\n");
	return 0;
}
