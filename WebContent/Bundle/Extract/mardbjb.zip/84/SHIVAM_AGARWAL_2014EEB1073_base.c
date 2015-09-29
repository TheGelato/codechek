#include<stdio.h>
#include<string.h>
int power(int x,int y)
{int q,p;
p=1;
for(q=1;q<=y;q++)
{p=p*x;}
return p;
}
int main(int argc,char *argv[])
{
int l,m,a=0,b=0,c[70];
l=strlen(argv[3]);
int k[l],i;
for(i=0;i<l;i++)
{
if(argv[3][i]>47 && argv[3][i]<58)
{
k[i]=argv[3][i]-48;
}
else if(argv[3][i]>64)
{
k[i]=argv[3][i]-55;
}
}
int b1,b2;
b1=atoi(argv[1]);
b2=atoi(argv[2]);
for(i=0;i<l;i++)
{
if(k[i]>=b1)
{m=0;}
}
if(m==0)
{printf("0");
}
if(m!=0)
{for(i=l-1;i>=0;i--)
{
a=a+power(b1,l-1-i)*k[i];
}
while(a!=0)
{c[b]=a%b2;
a=a/b2;
b=b+1;
}
for(i=b-1;i>=0;i--)
{if(c[i]<10)
{printf("%i",c[i]);}
if(c[i]>9)
{printf("%c",c[i]+55);}
}
}
}
