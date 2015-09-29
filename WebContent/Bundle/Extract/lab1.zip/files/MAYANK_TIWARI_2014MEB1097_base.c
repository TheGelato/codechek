#include<stdio.h>
#include<unistd.h>
#include<string.h>

main(int argc ,char *argv[]){
long long int b1=atoi(argv[1]);
long long int b2=atoi(argv[2]);
long long int num=atoi(argv[3]);
char hax[10000];
strcpy(hax,argv[3]);
//defining as integers &others by inbuilt functions

long long int ar_p_re[1000],ar_p_ri[1000],ttte[1000],ttter[1000];
long long int c,t,w=0,q=0;
long long int s=0,m=0,l=1,h=0,lohax,p=0,i=0,j=0,n=0;
//defining needed variables

c=num;
lohax=strlen(hax);
//defining more needed duplicates

//printf("%lld\n",c);
for(i=0;num!=0;i++){
ar_p_re[i]=num%10;
num=num/10;
}
num=c;
n=i-1;

for(j=0;j<=n;j++){
ar_p_ri[j]=ar_p_re[n-j];
}
//getting array mode of num


i=0;
//reinitialization
if(b1==16){
for(i=0;i<lohax;i++)
if((hax[i]>='0'&&hax[i]<='9')||(hax[i]>='A'&&hax[i]<='F'));
else  
q=1;
}

//condition for 16

if(b1!=16){
for(i=0;i<lohax;i++)
if(hax[i]>='0'&&hax[i]<='9');
else  
q=1;
i=0;
while(i<=n&&q!=1){
t=(ar_p_ri[i]+1);
if(b1<t){
q=1;
}
i++;
}//condition check for b1=2,8,10;
}

if(q==1){
printf("0\n");
return 0;
}//condition for stopping infinite looping

else if(q!=1){
if(b1!=16){
for(i=0;i<=n;i++){
s=s+ar_p_re[i]*l;
l=l*b1;
}
//printf("%ld\n",s);
}
//changing 2,8,10 to 10

else {
for(i=lohax-1;i>=0;i--){
if(hax[i]>='0'&&hax[i]<='9')
hax[i]=hax[i]-'0';
else if(hax[i]>='A'&&hax[i]<='F')
hax[i]=hax[i]-55;
s=s+hax[i]*l;
l=l*b1;
}
//printf("%ld\n",s);
}
i=0;
//changing 16 to 10


if(b2!=16){
while(s!=0){
ttte[i]=s%b2;
s=s/b2;
//printf("%d\n",ttte[i]);
i++;
}//changing 10 into 2,8,10 reverse


n=i-1;
for(j=0;j<=n;j++){
ttter[j]=ttte[n-j];
printf("%lld",ttter[j]);
}
}//changing 10 into 2,8,10


else {
i=0;
while(s!=0){
p=s%16;
if(p<10)
hax[i++]=p+'0';
else
hax[i++]=p+55;
s=s/16;
}

for(j=i-1;j>=0;j--)
printf("%c",hax[j]);
//return 0;
}// changing 10 to 16
printf("\n");
}//got our final answer
}


