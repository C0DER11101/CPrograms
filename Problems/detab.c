extern char line[];
extern char replacedLine[];

int countChar=0;
int idx=0;

void Detab()
{
	for(int i=0; i<strlen(line); i++)
	{
		if(line[i]=='\t')
		{
			while(countChar!=8)
			{
				replacedLine[idx++]=' ';
				countChar++;
			}
		}

		else
		{
			replacedLine[idx]=line[i];
			idx++;
			countChar++;
		}

		if(countChar==8) // 1 tab is equivalent to 8 spaces!!
			countChar=0;


	}

}
