#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	int sumr,suml=0;
	scanf("%d",&a);
	printf("%d",a);
	int ar[1000][1000];
	for(int i=0;i<a;i++)
	{
		for(int j =0;j<a;j++)
		{
			scanf("%d\t",&ar[i][j]);
		}
		printf("\n");
	}
	for(int m=0;m<a;m++)
	{
		for(int n=0;n<a;n++)
		{
			if(m==n)
			{
				suml=suml+ar[m][n];
			}
			if(m+n==a-1)
			{
				sumr=sumr+ar[m][n];
			}
		}
	}
	printf("%d",suml-sumr);
	return 0;
}
