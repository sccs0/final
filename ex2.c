#include<stdio.h>
#include<string.h>
int main()
{
	int i, j;
	char str[100], newstr[100];
	gets(str);
	for(j=0, i=strlen(str)-1; i>=0; i--, j++)
	{
		newstr[j] = str[i];
	}
	printf("%s", newstr);
	return 0;
} 
