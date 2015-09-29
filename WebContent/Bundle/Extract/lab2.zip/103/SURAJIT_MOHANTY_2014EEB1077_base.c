#include<stdio.h>
#include<unistd.h>
#include<string.h>
int power(int b,int ra)
{
int g=1,l=0,k;
while(l<ra)
{
g=g*b;
l++;
}
return g;
}
int base101(char a[],int n,int b1)
{
int m=0,l,sum=0,j,k=0;
for(l=n-1;l>=0;l--)
{
if(a[l]>=48 && a[l]<=57){
sum=sum+(a[l]-48)*power(b1,m);
m++;
}
if((a[l]-48)<b1)
k++;
if(a[l]<48 || a[l]>57){
return 0;}
}
if(m==k)
return sum;
else{
return 0;
}
}
int base10(char a[],int n)
{
int m=0,l,sum=0;
for(l=n-1;l>=0;l--)
{
if(a[l]>=48 && a[l]<=57){
sum=sum+(a[l]-48)*power(16,m);
m++;
}
else if(a[l]>=65 && a[l]<=70)
{
sum=sum+(a[l]-55)*power(16,m);
m++;
}}
if(m==n)
return sum;
else{
return 0;
}
}

void idea(int n,int b2)
{
int i,j,k,l=0;
char a[30];
while(n!=0){
k=n%b2;
if(k<10)
a[l++]=k+48;
else if(k>9)
a[l++]=k+55;
n=n/b2;}
for(j=l-1;j>=0;j--)
printf("%c",a[j]);
}
int main(int argc,char *argv[])
{
int n1,n2,num,i,j,k,l;
n1=atoi(argv[1]);
n2=atoi(argv[2]);
if((n1==2 || n1==8 || n1==10 || n1==16) && (n2==2 || n2==8 || n2==10 || n2==16))
    {
      i=strlen(argv[3]);
    if(n1==16)
      num=base10(argv[3],i);
    else 
      num=base101(argv[3],i,n1);
       if(num==0){printf("0");
         return 0;}
       else
        idea(num,n2);
    }
else
    {
     printf("0");
     return 0;
    }
return 0;
}
