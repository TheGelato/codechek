#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc,char*argv[])
{
long long int sum=0,i,k,u,j=1,myarray[1000],z=atoi(argv[3]),b1=atoi(argv[1]),b2=atoi(argv[2]),l=strlen(argv[3]);
for(i=l-1;i>=0;i--)
{

if(((int)argv[3][i]-48)<=9)
{
if((int)argv[3][i]-48>=b1)
{
printf("0");
exit(9);
}
    sum=sum+((int)argv[3][i]-48)*j;
    j=j*b1;
    }
else
{
if((int)argv[3][i]-55>=b1)
{
printf("0");
exit(9);
}
    sum=sum+((int)argv[3][i]-55)*j;
    j=j*b1;
    }
}

    i=0;
while(sum!=0)
{
    myarray[i]=sum%b2;
    sum=sum/b2;
    i++;
}
for(k=i-1;k>=0;k--)
{
if(myarray[k]<=9)
{printf("%lld",myarray[k]);
}
else
{
printf("%c",(char)(myarray[k]+55));
}
}
return 0;
}
