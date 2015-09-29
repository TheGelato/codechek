#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int p(long long int k,long long int g)
{
	long long int a=1,i;
	for(i=1;i<=g;i++)
		a=a*k;
	return a;
}
int main(int argc , char *argv[])
{
	long long int b1,b2,m,r,l,u,i,q2=0,q8=0,q10=0,q16=0,v=0,w=0,m3=0,y=0,t=strlen(argv[3]);
	b1=atoi(argv[1]);
	b2=atoi(argv[2]);
	long long int k[t];
	for(i=0;i<=t-1;i++)
	{
		if(argv[3][i]=='A' || argv[3][i]=='B' || argv[3][i]=='C' || argv[3][i]=='D' || argv[3][i]=='E' || argv[3][i]=='F' )
			k[i]=argv[3][i]-'7';
		else
			k[i]=argv[3][i]-'0';
	}
	for(m=0;m<=t-1;m++)
	{
		if(k[m]<16)
		q16=q16+1;
		if(k[m]<10)
		q10=q10+1;
		if(k[m]<8)
		q8=q8+1;
		if(k[m]<2)
		q2=q2+1;
	}
	while(1)
	{
		if((q2!=t && b1==2) || (q10!=t && b1==10) || (q8!=t && b1==8) || (q16!=t && b1==16)) //To print 0
		{
			printf("0");
			exit(0);
		}
		if((q2==t && b1==2) || (q8==t && b1==8) || (q10==t && b1==10) || (q16==t && b1==16))
		{
			for(u=1;u<=t;u++)
				y=y+k[t-u]*p(b1,u-1); //Binary, octal, deciamal, hexadecimal to decimal conversion
			break;
		}
	}
	if(b2==2 || b2==8 || b2==10)
	{
		long long int m1[100]; int m2=0; //Decimal to binary, octal, decimal conversion
		while(y!=0)
		{
			m1[m2]=(y%b2);
			y=y/b2;
			m2=m2+1;
		}
		for(m3=m2-1;m3>=0;m3--)
			printf("%lli",m1[m3]);
		exit(0);
	}
	if(b2==16)
	{
		long long int z=0; long long int mn[100]; //Decimal to hex conversion
		while(y!=0)
		{
			mn[z]=y%16;
			y=y/16;
			z=z+1;
		}
		for(l=z-1;l>=0;l--)
		{
			if(mn[l]<10)
				printf("%lli",mn[l]);
			else
				printf("%c",((int)mn[l])+'7');
		}
	}
	return 0;
}
