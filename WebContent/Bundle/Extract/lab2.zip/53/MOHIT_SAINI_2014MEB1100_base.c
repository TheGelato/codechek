#include<stdio.h>
#include<string.h>

int main(int argc,char *argv[])
{int b1 = atoi(argv[1]),b2 = atoi(argv[2]),len=strlen(argv[3]),i=0,decimal=0,ans=0,d;
while(i!=len)
{char ch = argv[3][i];
if((b1==2 &&(ch=='1'||ch=='0'))||(b1==8&&(ch>='0'&&ch<='7'))||(b1==10&&(ch>='0'&&ch<='9'))||(b1==16&&((ch>='0'&&ch<='9')||(ch>='A'&&ch<='F'))))
    {int c=power(b1,len-i-1),d=(int)ch;
    if(d<58)
       {d=d-48;}
    else
       {d=d-55;}
    decimal = decimal + d*c;
    }
    else
        {   printf("0");
            return 0;}
i++;}
ans=decimal;
while(i>=0)
{d=ans/power(b2,i);
ans=ans%power(b2,i);
i--;
if(d>9)
{d=d+55;
char ans=(char)d;
printf("%c",ans);}
else
{printf("%d",d);}
}
printf("\n");
}

int power(int a,int b)
{int c=1;
for(;b>0;b--)
{c=c*a;}
return c;
}
