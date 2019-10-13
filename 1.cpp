#include<stdio.h>
int main()
{
	int a,b[a],sum=0;
	scanf("%d",&a);
	for(int i=0;i<a;i++)
	{
		scanf("%d",&b[i]);
	}
	for(int j=0;j<a;j++)
	{
		sum=sum+b[j];
	}
	printf("%d",sum);
    return 0;
}
