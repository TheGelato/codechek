#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(int argc, char *argv[]){
int a=0,b=0,c=0,d,n,count=0,sl=0;
char A,G;

b=atoi(argv[1]);//base b1=b
sl=strlen(argv[3]);


if (b==2)
a='2';
else if (b==8)
a='8';
else if (b==10)
a='A';
else if (b==16)
a='G';

for (n=0;n<sl;n++){
c=argv[3][n];

d=c/a;//using logic of base>every digit of number
if (d<1)
count++;//counting the digits following the particular numeric system

else if (d>=1){
if (b==2)
printf("0\n");/*given number is not binary number*/
else if (b==8)
printf("0\n");//given number is not octal number
else if (b==10)
printf("0\n");//given number is not decimal number
else if (b==16)
printf("0\n");//given number is not hexadecimal number
return 0;}
}



if (sl=count){//if all digits are satisfying the rule of numerical system


if (b==2){
//given number is binary number
int u,v;
v=atoi(argv[2]);// base b2=2
u=atoi(argv[3]);

if (v==10){
long int decimalNumber=0,j=1,remainder;

    while(u!=0){
         remainder=u%10;
        decimalNumber=decimalNumber+remainder*j;
        j=j*2;
        u=u/10;}
printf("%ld\n",decimalNumber);//decimal number
}
else if (v==2){
printf("%d\n",u);//same binary number
}

}


else if (b==8){
//given number is octal number
int u,v;
u=atoi(argv[3]);
v=atoi(argv[2]);
if (v==10){

long int decimalNumber=0,j=1,remainder;

    while(u!=0){
         remainder=u%10;
        decimalNumber=decimalNumber+remainder*j;
        j=j*8;
        u=u/10;}
printf("%ld\n",decimalNumber);//decimal
}
if (v==8){
printf("%d\n",u);//same octal
}


}


else if (b==10){
//given number is decimal number
int u,v;
v=atoi(argv[2]);
u=atoi(argv[3]);
if (v==10){

printf("%d\n",u);//same decimal
}
}


else if (b==16){
//given number is hexadecimal number
int u,v;
v=atoi(argv[2]);
u=atoi(argv[3]);
if (v==10){

long int decimalNumber=0,j=1,remainder;

    while(u!=0){
         remainder=u%10;
        decimalNumber=decimalNumber+remainder*j;
        j=j*16;
        u=u/10;}
printf("%ld\n",decimalNumber);//decimal
}
if (v==16){
printf("%d\n",u);//hexa decimal
}
}
}
return 0;
}



