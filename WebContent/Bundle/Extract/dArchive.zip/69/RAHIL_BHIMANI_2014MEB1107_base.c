#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int w(int s,int d)
{
int f;
int h=1;
for(f=0;f<d;f++)
{
h=h*s;
}
return h;
}
int main(int argc,char *argv[])
{
	int r,u;
 if(argv[1][0]=='2')
{
r=2;
}
if(argv[1][0]=='8')
{
r=8;
}
if(argv[1][0]=='1' && argv[1][1]=='0')
{
r=10;
}
if(argv[1][0]=='1' && argv[1][1]=='6')
{
r=16;
}
 if(argv[2][0]=='2')
{
u=2;
}
if(argv[2][0]=='8')
{
u=8;
}
if(argv[2][0]=='1' && argv[2][1]=='0')
{
u=10;
}
if(argv[2][0]=='1' && argv[2][1]=='6')
{
u=16;
}
{
if(r==2&&(u==8||u==2))
{
	
    long long int i=0,j,m,p=0,a[50],l=0;
 i=strlen(argv[3]);
            for(j=0;j<i;j++)
{
        {
		argv[3][j]=argv[3][j]-'0';
			if(argv[3][j]<0||argv[3][j]>1)
	{
		printf("0");
return 1;
	}
        l=l+argv[3][j]*w(2,(i-1-j));
    }
}
i=0;
 while(l!=0)
 {
     a[i]=l%8;
     l=l/8;
     i++;
 }
   for(j=i-1;j>=0;j--)
   {
       printf("%lli",a[j]);
   }
}
if(r==2&&u==10)
{
	
long long int l=0,i,j;
 i=strlen(argv[3]);
            for(j=0;j<i;j++)
        {
        			if(argv[3][j]!='0'&&argv[3][j]!='1')
	{
		printf("0");
return 1;
	}
		argv[3][j]=argv[3][j]-'0';
        l=l+argv[3][j]*w(2,(i-1-j));
    }

 printf("%lli",l);
}
if(r==2&&u==16)
{
	
long long int l=0,i,j;
    long long int x,a[50],t;
 i=strlen(argv[3]);
            for(j=0;j<i;j++)
{
        {
        			if(argv[3][j]!='0'&&argv[3][j]!='1')
	{
		printf("0");
return 1;
	}
		argv[3][j]=argv[3][j]-'0';
        l=l+argv[3][j]*w(2,(i-1-j));
    }
}
i=0;
   while(l!=0)
{
    a[i]=l%16;
    l=l/16;
    i++;
    }
    for(j=i-1;j>=0;j--)
{
    t=a[j]%9;
    if(a[j]<=9)
    {
        printf("%lli",a[j]);
    }
    if(a[j]==10)
    {
        printf("A");
    }
    if(a[j]==11)
    {
        printf("B");
    }
     if(a[j]==12)
    {
        printf("C");
    }
    if(a[j]==13)
    {
        printf("D");
    }
    if(a[j]==14)
    {
        printf("E");
    }
     if(a[j]==15)
    {
        printf("F");
    }
}
}
if(r==8&&u==2)
{
	
    long long int i,j,m,l,p=0;
   l=strlen(argv[3]);
   for(i=0;i<l;i++)
   {
       argv[3][i]=argv[3][i]-'0';
       if(argv[3][i]<0 || argv[3][i]>7)
	{
		printf("0");
return 1;
	}
       p=p+argv[3][i]*w(8,l-1-i);
   }
i=0;
long long int a[50];
	 while(p!=0)
    {
        a[i]=p%2;
       p= p/2;
       i++;
    }
    for(j=i-1;j>=0;j--)
{printf("%lli",a[j]);
}
}
if(r==8 && u==10)
{

    long long int i,j,m,l,p=0;
   l=strlen(argv[3]);
   for(i=0;i<l;i++)
   {
       argv[3][i]=argv[3][i]-'0';
       if(argv[3][i]<0 || argv[3][i]>7)
	{
		printf("0");
return 1;
	}
       p=p+argv[3][i]*w(8,l-1-i);
   }
   printf("%lli",p);
}
if(r==8&&(u==16||u==8))
{
	
    long long int i,j,m,l,p=0;
       long long int x,a[25],t;
   l=strlen(argv[3]);
   for(i=0;i<l;i++)
{        	
	  		
       argv[3][i]=argv[3][i]-'0';
     if(argv[3][i]<0 || argv[3][i]>7)
	{
		printf("0");
return 1;
	}
       p=p+argv[3][i]*w(8,l-1-i);
   }
   i=0;
   while(p!=0)
{
    a[i]=p%16;

    p=p/16;
    i++;
    }
    for(j=i-1;j>=0;j--)
{
    if(a[j]<=9)
    {
        printf("%lli",a[j]);
    }
    if(a[j]==10)
    {
        printf("A");
    }

    if(a[j]==11)
    {
        printf("B");
    }

     if(a[j]==12)
    {
        printf("C");
    }
    if(a[j]==13)
    {
        printf("D");
    }
    if(a[j]==14)
    {
        printf("E");
    }
     if(a[j]==15)
    {
        printf("F");
    }
}
}
if(r==10&&u==2)
{
	
        long long int i=0,e,q,j,x=0;
int l;
l=strlen(argv[3]);
for(q=0;q<l;q++)
{        	argv[3][q]=argv[3][q]-'0';
if(argv[3][q]<0||argv[3][q]>9)
{
printf("0");
return 1;
}
x=x+(argv[3][q]*w(10,l-1-q));
}

	 while(x!=0)
    {
        argv[3][i]=x%2;
       x= x/2;
       i++;
    }
    for(j=i-1;j>=0;j--)
{printf("%i",argv[3][j]);
}
}
if(r==10&&(u==10||u==8))
{
        long long int x=0,q,i=0,j,m,p=0,a[50];
int l;
l=strlen(argv[3]);
for(q=0;q<l;q++)
{        	argv[3][q]=argv[3][q]-'0';
if(argv[3][q]<0||argv[3][q]>9)
{
printf("0");
return 1;
}
p=p+(argv[3][q]*w(10,l-1-q));
}
 while(x!=0)
 {
     a[i]=x%8;
     x=x/8;
     i++;
 }
   for(j=i-1;j>=0;j--)
   {
       printf("%llii",a[j]);
   }
}
if(r==10&&(u==10||u==16))
{
    long long int p=0,a[50],i=0,t,j,q;
int l;
l=strlen(argv[3]);
for(q=0;q<l;q++)
{        	argv[3][q]=argv[3][q]-'0';
if(argv[3][q]<0||argv[3][q]>9)
{
printf("0");
return 1;
}
p=p+(argv[3][q]*w(10,l-1-q));
}
 while(p!=0)
{
    a[i]=p%16;
    p=p/16;
    i++;
    }
    for(j=i-1;j>=0;j--)
{
    if(a[j]<=9)
    {
        printf("%lli",a[j]);
    }
    if(a[j]==10)
    {
        printf("A");
    }
    if(a[j]==11)
    {
        printf("B");
    }
     if(a[j]==12)
    {
        printf("C");
    }
    if(a[j]==13)
    {
        printf("D");
    }
    if(a[j]==14)
    {
        printf("E");
    }
     if(a[j]==15)
    {
        printf("F");
    }
	}
	}
if(r==16&&(u==2||u==16))
{
	
 long long int j,i=0,x,t,p;
     	        long long int a[50];

    i=strlen(argv[3]);
    p=0;
    for(j=0;j<i;j++)
    {
    if(argv[3][j]!='0' && argv[3][j]!='1' && argv[3][j]!='2' && argv[3][j]!='3' && argv[3][j]!='4' && argv[3][j]!='5' && argv[3][j]!='6' && argv[3][j]!='7' && argv[3][j]!='8' && argv[3][j]!='9' && argv[3][j]!='A' && argv[3][j]!='B' && argv[3][j]!='C' && argv[3][j]!='D' && argv[3][j]!='E' && argv[3][j]!='F')
	{
		printf("0");
return 1;
	}
	
	
        if(argv[3][j]<='9')
        {
        	argv[3][j]=argv[3][j]-'0';

    p=p+argv[3][j]*(w(16,i-1-j));
        }
        if(argv[3][j]=='A')
        {
            argv[3][j]=10;
                p=p+(argv[3][j])*(w(16,i-1-j));
        }
        if(argv[3][j]=='B')
        {
            argv[3][j]=11;
                p=p+argv[3][j]*(w(16,i-1-j));
        }
        if(argv[3][j]=='C')
        {
            argv[3][j]=12;
                p=p+argv[3][j]*(w(16,i-1-j));
        }
        if(argv[3][j]=='D')
        {
            argv[3][j]=13;
                p=p+(argv[3][j]*(w(16,i-1-j)));
        }
        if(argv[3][j]=='E')
        {
            argv[3][j]=14;
                p=p+argv[3][j]*(w(16,i-1-j));
        }
        if(argv[3][j]=='F')
        {
            argv[3][j]=15;
                p=p+argv[3][j]*(w(16,i-1-j));
        }
    }
i=0;
	 while(p!=0)
    {

        a[i]=p%2;
       p= p/2;
       i++;
    }
    for(j=i-1;j>=0;j--)
{printf("%lli",a[j]);
}
}
if(r==16&&(u==8||u==16))
{
	
 long long int j,i=0,x,t,p;
      long long int m,a[50];

    i=strlen(argv[3]);
    p=0;
    for(j=0;j<i;j++)
    {
    	if(argv[3][j]!='0' && argv[3][j]!='1' && argv[3][j]!='2' && argv[3][j]!='3' && argv[3][j]!='4' && argv[3][j]!='5' && argv[3][j]!='6' && argv[3][j]!='7' && argv[3][j]!='8' && argv[3][j]!='9' && argv[3][j]!='A' && argv[3][j]!='B' && argv[3][j]!='C' && argv[3][j]!='D' && argv[3][j]!='E' && argv[3][j]!='F')
	{
		printf("0");
return 1;
	}
        if(argv[3][j]<='9')
        {
        	argv[3][j]=argv[3][j]-'0';
    p=p+argv[3][j]*(w(16,i-1-j));
        }
        if(argv[3][j]=='A')
        {
            argv[3][j]=10;
                p=p+(argv[3][j])*(w(16,i-1-j));
        }
        if(argv[3][j]=='B')
        {
            argv[3][j]=11;
                p=p+argv[3][j]*(w(16,i-1-j));
        }
        if(argv[3][j]=='C')
        {
            argv[3][j]=12;
                p=p+argv[3][j]*(w(16,i-1-j));
        }
        if(argv[3][j]=='D')
        {
            argv[3][j]=13;
                p=p+(argv[3][j]*(w(16,i-1-j)));
        }
        if(argv[3][j]=='E')
        {
            argv[3][j]=14;
                p=p+argv[3][j]*(w(16,i-1-j));
        }
        if(argv[3][j]=='F')
        {
            argv[3][j]=15;
                p=p+argv[3][j]*(w(16,i-1-j));
        }
    }
i=0;
 while(p!=0)
 {
     a[i]=p%8;
     p=p/8;
     i++;
 }
   for(j=i-1;j>=0;j--)
   {
       printf("%lli",a[j]);
   }
}
if(r==16&&(u==10||u==16))
{
	
     long long int j,i=0,x,t,p;

    i=strlen(argv[3]);
    p=0;
    for(j=0;j<i;j++)
    {
    	if(argv[3][j]!='0' && argv[3][j]!='1' && argv[3][j]!='2' && argv[3][j]!='3' && argv[3][j]!='4' && argv[3][j]!='5' && argv[3][j]!='6' && argv[3][j]!='7' && argv[3][j]!='8' && argv[3][j]!='9' && argv[3][j]!='A' && argv[3][j]!='B' && argv[3][j]!='C' && argv[3][j]!='D' && argv[3][j]!='E' && argv[3][j]!='F')
	{
		printf("0");
return 1;
	}
        if(argv[3][j]<='9')
        {
        	argv[3][j]=argv[3][j]-'0';
    p=p+argv[3][j]*(w(16,i-1-j));
        }
        if(argv[3][j]=='A')
        {
            argv[3][j]=10;
                p=p+(argv[3][j])*(w(16,i-1-j));
        }
        if(argv[3][j]=='B')
        {
            argv[3][j]=11;
                p=p+argv[3][j]*(w(16,i-1-j));

        }
        if(argv[3][j]=='C')
        {
            argv[3][j]=12;
                p=p+argv[3][j]*(w(16,i-1-j));

        }
        if(argv[3][j]=='D')
        {
            argv[3][j]=13;
                p=p+(argv[3][j]*(w(16,i-1-j)));

        }
        if(argv[3][j]=='E')
        {
            argv[3][j]=14;
                p=p+argv[3][j]*(w(16,i-1-j));
        }
        if(argv[3][j]=='F')
        {
            argv[3][j]=15;
                p=p+argv[3][j]*(w(16,i-1-j));
        }
    }
  printf("%lli",p);
}
}

return 0;
}

