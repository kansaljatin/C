#include<stdio.h>
#include<string.h>
int main()
{
	printf("enter the string ");
	int s0=0;int s1=0;int s2=0;int s3=0;int s4=0;int s5=0;int s6=0;int s7=0;int s8=0;int s9=0,i;
	char c[100];
	gets(c);
	for(i=0;i<strlen(c);i++)
	{
		if(c[i]=='0')
		s0=s0+1;
		if(c[i]=='1')
		s1=s1+1;
		if(c[i]=='2')
		s2=s2+1;
		if(c[i]=='3')
		s3=s3+1;
		if(c[i]=='4')
		s4=s4+1;
		if(c[i]=='5')
		s5=s5+1;
		if(c[i]=='6')
		s6=s6+1;
		if(c[i]=='7')
		s7=s7+1;
		if(c[i]=='8')
		s8=s8+1;
		if(c[i]=='9')
		s9=s9+1;	
	}
	printf("%d ",s0\n);
	printf("%d ",s1\n);
	printf("%d ",s2\n);
	printf("%d ",s3\n);
	printf("%d ",s4\n);
	printf("%d ",s5\n);
	printf("%d ",s6\n);
	printf("%d ",s7\n);
	printf("%d ",s8\n);
	printf("%d ",s9\n);
	return 0;
}
