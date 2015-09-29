#include <stdio.h>
#include <string.h>
#include <math.h>
int m(int y,int z)
{int p=1;
int u;
for(u=1;u<=z;u++)
p=p*y;
return p;
}
int main(int argc, char *argv[])
{
   int b1,b2,s=0,b=0,i,t;
b1=atoi(argv[1]);
b2=atoi(argv[2]);
int l=strlen(argv[3]);
   for (i=0;i<l;i++)
  {if ( b1<=10 && argv[3][i]>=48+b1)
  {printf("0");
  return 0;
    }
  else if ( b1>10 && 70<argv[3][i])
  {printf("0");
  return 0;
    }
  else{}
if (argv[3][i]>=65)
     b =argv[3][i]-55;
else
     b =argv[3][i]-48;

s=s+(b*m(b1,l-1-i));
   }
   char r[100];
for (i=0;s>=1;i++)
{
r[i]= (s%b2);
s=s/b2;}
for(t=i-1;t>=0;t--)
{if(r[t]<10)
    printf("%d",r[t]);
else
printf("%c",(char)(r[t]+55));
}
return 0;
}





