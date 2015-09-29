#include<stdio.h>
#include<string.h>
int exponent(int b,int st){
int y=1,i=0;
for(i=0;i<st;i++)
y=y*b;
if(st==0)
y=1;
return y;
}
int main(int argc, char *argv[]){
int i=0,length=0;
unsigned long long int sc=0,st=0;
int b1=atoi(argv[1]);
int b2=atoi(argv[2]);
while(argv[3][length]!='\0')
length++;
if(b1==2)
for(i=0;i<length;i++)
if(argv[3][i]=='1'||argv[3][i]=='0')
st=st+(argv[3][i]-48)*exponent(2,length-i-1);
else{
printf("0");
return 0;
}
else if(b1==8)
for(i=0;i<length;i++)
if(argv[3][i]<=55&&argv[3][i]>=48)
st=st+(argv[3][i]-48)*exponent(8,length-i-1);
else{
printf("0");
return 0;			}
else if(b1==16)
for(i=0;i<length;i++)
if(argv[3][i]<=57&&argv[3][i]>=48)
st=st+(argv[3][i]-48)*exponent(16,length-i-1);
else if(argv[3][i]<=70&&argv[3][i]>=65)
st=st+(argv[3][i]-55)*exponent(16,length-i-1);
else{
printf("0");
return 0;
}	
else if(b1==10)
for(i=0;i<length;i++)
if(argv[3][i]<=57&&argv[3][i]>=48)
st=10*st+(argv[3][i]-48);
else{
printf("0");
return 0;
}
else{
printf("0");
return 0;
}
if(b2==10){
sc=st;
length=0;
while(st>0){
length++;
st=st/10;
}
char M[length-1];
for(i=0;sc>0;i++,sc=sc/10)
M[i]=(sc%10)+'0';
for(length=0;length<i;length++)
putchar(M[i-length-1]);
}
else if(b2==8){
sc=st;
length=0;
while(st>0){
length++;
st=st/8;
}
char M[length-1];
for(i=0;sc>0;i++,sc=sc/8)
M[i]=(sc%8)+'0';
for(length=0;length<i;length++)
putchar(M[i-length-1]);
}
else if(b2==16){
sc=st;
length=0;
while(st>0){
length++;
st=st/16;
}
char M[length-1];
for(i=0;sc>0;i++,sc=sc/16){
if((sc%16)<10)
M[i]=(sc%16)+'0';
else
M[i]=(sc%16)+55;
}
for(length=0;length<i;length++)
putchar(M[i-length-1]);
}
else if(b2==2){
sc=st;
length=0;
while(st>0){
length++;
st=st/2;
}
char M[length-1];
for(i=0;sc>0;i++,sc=sc/2)
M[i]=(sc%2)+'0';
for(length=0;length<i;length++)
putchar(M[i-length-1]);
}
else
printf("0");
return 0;
}
