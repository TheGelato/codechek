#include <stdio.h>
#include <string.h>
int power(int base, int n){
int p,i;
p=1;
for(i=1;i<=n;i++)
p=p*base;
return p;
}

int main(int argc, char *argv[]){
int c;
c=strlen(argv[3]);
//printf("string length %d\n",c);

int i,s=0;
int a,b,g[10]={ };
a=atoi(argv[1]);
b=atoi(argv[2]);

for(i=0;i<c;i++)
{
if(((int)(argv[3][i])-48)>=a)
{
printf("0\n");
}
else {s=s+(power(a,c-i-1))*((int)(argv[3][i])-48);
}
}
//printf("your no is %d\n",s);

int e;
if (s<10) e=1;
else if (s<100) e=2;
else if (s<1000) e=3;
else if (s<10000) e=4;
else if (s<100000) e=5;
//printf("no of digits in your no. is %d\n",e);


int k[10];
int t[10];
int m[10];
int j=0;
//printf("final number\n");

if (a<=b){
for(i=0;i<e;i++){
k[i]=s/power(b,e-i-1);
t[i]=k[i]%b;

printf("%d",t[i]);
}
}
else if(a>b){
while(s>0){
m[j]=s%b;
s=s/b;
//printf(" ** %d ",s);
j++;
}
int h=j;
int x;
for(x=h-1;x>=0;x--){
printf("%d",m[x]);
}
}
}

