#include<stdio.h>
#include<conio.h>
int main()
{
	int a,sumr,suml=0,i=0,m=0,s=0;
	scanf("%d",&a);
	printf("%d",a);
	int ar[1000][1000];
	while(i<a)
	{
		for(int j =0;j<a;j++)
		scanf("%d\t",&ar[i][j]);
		printf("\n");
		i++;
	}
	while(m<a)	
	{
		for(int n=0;n<a;n++)
		{	s=m+n;
			if(m==n)
			suml=suml+ar[m][n];
			if(s==a-1)
			sumr=sumr+ar[m][n];
		}
		m++;
	}
	printf("%d",suml-sumr);
	return 0;
}
