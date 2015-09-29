#include <stdio.h>
#include <string.h>

int power(int a,int b);
int dectobo(int num, int b2);
int botodec(int num,int b1);
int main(int argc,char *argv[])
{
int b1=atoi(argv[1]);
int b2 = atoi(argv[2]);
if(b1== 10 && ( b2==2 || b2== 8))
{
int r;
int num=atoi(argv[3]);
r = dectobo(num,b2);
printf("%i",r);
}
if(b2==10 && (b1==2 || b1 ==8))
{
 int r;
int num=atoi(argv[3]);
r = botodec(num,b1);
printf("%i",r);
}
if(b1==16 && (b2== 2 || b2==10 || b2 ==8))
{
int r;
char ch[100];
int w =strlen(argv[3]);
int i,sum = 0;
for(i=0;i<w;i++)
{
ch[i]=argv[3][i];
if(ch[i]>='0' && ch[i]<='9')
{
ch[i]= ch[i] - '0';
}
else
{
ch[i]= ch[i] -'A' + 10;
}
}
int j;
for(j=0;j<=w-1;j++)
{
sum= sum + ch[j]*power(16,w-1-j);
}
r=sum;
if(b2==10)
{
printf("%i",r);
}
else
{
int s=dectobo(r,b2);
printf("%i",s);
}
}
if(b2==16 && (b1== 2 || b1==10 || b1 ==8))
{
int r;
if(b1==2 || b1 ==8)
{
int num=atoi(argv[3]);
r=botodec(num,b1);
}
else
{
r=atoi(argv[3]);
}
int rem,i=0;
char ch[100];
while(r>0)
{
rem=r%b2;
if(rem<10 && rem>=0)
{
ch[i] = rem + '0';
}
else
{
ch[i]= rem + 'A' - 10;
}
r=r/b2;
i++;
}
int j = i-1;
for(j=i-1;j>=0;j--)
{
printf("%c",ch[j]);
}
}
}
int power(int a,int b)
{
int i,s=1;
for(i = 1;i<=b;i++)
{
s=a*s;
}
return s;
}
int dectobo(int num, int b2)
{
int rem,r=0,i=0;
while(num>0)
{
rem=num%b2;
num=num/b2;
r=(rem*power(10,i)) + r;
i++;
}
return r;
}
int botodec(int num,int b1)
{
int rem,r=0,i=0;
while (num>0)
{
rem=num%10;
num=num/10;
r=(rem*power(b1,i)) + r;
i++;
}
return r;
}




