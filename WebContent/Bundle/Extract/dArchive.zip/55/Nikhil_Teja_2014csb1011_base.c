#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
long int power(int x,int n)
{
int i;
int number = 1;
for (i = 0; i < n; ++i)
number =number * x;
return (number);
}
main (int argc , char *argv[]) {
int num ,i,remainder,j,q ;
long int dn ;
int b1 = atoi(argv[1]);
int b2=atoi(argv[2]);
int len=strlen(argv[3]);


for (i=0;i<len;i++ )
{ if (b1==16) {break ;}

if ( (argv[3][i] -'0') >= b1 )

{ printf("%d\n",0) ;

return ;

}

}


for (i=0;i<len;i++ ) {
if (b1==16) { if ((argv[3][i]-'0'>=9 && argv[3][i]-'0'< 17)||(argv[3][i] -'0'>=23))
{printf("%d\n",0);
return ; }
} 
}

if(b1==2){ num =atoi(argv[3]) ; dn=0 ;  j=1 ; 
while(num!=0){ 
remainder=num%10;
dn=dn+remainder*j;
j=j*2; 
num=num/10;
}

}

if (b1==8) { num=atoi(argv[3]) ; dn=0 ; j=1 ;

while(num!=0){ 
remainder=num%10;
dn=dn+remainder*j;
j=j*8; 
num=num/10; 
}

}

if (b1==10) { dn=atoi(argv[3]) ;}

if (b1==16) {int count=0,num ; dn=0; 
for(i=len-1;i>=0;i--)
{
if(argv[3][i]>='0'&&argv[3][i]<='9')
num=argv[3][i]-'0'; 
else
{
if(argv[3][i]>='A'&&argv[3][i]<='F')
num=argv[3][i]-55; }

dn=dn+power(16,count)*num;
count++;
}
}



if (b2==2) { int bN[100],i=1,j,quotient ; quotient = dn ;


while(quotient!=0){

bN[i++]= quotient % 2;

quotient = quotient / 2;}

for(j = i-1 ;j> 0;j--)

{ printf("%d",bN[j]);}
printf("\n");
}



if (b2==8) { 
int oN[100],i=1,j,quotient ; quotient = dn ;
while(quotient!=0){
oN[i++]= quotient % 8;
quotient = quotient / 8 ;
}
for(j = i-1 ;j> 0;j--)
{ printf("%d",oN[j]); }

printf("\n"); }
if (b2==10) { printf("%ld\n",dn);}

if (b2==16) {	 int remainder,quotient;
int i=1,j,temp;
char hdNumber[100];
quotient=dn;
while(quotient!=0){
temp = quotient % 16;
if( temp >= 10)
temp =temp + 55;
else
temp = temp + 48;
hdNumber[i]= temp;
i++;
quotient = quotient / 16; 
}
for(j = i -1 ;j> 0;j--)
{printf("%c",hdNumber[j]);}
printf("\n");
}
}
