#include<stdio.h>
#include<string.h>
int main()
{
	char c[100];
	gets(c);
	for(int i=0;i<strlen(c);i++)
	{
		if(c[i]==' ')
		{
			printf("\n");
		}
	}
	return 0;
}
