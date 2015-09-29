#include<stdio.h>
#include<math.h>
#include<string.h>

int reverse(int x)
{
	int w=0;
	while(x!=0)
	{
		w=w*10+x%10;
		x=x/10;
	}
	return w;
}

int p(int k, int l)
{
	int i,b=1;
	for(i=1;i<=l;i++)
	{
		b=b*k;
	}
	return b;
}

int btd(int z)
{
	int y=0;
	int c=0;
	while(z!=0)
	{
		y=y+(z%10)*p(2,c);
		z=z/10;
		c++;
	}
	return y;
}

int otd(int z)
{
	int y=0;
	int c=0;
	while(z!=0)
	{
		y=y+(z%10)*p(8,c);
		z=z/10;
		c++;
	}
	return y;
}

int htd(char *f[])
{
	int y=0;
	int w=strlen(f[0]),c;
	c=w-1;
	while(c>0)
	{
		char g=f[0][c];
		if(g>=48&&g<=57)
			y=y+(g-48)*p(16,w-1-c);
		else if(g>=65&&g<=70)
			y=y+(g-55)*p(16,w-1-c);
		else if(g>=97&&g<=102)
			y=y+(g-87)*p(16,w-1-c);
		c--;
	}
	return y;
}

void dtb(int z)
{
	int y=0,c=0,l;
	char ch[100];
	while(z!=0)
	{
		ch[c++]=z%2+48;
		z=z/2;
	}
	for(l=c-1;l>=0;l--)
	{
		printf("%c",ch[l]);
	}
}

void dto(int z)
{
	int y=0,c=0,l;
	char ch[100];
	while(z!=0)
	{
		ch[c++]=z%8+48;
		z=z/8;
	}
	for(l=c-1;l>=0;l--)
	{
		printf("%c",ch[l]);
	}
}

void dth(int z)
{
	int y=0,c=0,l,v;
	char ch[100];
	while(z!=0)
	{
		v=z%16;
		if(v<10)
			ch[c++]=v+48;
		else
			ch[c++]=v+55;
		z=z/16;
	}
	for(l=c-1;l>=0;l--)
		printf("%c",ch[l]);
}

int main(int argc, char *argv[])
{
	int l=strlen(argv[3]),i,flag=1,n,a;
	if(argv[1][0]=='2'&&argv[1][1]=='\0')
	{
		for(i=0;i<l;i++)
		{
			if(argv[3][i]<48||argv[3][i]>49)
			{
				flag=0;
				printf("0");
				break;
			}
		}
		if(flag==1)
		{
			a=atoi(argv[3]);
			n=btd(a);
			if(argv[2][0]=='8'&&argv[2][1]=='\0')
				dto(n);
			else if(argv[2][0]=='1'&&argv[2][1]=='0'&&argv[2][2]=='\0')
				printf("%d",n);
			else if(argv[2][0]=='1'&&argv[2][1]=='6'&&argv[2][2]=='\0')
				dth(n);
		}
		else
			printf("0");
	}

	else if(argv[1][0]=='8'&&argv[1][1]=='\0')
	{
		for(i=0;i<l;i++)
		{
			if(argv[3][i]<48||argv[3][i]>55)
			{
				flag=0;
				printf("0");
				break;
			}
		}
		if(flag==1)
		{
			a=atoi(argv[3]);
			n=otd(a);
			if(argv[2][0]=='2'&&argv[2][1]=='\0')
				dtb(n);
			if(argv[2][0]=='1'&&argv[2][1]=='0'&&argv[2][2]=='\0')
				printf("%d",n);
			if(argv[2][0]=='1'&&argv[2][1]=='6'&&argv[2][2]=='\0')
				dth(n);
		}
		else
			printf("0");
	}

	else if(argv[1][0]=='1'&&argv[1][1]=='0'&&argv[1][2]=='\0')
	{
		for(i=0;i<l;i++)
		{
			if(argv[3][i]<48||argv[3][i]>57)
			{
				flag=0;
				printf("0");
				break;
			}
		}
		if(flag==1)
		{
			a=atoi(argv[3]);
			if(argv[2][0]=='2'&&argv[2][1]=='\0')//{}
				dtb(a);
			else if(argv[2][0]=='8'&&argv[2][1]=='\0')
				dto(a);
			else if(argv[2][0]=='1'&&argv[2][1]=='6'&&argv[2][2]=='\0')
				dth(a);
		}
		else
			printf("0");
	}

	else if(argv[1][0]=='1'&&argv[1][1]=='6'&&argv[1][2]=='\0')
	{
		for(i=0;i<l;i++)
		{
			if(argv[3][i]<48||(argv[3][i]>57&&argv[3][i]<65)||(argv[3][i]>70&&argv[3][i]<97)||argv[3][i]>102)
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		{
			n=htd(argv[3]);
			//printf("%d",n);
			if(argv[2][0]=='2'&&argv[2][1]=='\0')
				dtb(n);
			if(argv[2][0]=='8'&&argv[2][1]=='\0')
				dto(n);
			if(argv[2][0]=='1'&&argv[2][1]=='0'&&argv[2][2]=='\0')
				printf("%d",n);
		}
		else
			printf("0");
	}
}
