#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int power(int n,int m) {
int prod=1;
while(m--) 
prod=prod * n;
return prod;
}
int bintodec (int n)  {    // bintodec
int r,i=0,sum=0;
while(n!=0) {
r=n%10;
n = n/10;
sum = sum + r*power(2,i);
i++;
}
//printf("%d\n",sum);
return sum;
}

void dectobin (int n) {       //dectobin
long long int i=0,a[100];
while(n!=0) {
 a[i]=n%2;
 n=n/2;
 i++;
    }
    while(i--)
    printf("%lli",a[i]);
printf("\n");
//return a;
}

void dectohex (int n) {       //dectohex
int i=0,rem;
char a[100],r;
//scanf("%d",&n);
while(n!=0) {
 rem=n%16;
 switch(rem) {
  case 0  : r='0';break;
  case 1  : r='1';break;
  case 2  : r='2';break;
  case 3  : r='3';break;
  case 4  : r='4';break;
  case 5  : r='5';break;
  case 6  : r='6';break;
  case 7  : r='7';break;
  case 8  : r='8';break;
  case 9  : r='9';break;
case 10 : r='A';break;
case 11 : r='B';break;
case 12 : r='C';break;
case 13 : r='D';break;
case 14 : r='E';break;
case 15 : r='F';break;
 }
 a[i]=r;
 n=n/16;
 i++;
    }
    while(i--)
    printf("%c",a[i]);
printf("\n");
//return a;
}

void dectooct (int n) {     //dectooct
long long int i=0,a[100];
//scanf("%lli",&n);
while(n!=0) {
 a[i]=n%8;
 n=n/8;
 i++;
    }
    while(i--)
    printf("%lli",a[i]);
printf("\n");
//return a;
}

int hextodec (char *a) {     //hextodec
//char a[100];
//scanf("%s",&a);
int r,i,sum=0,x=strlen(a);
i=x;
while(i--) {
switch (a[i]) {
case '0' : r=0;break;
case '1' : r=1;break;
case '2' : r=2;break;
case '3' : r=3;break;
case '4' : r=4;break;
case '5' : r=5;break;
case '6' : r=6;break;
case '7' : r=7;break;
case '8' : r=8;break;
case '9' : r=9;break;
case 'A'  : r=10;break;
case 'B'  : r=11;break;
case 'C'  : r=12;break;
case 'D'  : r=13;break;
case 'E'  : r=14;break;
case 'F'  : r=15;break;
case 'a'  : r=10;break;
case 'b'  : r=11;break;
case 'c'  : r=12;break;
case 'd'  : r=13;break;
case 'e'  : r=14;break;
case 'f'  : r=15;break;

}
//sum = sum + (r*(1<<4*(x-i-1)));
sum = sum + (r*power(16,x-i-1));
//printf("%d \t %d \t %d \t %d\n",r,i,r*(1<<4*(x-i-1)),sum);
}
//printf("%d",sum);
return sum;
}

int octtodec (int n)  {         //octtodec 
int r,i=0,sum=0;  
//scanf("%d",&n);
while(n!=0) {
r=n%10;
n = n/10;
sum = sum + r*power(8,i);
i++;
}
//printf("%d",sum);
return sum;
}

int convertnum (char *argv,int len) {   //** 
int num=0,i;
for(i=0;i<len;i++) {
  int b = argv[i] - '0';
  num = num + b*power(10,len - i-1);
}
  //printf("%d\n",num);
return num;
}


