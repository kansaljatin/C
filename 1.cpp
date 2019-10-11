#include<conio.h>
#include<string.h>
#include<stdio.h>
int main()
{
	int a;
	int sum=0;
	scanf("%d",&a);
	int b[a];
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
