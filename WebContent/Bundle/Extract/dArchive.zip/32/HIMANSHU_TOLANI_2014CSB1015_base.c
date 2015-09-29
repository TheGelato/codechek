#include<stdio.h>
#include<string.h>
#include<unistd.h>
void convert1(int,int,char[]);
void convert2(int,long long int);
long long int power(int,int);
int check (int,char[] );
 int main(int argc, char *argv[])
{
int b1=atoi(argv[1]);// converts base1 into int type
int b2=atoi(argv[2]);
int i=0;
int l=strlen (argv[3]);// length of string
char a[l];
strcpy(a,argv[3]);


if(b1==b2)
{
   int b=check(b1,a);// function to check whether string is valid
   if(b==0)
   {
printf("%s",a);
}
else if (b==1)
{
printf("0");
}
}
else
{
	int r=check(b1,a);
	if (r==0)
	{
     convert1 (b1,b2,a);// function to convert into decimal number system
    }
    else {
    	printf("0");
	}

}

return 0;
}


int check (int m,char s3[])
{
	int i,k,flag=0,p=0;
	int u=m;
	int l=strlen(s3);
	int n[l];
	for(i=0;i<l;i++)
	{
		k=s3[i];
		if(k>=48 && k<=57)
		{
			k=k-48;
                    if (k==0)
                    {
                      p++;
                     }
		}
		else if (k>=65 && k<=70)
		{
			k=k-55;
		}
		n[i]=k;
		
	}

	
	for (i=0;i<l;i++)
	{
            if(p==l)
           {
            printf("0");
break;
            }  
            
		else if (n[i]>=0 && n[i]<=u-1)
		{

			continue;
		}
		else 
		{
			flag=1;break;
		}
	}
	return (flag);
	
}

long long int  power(int d,int f)// power function
{
long long int s1=1;
int j,d1,f1;
d1=d;
f1=f;
for (j=1;j<=f1;j++)
{
s1=s1*d1;
}

return (s1);
}

void convert1 (int a,int b,char t[])// to convert any base to decimal type
{
int	l=strlen(t);int i,k;
long long int s=0; 
	for(i=0;i<l;i++)
	{
		k=t[i];
		if(k>=48 && k<=57)
		{
			s=s+(k-48)*power(a,l-1-i);
		}
		else 
		{
			s=+(k-55)*power(a,l-1-i);
		}
	 } 
	 
	 convert2(b,s);
		
	
}

void convert2(int m,long long int n)// converts decimal type number into base 2 type
{
	long long int p=1,t;int c=0,j;
	t=n;;
	
	while(p<n)
	{
		p=p*m;
		c++;
	}
	int d[c];
	c=0;
	while(t!=0)
	{
		d[c++]=t%m;
		t=t/m;
	}
	for (j=c-1;j>=0;j--)
	{
		if (d[j]>=10)
		{
			char a=d[j]+55;
			printf("%c",a);
		}
		else {
			printf("%d",d[j]);
		}
	}
}
