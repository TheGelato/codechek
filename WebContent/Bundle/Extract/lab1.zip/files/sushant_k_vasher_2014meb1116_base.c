#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int check(char[],int);
void convert(char[],int,int);
int main(int argc,char *argv[])
{
	int b1,b2;
	char s[100];
	b1=atoi(argv[1]);
	b2=atoi(argv[2]);
	strcpy(s,argv[3]);
	//printf("%s",s);

//	scanf("%d %d %s",&b1,&b2,s);
	int d=check(s,b1);
	if(d==0)
		printf("%d\n",d);
	else
	{
		convert(s,b1,b2);
		printf("%s\n",s );
	}
}
int check(char s[],int b1)
{//printf("%s",s);
		int i;
		int b=1;
		for(i=0;s[i]!='\0';i++)
		

		{
		if(s[i]>=48 && s[i]<=57)
			//printf("%d\n",s[i]);
			if((s[i]-48)>=b1)
			{b=0;break;}
		if(s[i]>=65)
			//printf("%d\n",s[i]);
			if((s[i]-55)>=b1)
			{b=0;break;}
		
			}

	//printf("%d",b);	
	return b;
}
void convert(char s[],int b1,int b2)
{
	int num=0;
	int n=0;
	int i,d,j;
	int temp;
	for(i=0;s[i]!='\0';i++)
		n++;
	int m=1;
	for(j=0;j<(n/2);j++)
	{
		temp=s[j];
		s[j]=s[n-j-1];
		s[n-j-1]=temp;
	}
	for(i=0;i<n;i++)
	{
		if(s[i]<=57)
			num+=((s[i])-48)*m;
		else
			num+=(s[i]-55)*m;
		m*=b1;
	}
	i=0;
	m=b2;
	while(num>0)
	{
		d=num%m;
		num-=d;
		d/=(m/b2);
		m*=b2;
		if(d<=9)
			s[i++]=48+d;
		else
			s[i++]=55+d;
	}
	for(j=0;j<(i/2);j++)
	{
		temp=s[j];
		s[j]=s[i-j-1];
		s[i-j-1]=temp;
	}
	s[i]='\0';
}
