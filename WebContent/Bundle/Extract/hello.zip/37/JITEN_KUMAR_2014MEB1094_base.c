#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *c[1];

long calpower(int num,int p)
{
    long power=1;
    int i;
    for(i=1;i<=p;i++)
    power=power*num;
    return power;
}

int chk(int b1)
{
    char k;
    int n=strlen(c[0]),i,t;
    for(i=0;i<n;i++)
    {
        k=c[0][i];
        if(k>=48 && k<=57)
        t=k-48;
        else if(k>=65 && k<=70)
        t=k-55;
        else
        t=999999;
        if(t>=b1)
        {
            printf("%d",0);
            return 1;
        }
    }
    return 0;
}

int main(int argc,char *argv[])
{
    int b1=atoi(argv[1]);
    int b2=atoi(argv[2]);
    int p=strlen(argv[3]);
    int nu;
    long sum=0;
    c[0]=argv[3];
    if(chk(b1))
    return 0;
    if(b1==10 || b1==2 || b1==8)
    {
        if(b1==2 || b2==8)
        {
            int i,len=strlen(argv[3]);
            nu=0;
            for(i=len-1;i>=0;i--)
            {
                nu=nu+(argv[3][i]-48)*calpower(b1,len-i-1);
            }
        }
        else
        nu=atoi(argv[3]);
    }
    else
    {
        int i,len=strlen(argv[3]);
        nu=0;
        for(i=len-1;i>=0;i--)
        {
            if(argv[3][i]>='0' && argv[3][i]<='9')
            nu=nu+(argv[3][i]-48)*calpower(b1,len-i-1);
            else
            nu=nu+(argv[3][i]-55)*calpower(b1,len-i-1);
        }
    }
    if(b2==10)
    printf("%d",nu);
    else if(b2==2 || b2==8)
    {
        int r;
        long p=1;
        while(nu>0)
        {
            r=nu%b2;
            nu=nu/b2;
            sum=sum+r*p;
            p=p*10;
        }
        printf("%ld",sum);
    }
    else if(b2==16)
    {
        int r,p=0;
        char ch[100];
        while(nu>0)
        {
            r=nu%b2;
            nu=nu/b2;
            if(r<10)
            ch[p]=r+48;
            else
            ch[p]=r+55;
            p++;
        }
        for(r=p-1;r>=0;r--)
        printf("%c",ch[r]);
    }
}