void change(char *a,char *b,char *c,int l) {
int x,y,z; 
if(a[0]=='2' && b[0]=='8') {    // bin to oct  // CORRECT
x = convertnum(c,l);
y = bintodec(x);
(dectooct(y));
} else if(a[0]=='1' && a[1]=='0' && b[0]=='8') {   // dec to octal // CORRECT
x = convertnum(c,l);
(dectooct(x));
} else if(a[0]=='1' && a[1]=='6' && b[0]=='8') {   // hex to octal // CORRECT
y = hextodec(c);
(dectooct(y));
} else if(a[0]=='8' && b[0]=='2') {    // octal to binary // CORRECT
x = convertnum(c,l);
y = octtodec(x);
(dectobin(y));
} else if(a[0]=='1' && a[1]=='0' && b[0]=='2') {   // decimal to binary // CORRECT
x = convertnum(c,l);
(dectobin(x));
} else if(a[0]=='1' && a[1]=='6' && b[0]=='2') {    // hex to binary  // CORRECT
y = hextodec(c);
(dectobin(y));
} else if(a[0]=='2' && b[0]=='1' && b[1]=='0') {     // binary to decimal  // CORRECT
x = convertnum(c,l);
printf("%d\n",bintodec(x));
} else if(a[0]=='8' && b[0]=='1' && b[1]=='0') {    // octal to binary // CORRECT
x = convertnum(c,l);
printf("%d\n",octtodec(x));
} else if(a[0]=='1' && a[1]=='6' && b[0]=='1' && b[1]=='0') {     // hex to dec // CORRECT
printf("%d\n",hextodec(c));
} else if(a[0]=='2' && b[0]=='1' && b[1]=='6') {    // binary to hex //  CORRECT
x = convertnum(c,l);
y = bintodec(x);
(dectohex(y));
} else if(a[0]=='8' && b[0]=='1' && b[1]=='6') {   // octal to hex  // CORRECT
x = convertnum(c,l);
y = octtodec(x);
(dectohex(y));
} else if(a[0]=='1' && a[1]=='0' && b[0]=='1' && b[1]=='6') {  // decimal to hexa // 
x = convertnum(c,l);
(dectohex(x));
} else if(a[0] == b[0] && a[1]==b[1]) {
int i;
for(i=0;i<l;i++)
printf("%c",c[i]);
printf("\n");
}
} 


int main (int argc,char *argv[]) {
int b,c,i,flag=0;
//char a[100];
//b = argv[1];
//c = argv[2];
//a = argv[3];
int len=strlen(argv[3]);
//printf("%c %c %c\t",argv[1][0],argv[3][0],argv[3][1]);
//if(b=='50') {
if(argv[1][0] == '2') {
for(i=0;i<len;i++) {
if(argv[3][i]=='0' || argv[3][i]=='1')
flag++;
}
//} else if(b=='56') {
} else if(argv[1][0] == '8') {
for(i=0;i<len;i++) {
if(argv[3][i]=='0' || argv[3][i]=='1' || argv[3][i]=='2' || argv[3][i]=='3' || argv[3][i]=='4' || argv[3][i]=='5' || argv[3][i]=='6' || argv[3][i]=='7')
flag++;
}
//} else if(b==10) {
} else if(argv[1][0] == '1' && argv[1][1] == '0') {
for(i=0;i<len;i++) {
if(argv[3][i]=='0' || argv[3][i]=='1' || argv[3][i]=='2' || argv[3][i]=='3' || argv[3][i]=='4' || argv[3][i]=='5' || argv[3][i]=='6' || argv[3][i]=='7' || argv[3][i]=='8' || argv[3][i]=='9')
flag++;
}
//} else if(b==16) {
} else if(argv[1][0] == '1' && argv[1][1] == '6') {
for(i=0;i<len;i++) {
if(argv[3][i]=='0' || argv[3][i]=='1' || argv[3][i]=='2' || argv[3][i]=='3' || argv[3][i]=='4' || argv[3][i]=='5' || argv[3][i]=='6' || argv[3][i]=='7' || argv[3][i]=='8' || argv[3][i]=='9' || argv[3][i]=='a' || argv[3][i]=='b' || argv[3][i]=='c' || argv[3][i]=='d' || argv[3][i]=='e' || argv[3][i]<='f')
flag++;
}
} else {
        printf("%d \n",0);
        exit(0);
    }
if(flag != len)
printf("0 \n");
else 
change(argv[1],argv[2],argv[3],len);
return 0;
}
