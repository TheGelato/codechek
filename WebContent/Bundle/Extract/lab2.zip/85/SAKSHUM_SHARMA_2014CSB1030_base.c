#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<math.h>
int power(long long int t, long long int w);
int main(int argc, char *argv[])
{
    long long int l=strlen(argv[3]),i,y=0,z,n;
    long long int a; 
a=atoi(argv[1]);
    if(a!=16)
    {
        for(i=0;i<l;i++)
        {
            long long int x=argv[3][i]-'0';
            if(x>(a-1))
                y=1;
        }
        if(y==0)
        {
            z=1;
        }
        if(y==1)
        {
            z=0;
        }
    }
    if(a==16)
    {
        for(i=0;i<l;i++)
        {
            if((argv[3][i]>='0'&&argv[3][i]<='9')||(argv[3][i]>='A'&&argv[3][i]<='F'))
                {

                }
            else
            {
                y=1;
            }
        }
         if(y==0)
        {
            z=1;
        }
        if(y==1)
        {
            z=0;
        }

    }
    if(z==0)
        printf("0");
    if(z==1)
    {
        long long int b,u=0;
b=atoi(argv[2]);
        long long int f=0;
        if(a!=16)
        {
            for(u=0;u<l;u++)
            {
argv[3][l-1-u]=argv[3][l-1-u]-'0';
                f=f+(argv[3][l-1-u])*power(a,u);

            }
            n=(long long int)f;
        }
        if(a==16)
        {
            long long int r,t;
            for(u=0;u<l;u++)
            {
                if(argv[3][l-1-u]>='0'&&argv[3][l-1-u]<='9')
                {
                    r=(long long int)(argv[3][l-1-u]-'0');
                }
                else if(argv[3][l-1-u]=='A')
                {r=10.0;}
                else if(argv[3][l-1-u]=='B')
                {r=11.0;}
                else if(argv[3][l-1-u]=='C')
                {r=12.0;}
                else if(argv[3][l-1-u]=='D')
                {r=13.0;}
                else if(argv[3][l-1-u]=='E')
                {r=14.0;}
                else if(argv[3][l-1-u]=='F')
                {r=15.0;}
                f=f+r*power(16,u);
            }
        }
        if(b!=16){
        i=0;
        l=(long long int)f;
        long long int g,j;
        long long int s[20];
        do
        {
            z=l%b;
            l=l/b;
            s[i]=z;
            i=i+1;
        }while(l>0);
        for(j=0;j<i;j++)
        {
            printf("%lli",s[i-1-j]);
        }
        }
        if(b==16)
        {
        i=0;
        l=(long long int)f;
        long long int g,j;
        char s[20],y;
        do
        {
            z=l%b;
            if(z>=0&&z<=9){
            y=z+'0';}
            if(z==10){
                y='A';}
            if(z==11){
                y='B';}
            if(z==12){
                y='C';}
            if(z==13){
                y='D';}
            if(z==14){
                y='E';}
            if(z==15){
                y='F';}
            l=l/b;
            s[i]=y;
            i=i+1;
        }while(l>0);
        for(j=0;j<i;j++)
        {
            printf("%c",s[i-1-j]);
        }
        }
    }
    return 0;
}
int power(long long int t, long long int w)
{ long long int q,g=1;
for(q=0;q<w;q++)
{
g=g*t;
}
return g;
}
