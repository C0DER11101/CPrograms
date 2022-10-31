extern int max;

void FindMax(int a, int b, int c)
{
	if(a>b)
	{
		if(a>c)
			max=a;
		else
			max=c;
	}

	else
	{
		if(b>c)
			max=b;
		else
			max=c;
	}

	printf("\n\nThe greatest number is: %d\n", max);
}
