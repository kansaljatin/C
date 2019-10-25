#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	int i=a;
	while(i<=b)
	{
		if(i==1)
			printf("one\n");
			printf(" ");
		if(i==2)
			printf("two\n");
			printf(" ");
		if(i==3)
			printf("three\n");
			printf(" ");
		if(i==4)
			printf("four\n");
		if(i==5)
			printf("five\n");
			printf(" ");
		if(i==6)
			printf("six\n");
			printf(" ");
		if(i==7)
			printf("seven\n");
			printf(" ");
		if(i==8)
			printf("eight\n");
			printf(" ");
		if(i==9)
			printf("nine\n");
			printf(" ");
	i++;
	}
	int j=10;
	while(j<=b)
	{
		if(j%2==0)
			printf("even\n");
			printf(" ");
		
		else
			printf("odd\n");
			printf(" ");
	j++;
	}
	return 0;
}
