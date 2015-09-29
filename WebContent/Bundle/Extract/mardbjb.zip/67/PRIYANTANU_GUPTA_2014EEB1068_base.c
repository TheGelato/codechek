#include<stdio.h>
#include<unistd.h>
int pow1(int b,int r)
{
int i,j=1;
for(i=0;i<r;i++)
j=j*b;// power function ends
return j;
}
int check(int n,int b1)
{
    int i,j,k=0;
    for(i=n;i!=0;i=i/10)
    {
        j=i%10;
        if(j>=b1)
            k++;
    }
    if(k==0)
        return 5;
    else
        return 0;
}
int arrnum(int n,int b2)
{
int k=1,l=1;
while(n>=l)
  {
      if(n<l)
    break;
   else { k++; l=pow1(b2,k);
      }
  }
  return k;
}
int real(int n,int b1)
{
    int i,j,k=0,s=0;
    for(i=n;i!=0;i=i/10)
    {
        j=i%10;
        s=s+j*pow1(b1,k);
        k++;
    }
    return s;
        }
int convert(int r,int b2,int j)
{
    int i,k=0,l,s=0,b=0,g,m;
    int a[j];
    while(r!=0)
    {
     i=r%b2;
     r=r/b2;
     a[k++]=i;
    }
    for(s=j-1;s>=0;s--)
    printf("%d",a[s]);
    return 0;
}
int convert1(int r,int j)
{
    int i,k,l=0,m;char a[j];
    while(r!=0)
        {
        k=r%16;
     r=r/16;
    if(k>9)
        a[l++]=k+55;
        else
            a[l++]=k+48;
        }
        for(m=j-1;m>=0;m--)
            printf("%c",a[m]);
return 0;
}
int main(int argc,char *argv[])
{
    int i,j,k=0,l,tt,,v=0,h,b1,b2,r,n,c=5,g,b=0,s=0,m,d=0,e,q=0,f;
    char p;
  b1=atoi(argv[1]);
  b2=atoi(argv[2]);
  for(e=0;argv[3][e]!='\0';e++);
f=e;
 char a[e+1];

 for(e=0;argv[3][e]!='\0';e++)
   a[e]=argv[3][e];
  a[e]='\0';
          if(b1!=16){
          for(h=0;a[h]!=0;h++)
              {
                if(a[h]>=48 &&a[h]<=57)
                  v++;
              }
                  if(v==h)
                     n=atoi(argv[3]);
                   else {
                         printf("0");
                         return 0;
                        }
                }
    l=check(n,b1);
    if(c==l)
    {
    if(b1==b2){
printf("%s",argv[3]);
return 0;}
       else if(b1==16)
      {
for(i=0;a[i]!='\0';i++);
for(j=i-1;j>=0;j--)
{
if(a[j]=='A'|| a[j]=='B'|| a[j]=='C'|| a[j]=='D'|| a[j]=='E'|| a[j]=='F')
{
switch(a[j])
{
    case 'A':
    m=10;
    break;
    case 'B':
    m=11;
    break;
    case 'C':
    m=12;
    break;
    case 'D':
    m=13;
    break;
    case 'E':
    m=14;
    break;
    case 'F':
    m=15;
}
s=s+m*pow1(16,k);
k++;
}
else if(a[j]>=48 && a[j]<=57)
{
    s=s+(a[j]-48)*pow1(16,k);
k++;
}
else 
{
printf("0");
return 0;
}
}
j=arrnum(s,b2);
    i=convert(s,b2,j);
}
else if(b2==16)
{
r=real(n,b1);
j=arrnum(r,b2);
i=convert1(r,j);
}
else
{
    r=real(n,b1);
    j=arrnum(r,b2);
    i=convert(r,b2,j);
    }
    }
    else
        printf("0");
    return 0;
}
