#include<stdio.h>
#include<string.h>
int main()
{
	char c[100];
	gets(c);
	int d=0;
	while (c[d] != '\0')
    	d++;
	for(int i=0;i<d;i++)
	{
		if(c[i]==" ")
		{
			printf("\n");
		}
	}
	return 0;
}
