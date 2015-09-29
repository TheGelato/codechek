#include<stdlib.h>
#include<stdio.h>
#include<string.h>
long long int po(int a,int b){
if(b>=1)
return a*(po(a,(--b)));
else 
return 1;
}
char* rev(char* c){
int r=(int)strlen(c);
int i=(r-1),j=0;
for(;j<i-j;j++){
char a=c[i-j];
    c[i-j]=c[j];
    c[j]=a;
}
return c;
}
int chkbin(char* c){
int i=0;
int t=strlen(c);
while(i<t){
if(c[i]<'0'||c[i]>'1')
    return 0;
i++;
}
return 1;
}
int chkdec(char* c){
int i=0;
while(i<strlen(c)){
if(c[i]<'0'||c[i]>'9')
    return 0;
    i++;
}
return 1;
}
int chkoct(char* c){
int i=0;
while(i<strlen(c)){
if(c[i]<'0'||c[i]>'7')
    return 0;
    i++;
}
return 1;
}
int chkhex(char* c){
int i=0;
while(i<strlen(c)){
if(c[i]>='0'&&c[i]<='9'||(c[i]>='A'&&c[i]<='F')){
}
else
 return 0;
i++;
}
return 1;
}
int bintodec(char* c){
int i=0,j=0;
int n=atoi(c);
while(n!=0){
    j=j+po(2,i)*(n%10);
    n=n/10;
    i++;
}
return j;
}
int octtodec(char* c){
char b[8]="01234567";
int j=0,k=0,x=0,i=0;
char* d=rev(c);
while(i<strlen(c)){
      k=0;
      while(1){
      if(d[i]==b[k])
      break;
      k++;
      }
      x=x+k*po(8,i);
      i++;
      }
  return x;                                          //continue the code from here

}
int hextodec(char* c){
char b[16]="0123456789ABCDEF";
int j=0,k=0,x=0,i=0;
char *d=rev(c);
while(i<strlen(c)){
      k=0;
      while(1){
       if(d[i]==b[k])
        break;
       k++;
      }
      x=x+(k)*po(16,i);
      i++;
      }
  return x;                                          //continue the code from here
}
 long long int dectobin(int x){
  int i=0;
long long int y=x;
long long int j=0;
while(y!=0){
    j=(y%2)*po(10,i)+j;
    y=y/2;
    i++;
}
return j;
}
int dectooct(int j){
int s=j%8;
j=j/8;
int i=1;
while(j!=0){
      s=(j%8)*po(10,i)+s;
      j=j/8;
i++;
      }
  return s;                                          //continue the code from here
}
void dectohex(int j){
char* b="0123456789ABCDEF";
int k=0;
char h[50];
h[0]='\0';
if(j==0)
printf("0");
else{
while(j!=0){
      h[k]=b[j%16];
      j=j/16;
      k++;
      }
      h[k]='\0';
      rev(h);
      printf("%s",h);//continue the code from here
}}
int main(int argc,char* argv[]){
//char* argv[]={"convert","2","10","101111"};
char h[50];
strcpy(h,argv[3]);
int x=2;
int v=atoi(argv[1]);
int g=atoi(argv[2]);
int out;
if(v==2)
{   x=chkbin(h);
    if(x==0){
        printf("0");
        return 0;
    }
out=bintodec(h);
}
else if(v==10)
{
    x=chkdec(h);
    if(x==0){
        printf("0");
        return 0;
    }
     out=atoi(h);
}
else if(v==8)
{
    x=chkoct(h);
    if(x==0){
        printf("0");
        return 0;
    }
  out=octtodec(h);

}
else if(v==16)
{
    x=chkhex(h);
    if(x==0){
        printf("0");
        return 0;
    }
  out=hextodec(h);
}
else
  printf("not a valid base");

if(g==2)
    printf("%lld",dectobin(out));
else if(g==8)
    printf("%d",dectooct(out));
else if(g==16)
    dectohex(out);
else if(g==10)
    printf("%d",out);
else 
    printf("not a valid base" );
return 0;
}
