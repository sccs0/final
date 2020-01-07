#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int change(char * str)
{
	int i;
	for(i=0; i<strlen(str)-1; i++)
	{
		if(!(str[i]>='0' && str[i]<='9'))
		{
			return -1;
		}
	}
	return atoi(str);
}
int main(int argc, char *argv[])
{
	int i, n, k, min;
	k = 1;
	if(argc == 1)
		printf("The program needs at least one integer parameter to run!");
	else
	{
		min = change(argv[1]);
		if(min == -1)
		{
			k = 0;
			printf("The parameter has to be an integer format!");
		}
		else
		{
			for(i = 2; i < argc; i++)
			{
				n = change(argv[i]);
				if(n == -1)
				{
					k = 0;
					printf("The parameter has to be an integer format!");
					break;
				}
				else
				{
					if(min > n)
						min = n;
				}
			}
			if(k==1)
				printf("Min parameter is %d", min);
		}
	}

	return 0;
} 
