#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
int power(int z,int rr){
int ii,jj=1;
for(ii=0;ii<rr;ii++)
jj=jj*z;
return jj;
}
int main( int argc, char *argv[])
{
	int b1,b2;
	b1=atoi(argv[1]);
	b2=atoi(argv[2]);
	int l=strlen(argv[3]);
        char w[50];
        strcpy(w,argv[3]);
	int i=0,j=0,k=0;
	for (i=0; i<=l-1;i++)
	{
		if (b1==2 && ( w[i]!='0'&&w[i]!='1'))
		{printf ("0\n");
                return 0;}
		else if (b1==8 && !(w[i]>='0'&&w[i]<='7' ))
		{printf ("0\n");
                 return 0;}
		else if (b1==10 &&!( w[i]>='0'&&w[i]<='9'))
		{printf ("0\n");
                  return 0;}
		else if (b1==16 &&!(( w[i]>='0'&&w[i]<='9') || (w[i]>='A'||w[i]<='F')))
		{printf ("0\n");
                  return 0;}
	    //break;
	}
	int n3,n10[l],nt=0,temp,n2=0;
	for (j=0; j<=l-1;j++)
	{
		if (w[j]>47 && w[j]<58)
		{
			n10[j]=w[j]-48;	
		}
		else if (w[j]>=65 && w[j]<=70)
		{
			n10[j]=w[j]-55;	
		}
		
	}
	
        int b=0;
        for (k=0;k<=l-1;k++)
		
                {
	        b =b+n10[l-1-k]*power((b1),k);
                }
	int a,c,d=0;
	char t[50];
	while (b!=0)
	{
		c=b%b2;
		b=b/b2;
		
		if (c>=0 && c<=9)
		{
			t[d]=c+48;
		}
		else if (c>=10&&c<=15)
		{
		    t[d]=c+55;
		}
		++d;
	}
	int h=0;
	for(h=d-1;h>=0;h--)
	printf("%c",t[h]);
	return 0;
}
