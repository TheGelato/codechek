#include<stdio.h>
#include<unistd.h>
int main(int argc ,char *argv[])
{   int A[40],B[40],i=0,a,b,j,k=0,h=2,c=0,l=1,m,d,C[40],e=0,f=1,n,o=0;
    int g=1,u,z,y,v=1,q=0,r=1,p,D[40],s=0,t;
    int b1 = atoi(argv[1]);
    int b2 = atoi(argv[2]);
    int num = atoi(argv[3]);
while(num!=0)
{
A[i]=num%10;
num=num/10;
++i;
b=i;
z=i;
}
//0-1
for(a=0;a<=i-1;++a)
if(A[a]>1)
h=0;
if(h==2){
for(j=0;j<=i-1;++j){
c=c+A[j]*l;
l=l*b1;
}

//printf("%d",c);
while(c!=0){
B[k]=c%b2;
c=c/b2;
k++;
}
}
for(m=k-1;m>=0;--m)
printf("%d",B[m]);

// 1-7
for(d=0;d<=b-1;++d)

//if((A[d]=0&&(A[d]>=2&&A[d]<=7))||(A[d]=1&&(A[d]>=2&&A[d]<=7))||(A[d]>=2&&A[d]<=7))
if((A[d]>=2&&A[d]<=7)&&A[d]!=8&&A[d]!=9)
g=0;

if(g==0){
if(b1==2)
printf("0");
else
for(n=0;n<=b-1;++n){
e=e+A[n]*f;
f=f*b1;}
//printf("%d",e);
while(e!=0){
C[o]=e%b2;
e=e/b2;
o++;}
for(u=o-1;u>=0;--u)
printf("%d",C[u]);}

for(y=0;y<=z-1;++y)

if((A[y]==8||A[y]==9)||((A[y]>=0||A[y]<=7)&&(A[y]==8||A[y]==9)))
{v=0;
break;}
if(v==0){
if(b1==8||b1==2)
printf("0");
else
for(p=0;p<=z-1;++p){
q=q+A[p]*r;
r=r*b1;}
while(q!=0){
D[s]=q%b2;
q=q/b2;
++s;
}
for(t=s-1;t>=0;--t)
printf("%d",D[t]);
}
}







