#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
int b1=atoi(argv[1]);
int b2=atoi(argv[2]);
char num[20];
strcpy(num,argv[3]);
int x=1,i,t,j,p=0,len;
len=strlen(num);
int q=1;long int n=0;
long int b=atoi(num);
if(b1==2||b1==8||b1==10)
{for(i=0;i<=len;i++)
{if(num[i]-'0'>=b1)
{p=1;break;
}}}
if(b1==16){for(i=0;i<=len;i++){
if(num[i]-'0'>=23)
{p=1;
break;
}}}
if(p==0)
{if(b1==2)
{while(b>0)
{n=n+q*(b%10);
q=q*2;
b=b/10;
}}
else if(b1==8)
{while(b>0)
{n=n+q*(b%10);
q=q*8;
b=b/10;
}}
if(b1==16)
{int e,g=0,u,di=1;// long int n=0;
		    g=strlen(num);
		for(e=g-1;e>=0;e--){
		if(num[e]>='0' && num[e]<='9'){u=num[e]-'0';}
		if(num[e]>='A' && num[e]<='F'){u=num[e]-55;}
		n=n+di*u;
		di*=16;}	
}if(b1==10){n=b;}
}
if(b2==2 && p==0)
{int st[100];
while(n>=1)
{t=n%2;
 st[x++]=t;
 n=n/2;}for(j=x-1;j>0;j--){printf("%d",st[j]);}
}
if(b2==8 && p==0)
{int st[100];
while(n>=1)
{t=n%8;
 st[x++]=t;
 n=n/8;
}for(j=x-1;j>0;j--){printf("%d",st[j]);}
}
if(b2==10){printf("%ld",n);}
if(b2==16 && p==0)
{long int qu;
int j,te;char hexdec[100];
qu=n;
while(qu!=0){
te=qu%16;
if(te<10)
te=te+48;
else
te=te+55;
hexdec[x++]=te;
qu=qu/16;}
for(j=x-1;j>0;j--)
printf("%c",hexdec[j]);}
if(p==1){printf("%d",0);}
return 0;}
