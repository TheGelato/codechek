#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char b1dec(int b2,int num)
{int i,j,u,z;
char y[100];
u=num;i=1;
while (u!=0){
z=u%b2;
if (z<10){z=z+48;}
else {z=z+55;}
y[i++]=z;
u=u/b2;}
for (j=i-1;j>0;j--){
printf("%c",y[j]);}
return 0;}

int b2dec(int b1,int num)
{int n,g,t;
n=1;g=0;
while (num!=0){
t=num%10;
g=g+t*n;
n=n*b1;
num=num/10;}
printf("%d",g);
return 0;}



int main(int argc,char *argv[])
{
int b1,b2,num,f;
char s;
b1=atoi(argv[1]);
b2=atoi(argv[2]);
num=atoi(argv[3]);
f=b2dec(b1,num);
s=b1dec(b2,f);
printf("%c",s);
}

