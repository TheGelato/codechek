#include<stdio.h>
#include<stdlib.h>
#include<string.h>
long long int power(int m,int n)
{
  int i=0;
  long long int p=1;
  for(i=0;i<n;i++)
  {
   p=p*m;
  }
  return p;
}

int check_it_all(char a[],int b1)
{
  int l=strlen(a),ctr=0,state=1;
  int i=0;
  for(i=0;i<l;i++)
  {
   if(b1==16)
   {
     if((a[i]>=48&&a[i]<=57)||(a[i]>=65&&a[i]<=70)) {;}
     else state=0;
   }

    if(b1!=16)
    {
      if(a[i]<48||a[i]>(48+b1-1))
      {
       state=0;
      }
    }
  }
  return state;
}
long long int hex_to_dec(char a[])
{
  long long int ans=0;
  int n;
  int ctr=0,i,j,l;
  l=strlen(a);
  for (i=l-1;i>=0;i--)
   {
    if(a[i]>=48&&a[i]<=57)
      ans=ans+(a[i]-48)*power(16,l-i-1);
    else
      ans=ans+(10+a[i]-65)*power(16,l-i-1);
   }

  return ans;
}
long long int oth_to_dec(char a[],int b1)
{
  long long int copy=atoi(a);
  if(copy==0)
  return 0;
  else
  {
    int ctr=0,ans=0,l=strlen(a),r=0;
    for(ctr=0;ctr<l;ctr++)
    {
      r=copy%10;
      ans=power(b1,ctr)*r+ans;
      copy=copy/10;
    }
    return ans;
  }
}
void dec_to_all(long long int copy,int b2)
{
  int r,i=0,j;
  char res[50];
  while(copy)
  {
    r=copy%b2;
    if(r<10)
      r=r+48;
    else
      r=r+55;

    res[i++]=r;
    copy=copy/b2;
  }
  for(j=i-1;j>=0;j--)
  {
    printf("%c",res[j]);
  }
}

int main(int argc,char *argv[])
{
int b1=atoi(argv[1]),b2=atoi(argv[2]);

char a[100];
strcpy(a,argv[3]);
int y=0,ctr1=1;
 for(y=0;y<strlen(a);y++)
 {
   if(a[y]!='0')
   ctr1=0;
 }
 if(ctr1==1)
 {
  printf("0");
  return 0;
 }

 int crrct=check_it_all(a,b1);
 if(!crrct)
 {
   printf("0");
   return 0;
 }
 else if(crrct)
    {
      if(b1==16)
       dec_to_all(hex_to_dec(a),b2);
      else
       dec_to_all(oth_to_dec(a,b1),b2);
    }
return 0;
}
