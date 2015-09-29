#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
  int r( int e,int y);
int main(int argc,char *argv[])
{

    int b1=atoi(argv[1]);
int b2=atoi(argv[2]);
    int q=0,i,a,z;
    int b=0;
    int sum=0;
    char num[100];
    strcpy( num,argv[3]);
    int l=strlen(num);
    if (b1==2)
    {


    for (i=0; i<l; i++)
    {



    if (!(num[i]==48||num[i]==49))
        q=1;
    }
    }
         if (b1==8)
    {


    for (i=0; i<l; i++)
    {



    if (!(num[i]<=55&&num[i]>=48))
        q=1;
    }
    }
     if (b1==10)
    {


    for (i=0; i<l; i++)
    {



    if (!(num[i]>=48&&num[i]<=57))
        q=1;
    }
    }
     if (b1==16)
    {


    for (i=0; i<l; i++)
    {



    if (!((num[i]>=48&&num[i]<=57)||(num[i]>=65&&num[i]<=70)))
        q=1;

    }

    }
    if (q==1)
    {

     printf("0\n");
    }
    else
    {
    for (a=0; a<l; a++)
    {
        if (num[a]>=48&&num[a]<=57)
            b=num[a]-48;

    else
        b=num[a]-55;
    sum=sum+(b*(r(b1,l-1-a)));

}

char conv[50];
for (z=0;sum>0;z++)
    {
    q=sum%b2;
    sum=sum/b2;
    if (q>=0&&q<=9)
    conv[z]=q+48;
    else
        conv[z]=q+55;
}
int k=strlen(conv);
char rev[100];
for (z=k-1;z>=0;z--)
{
printf("%c",conv[z]);
}}
return 0;
}
int r( int e,int y)
    {
        int q,s=1;
        for(q=0;q<y;q++)
        {
            s=s*e;
        }
        return s;
    }
