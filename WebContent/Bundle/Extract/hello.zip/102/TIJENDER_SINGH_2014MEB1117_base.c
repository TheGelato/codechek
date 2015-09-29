#include <stdio.h>
#include <string.h>
int power(int base,int n)
{
int i,pow;
pow=1;
for (i=1;i<=n;i++)
pow=pow*base;
return pow;	
}
 
void main(int argc,char *argv[])
{
 
int len3= strlen(argv[3]);
int len1= strlen(argv[1]);
int len2= strlen(argv[2]);
 
int b1=0;
int b2=0;
int out=0;
int i;
int j,k,l,m,q,x=1;
int rem;
int arr[500];
int p=0;
int output=0;
 
for (k=0;k<len1;k++)
{
b1=b1+power(10,k)*(argv[1][len1-1-k]-48);
 
}
 
 
for (l=0;l<len2;l++)
{
b2=b2+power(10,l)*(argv[2][(len2-1-l)]-48);
 
}
 
 
for (m=0;m<len3;m++)
{if (argv[3][m]>47 && argv[3][m]<58)
{if ((argv[3][m]-48)>=b1)
{
x=0;
}
}
if (argv[3][m]>64)
{
if ((argv[3][m]-55)>=b1)
{
x=0;
}
}
}
 
 
if (x==0)
{printf("0");}
if (x!=0)
{
for (j=0;j<len3;j++)
{
int n;
if(argv[3][(len3-1-j)]>=48 && argv[3][(len3-1-j)]<=57)
n=argv[3][(len3-1-j)]-48;
else
n=argv[3][(len3-1-j)]-55;
out=out+power(b1,j)*(n);
}
 
while (out>0)
{
rem= (out % b2);
arr[p]=rem;
out= (out/b2);
p++;
}
 
for (q=p-1;q>=0;q--)
{
if(arr[q]<10)
{ char k=arr[q]+48;
printf("%c",k);}
if(arr[q]>9)
{char k=arr[q]+55;
printf("%c",k);}
}
}
}
