#include<stdio.h>
#include<string.h>
#include<unistd.h>

//function for power
int powe(int a,int b)
{
 int p=1,i;
   for (i=1;i<=b;i++)
      p=p*a;
   return p;
}

int main(int argc, char *argv[])
{
 int b1=atoi(argv[1]);
 int b2=atoi(argv[2]);
 int l=strlen(argv[3]);
 int i,k;
 int n[l];
 int flag=0;
 long long int s=0;
 int x,y,z=0,h,t=0;

if ((b1==b2) && (b1==2 || b1==8 || b1==10))
{
 x=atoi(argv[3]);
 y=x;
  while(y!=0)
  {
   z++;
   h=y%10;
   y=y/10;
  if(h<b1)
  t++;
  }
  if(z==t)
  {
   printf("%s\n",argv[3]);
   return 0;}
  else
  {  
   printf("0");
   return 0;}
  }
  else if((b1==b2) && b1==16)
  {
  for(z=0;argv[3][z]!=0;z++)
  {
  if((argv[3][z]>=48 && argv[3][z]<=57) || (argv[3][z]>=65 && argv[3][z]<=70))
  t++;
}
   if(z==t)
   {
   printf("%s",argv[3]);
   return 0;
   }
   else 
   {
   printf("0");
   return 0;
   }
}
for (i=0;i<l;i++)
{
    k=argv[3][i];    

    if (k>=48&&k<=57)
  {
      k=k-48;
  }
    else if (k>=65&&k<=70)
  {
      k=(k-55);
  }
      n[i]=k;
}
 

for (i=0;i<l;i++)
{
    if (n[i]>=0 && n[i]<=b1-1)
    {
     continue;
    }
    else
    {
     flag=1;
     break;
    }
}


if(flag==1)
{
    printf("0");
}
else
{
    for (i=0;i<l;i++)
{
    s=s+n[i]*powe(b1,l-i-1);
}
}//conversion from one to the other databases


long long int p=1;int c=0;
int r;


while(p<s)
 {
  p=p*b2;
  c++;
 } 
//to know how many times loop will run

char m[c];
c=c-1;
p=c;

while(s!=0)
{
  r=s%b2;
  s=s/b2;
//r stores the remainder values

 if (r>=0 && r<=9)
  {
  m[c--]=r+48;
  }
 else if (r>=10&&r<=15)
  {
    m[c--]=r+55;
  }
}
   for(c=0;c<=p;c++) 
	putchar(m[c]);
   return 0;
}
