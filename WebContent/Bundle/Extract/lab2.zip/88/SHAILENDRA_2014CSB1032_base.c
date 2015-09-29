#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int power(int base,int n);//function for calculate power
int check(int a,int base1);//function for checking that given char or no is true or false in given base
int borotodec(int a,int base1);//function for converting binary or octa to decimal
int dectoboro(int a,int base2);//function for converting deca to binary or octa
int dectoboro(int a,int base2){
    int i,e;
for(i=0,e=0;a>0;i++){
e=(a%base2)*(power(10,i))+e;
a=a/base2;
}
return e;
}
int borotodec(int a,int base1)
{
int i,d;
for (i=0,d=0;a>0;i++){
d=(a%10)*(power(base1,i))+d;
a=a/10;
}
return d;
}

int power(int base,int n)
{
int i,p=1;
for (i=0;i<n;i++)
p=p*base;
return p;
}
int check(int a,int base1){
    int i,r=1,rem;
for (i=0;a>0;i++)
{
rem=a%10;
a=a/10;
if (rem>=base1){
r=0;
break;
}
}
return r;
}
int main(int argc,char *argv[])
{
int a,r,b,d,n,i,j,T,t,base1=atoi(argv[1]),base2=atoi(argv[2]);
char  c[100],s[100];
strcpy(s,argv[3]);
if (base1==2||base1==8||base1==10){
        n=strlen(s);
{
for (i=0;i<n;i++)
    {
if(s[i]>='0'&&s[i]<='9')
       T=1;
else {T=0;
   break;}}
}
if (T==0)
  printf("0");
else {
a=atoi(s);
r=check(a,base1);//here we check that no is true in given base or not
if (r==1)//if no or char is true in given base
{
    if (base2==10){
d=borotodec(a,base1);//d is converted no in decimal
printf("%d",d);
}
else if (base2==2||base2==8)
    {
    d=borotodec(a,base1);//d is converted no in decimal
    d=dectoboro(d,base2);//d is a converted no in base2 means base (2 or 8)
    printf("%d",d);
    }
else if (base2==16)
    {
    a=borotodec(a,base1);//a is converted no in decimal
  if (a==0)
   printf("%d",a);
else {
   for (i=0;a>0;i++)
    {
     b=a%16;
     a=a/16;
   if (b>=0&&b<=9)
      c[i]=b+48;
  else
       c[i]=b+55;
    }
   for(j=i-1;j>=0;j--)
     printf("%c",c[j]);
    }
    }
    }
  else if (r==0)
    printf("0");
}
}
else if (base1==16){
        if (base2==16)
        {
            n=strlen(s);
for (i=0,d=0;i<n;i++)
    {
if(s[i]>='0'&&s[i]<='9'||s[i]>='A'&&s[i]<='F')
       t=1;
        else t=0;
    }
    if (t==1)
        {
        printf("%s",s);
        }
    else if (t==0)
        printf("0");
        }
else{
   n=strlen(s);
for (i=0,d=0;i<n;i++)
    {
if(s[i]>='0'&&s[i]<='9'||s[i]>='A'&&s[i]<='F')
{
    if(s[i]>='0'&&s[i]<='9')
    a=s[i]-48;
    else if (s[i]>='A'&&s[i]<='F')
    a=s[i]-55;
    d=(a*(power(16,n-i-1)))+d;}
else
{
    printf("0");
    return 0;
}
}
if (base2==10)
printf("%d",d);
}
if (base2==2||base2==8)
    {a=d;
    d=dectoboro(a,base2);//d is a converted no in base2 means base (2 or 8)
    printf("%d",d);
    }
}
}
