int bits[32]; // 32 bits

void DisplayBits(int dec)
{
	int i=31;
	while(dec!=0 && i>=0)
	{
		bits[i--]=dec%2;
		dec/=2;
	}

	for(int j=0; j<32; j++)
	{
		printf("%d", bits[j]);
		if(j%8==7)
			printf(" ");
	}
	printf("\n");
	return;
}
