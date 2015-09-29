#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long po(int num,int p)
{
    long prod=1;
    int i;
    for(i=1;i<=p;i++)
    prod=prod*num;
    return prod;
}

int main(int argc,char *argv[])
{
    int b1=atoi(argv[1]);
    int b2=atoi(argv[2]);
    int w=strlen(argv[3]);
    int ch[w],sum=0,i,fin[100],r,c=0;
    char k;
    for(i=0;i<w;i++)
    {
        k=argv[3][i];
        if(k>=48 && k<=57)
        ch[i]=k-48;
        else if(k>=65 && k<=70)
        ch[i]=k-55;
        else
        ch[i]=999;
        if(ch[i]>=b1)
        {
            printf("%d",0);
            return 0;
        }
    }
    for(i=0;i<w;i++)
    {
        sum=sum+ch[i]*po(b1,w-i-1);
    }
    if(b2==10)
    printf("%d",sum);
    else
    {
        do
        {
            r=sum%b2;
            fin[c]=r;
            sum=sum/b2;
            c++;
        }while(sum>0);
        for(i=c-1;i>=0;i--)
        {
            if(fin[i]<10)
            k=fin[i]+48;
            else
            k=fin[i]+55;
            printf("%c",k);
        }
    }
    return 0;
}
