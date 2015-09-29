#include<stdio.h>
#include<string.h>
main(int argc,char *argv[])
{

    int sum=0,k,b1,b2,v,l,i,s,j,p,q,u,h=0;
    int b[100],c[100],t[100];
    int powe();
    char x[100];

    b1=atoi(argv[1]);
    b2=atoi(argv[2]);

if(b1==16)
{
        l=strlen(argv[3]);
    for(i=0;i<l;i++)
    {
            t[i]=*(argv[3]+i);

        if((t[i]>=48 && t[i]<=58)|| (t[i]>=65 && t[i]<=90))
        {
            if(t[i]>=48 && t[i]<=58)
            {
                t[i]=t[i]-48;
            }
            else if (t[i]>=65 && t[i]<=70)
            {
            t[i]=t[i]-55;
            }
        }
        else
        {
        printf("0\n");
        return(0);
        }
    }
}
else if(b1==10)
{
        l=strlen(argv[3]);
    for(i=0;i<l;i++)
    {
            t[i]=*(argv[3]+i);

        if(t[i]>=48 && t[i]<=57)
        {
           t[i]=t[i]-48;
        }
        else
        {
        printf("0\n");
        return(0);
        }
    }
}

else
{
        l=strlen(argv[3]);

    for(i=0;i<l;i++)
    {
           t[i]=*(argv[3]+i);
            v=(*argv[1]);

            if(t[i]>=48 && t[i]<v)
            {
                t[i]=t[i]-48;
            }
            else
            {
                printf("0\n");
                return(0);
            }
    }
}
    for(u=0;u<l;u++)
    {
        sum=sum+(t[u]*powe(b1,l-1-u));
    }

s=sum;

for(i=1;s!=0;i++)
{
        c[i]=s%b2;
        q=s/b2;
        s=q;
        h++;
}
if(b2<11)
{
    for(i=h;i>0;i--)
    {
        printf("%d", c[i]);
    }
}
else
{
    for(i=h; i>0; i--)
        if(c[i]>=10)
        printf("%c",c[i]+55);
        else
        printf("%c",c[i]+48);
}
printf("\n");
}
int powe(int base,int n)
{
    int i,p=1;
    for(i=1;i<=n;i++)
    {
        p=p*base;
    }
    return p;
}
