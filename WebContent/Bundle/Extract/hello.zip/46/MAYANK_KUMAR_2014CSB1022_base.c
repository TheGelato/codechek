#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

long power(int num,int p)
{
    long product=1;
    int i;
    for(i=1;i<=p;i++)
    product=product*num;
    return product;
}

int loga(long dec,int b)
{
    int i=0;
    while(dec>0)
    {
        dec=dec/b;
        i++;
    }
    return i;
}

int convert1(char *c[])
{
    int b=atoi(c[1]),i=0,len=strlen(c[3]);
    long dec=0;
    if(b==16)
    {
        int i;
        for(i=len-1;i>=0;i--)
        {
            char t=c[3][i];
            if(t>=65 && t<=70)
            dec=dec+(t-55)*power(16,len-i-1);
            else if(t>=48 && t<=57)
            dec=dec+(t-48)*power(16,len-i-1);
            else
            {
                printf("%d",0);
                exit(0);
            }
        }
    }
    else
    {
        int i;
        for(i=len-1;i>=0;i--)
        {
            char t=c[3][i];
            if(t>=48 && t<b+48)
            dec=dec+(t-48)*power(b,len-i-1);
            else
            {
                printf("%d",0);
                exit(0);
            }
        }
    }
    b=atoi(c[2]);
    convert2(b,dec);
    return 0;
}

int convert2(int b,long dec)
{
    int len=loga(dec,b),rem,i;
    char s[len];
    i=len-1;
    char t;
    do
    {
        rem=dec%b;
        if(rem>=10 && rem<=15)
        t=rem+55;
        else
        t=rem+48;
        s[i]=t;
        i--;
        dec=dec/b;
    }while(dec>0);
    for(i=0;i<len;i++)
    printf("%c",s[i]);
    return 0;
}

int main(int argc,char *argv[])
{
    convert1(argv);
    return 0;
}
