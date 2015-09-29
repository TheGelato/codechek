#include<stdio.h>
#include<string.h>
#include<math.h>
int main(int argc, char *argv[])
{
    int r=strlen(argv[2]);
    int s=argv[2][0]-48;
    int t=argv[2][1]-48;

    if(r<2)
        t=0;

    int b=s*pow(10,r-1)+t;
   r=strlen(argv[1]);
   s=argv[1][0]-48;
   t=argv[1][1]-48;
   if(r<2)
    t=0;

   int a=s*pow(10,r-1)+t;




   int g=strlen(argv[3]);
    int p,n;
    p=0;

    for(n=0;n<g;n++)
   {
if(argv[3][n]<58)
    p=p+(argv[3][n]-48)*pow(a,(g-1-n));
    else
        p=p+(argv[3][n]-55)*pow(a,(g-1-n));
   }

int i;
if(a<=10)
{


for(i=0;i<g;i++)
{
    if(argv[3][i]>a+47||argv[3][i]<48)
        p=0;

}
}
else
{
    for(i=0;i<g;i++)

if((48<=argv[3][i]&&argv[3][i]<58)||(64<argv[3][i]&&argv[3][i]<71));
    else
    p=0;
}

int k=p;

        int q,m;
        q=0;
        m=0;

        while(p!=0)
        {
            q=q+(p%b)*pow(10,m);
            p=p/b;
            m=m+1;
        }
        if(b!=16)
        printf("%d\n",q);
        else
            printf("%X",k);


return 0;

}
