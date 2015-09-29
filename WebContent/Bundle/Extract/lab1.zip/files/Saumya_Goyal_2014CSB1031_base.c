#include<stdio.h>
#include<stdlib.h>

int po(int x,int y)
{
int b=0,a=1;
while(b<y)
{a=a*x;
b++;}
return a;
}
int main(int argc, char *argv[])
{int n,c,x,t,c1,n1,i,b,j,t1,r,l,k,h,n2,n3;
int a[100],a1[100];
n=strlen(argv[1])-1;c=0;
x=0;
while (n>=0)
 {t=*(argv[1]+x)-48;
 c=c+t*po(10,n);
 n--;x++;
 } 

n1=strlen(argv[2])-1;c1=0;x=0;
while(n1>=0)
{t=*(argv[2]+x)-48;
 c1=c1+t*po(10,n1);
 n1--;x++;
}
for (i=0;i<strlen(argv[3]);i++)
{ b=*(argv[3]+i);
  if ((b-48)>c && c!=16) 
  {printf("0\n");
   exit(0);
  }
  if (*(argv[3]+i)<58)
  a[i]=*(argv[3]+i)-48;
  if(*(argv[3]+i)>64 && *(argv[3]+i)<71)
  a[i]=*(argv[3]+i)-55;
  
  if(*(argv[3]+i)>70)
  {printf("0\n");
   exit(0);
  }
  if (c!=16 && *(argv[3]+i)>58)
  {printf("0\n");
   exit(0);
  }
}

t1=0;

for(j=0;j<strlen(argv[3]);j++)
{ t1=a[j]*po(c,strlen(argv[3])-1-j)+t1;
}

n2=t1;n3=0;
while (n2!=0)
{n2=n2/c1;
n3++;
}
k = 0;
if(c1!=16)
{ while (t1!=0)
  {r=t1%c1;
a1[k++] = r;
    t1=t1/c1;
}
for (l=n3-1;l>=0;l--)
 printf("%d\n",a1[l]);
}
else
{ while(t1!=0)
  {r=t1%c1;
   
   {if (r<10)
   a1[k++]=r+48;
   else
   a1[k++]=r+55;
   }
t1=t1/c1;
}
  for (l=n3-1;l>=0;l--)
printf("%c\n",a1[l]);
}
}
