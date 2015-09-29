//assignment 1
#include<stdio.h>
#include<string.h>
#include<math.h>
void tobinary(char n[],int s,int a,int b);
void tohex(char n[],int a,int b);
int checkbi(char n[],int a);
int checkoct(char n[],int a);
int checkdeci(char n[],int a);
int checkhex(char n[],int a);
int power(int a,int b);
int main(int argc,char *argv[])
 {int a,l,b1,b2,ch;
l=strlen(argv[3]);
char *in=argv[3];
       b1=atoi(argv[1]);
       b2=atoi(argv[2]);
if((b1==2)&&(b2==8))
ch=1;
else if((b1==2)&&(b2==10))
ch=2;
else if((b1==2)&&(b2==16))
ch=3;
else if((b1==8)&&(b2==2))
ch=4;
else if((b1==8)&&(b2==10))
ch=5;
else if((b1==8)&&(b2==16))
ch=6;
else if((b1==10)&&(b2==2))
ch=7;
else if((b1==10)&&(b2==8))
ch=8;
else if((b1==10)&&(b2==16))
ch=9;
else if((b1==16)&&(b2==2))
ch=10;
else if((b1==16)&&(b2==8))
ch=11;
else if((b1==16)&&(b2==10))
ch=12;
else if((b1==2)&&(b2==2))
    ch=13;
else if((b1==8)&&(b2==8))
    ch=14;
else if((b1==10)&&(b2==10))
    ch=15;
else if ((b1==16)&&(b2==16))
    ch=16;
switch(ch)
{
case 1:
    b1=2;b2=8;
    a=checkbi(in,l);
    if(a==1)
        tobinary(in,b1,b2,l);
        else {printf("0");

}break;
case 2:
    b1=2,b2=10;
    a=checkbi(in,l);
    if(a==1)
        tobinary(in,b1,b2,l);
          else {printf("0");

}break;
case 3:
    b1=2;
    a=checkbi(in,l);
    if(a==1)
        tohex(in,b1,l);
        else {printf("0");

}break;
case 4:
    b1=8,b2=2;
    a=checkoct(in,l);
    if(a==1)
        tobinary(in,b1,b2,l);
        else {printf("0");

}break;
case 5:
    b1=8,b2=10;
    a=checkoct(in,l);
    if(a==1)
        tobinary(in,b1,b2,l);
        else {printf("0");

}break;
case 6:
    b1=8;
    a=checkoct(in,l);
    if(a==1)
        tohex(in,b1,l);
        else {printf("0");
}break;
case 7:
    b1=10,b2=2;
    a=checkdeci(in,l);
    if(a==1)
        tobinary(in,b1,b2,l);
         else {printf("0");
}break;
case 8:
    b1=10,b2=8;
    a=checkdeci(in,l);
    if(a==1)
        tobinary(in,b1,b2,l);
          else {printf("0");
}break;
case 9:
    b1=10;
    a=checkdeci(in,l);
    if(a==1)
        tohex(in,b1,l);
        else {printf("0");
}break;

case 10:
    b1=16,b2=2;
    a=checkhex(in,l);
    if(a==1)
        tobinary(in,b1,b2,l);
        else {printf("0");
}break;

case 11:
    b1=16,b2=8;
    a=checkhex(in,l);
    if(a==1)
        tobinary(in,b1,b2,l);
        else {printf("0");
}break;
case 12:
    b1=16,b2=10;
    a=checkhex(in,l);
    if(a==1)
        tobinary(in,b1,b2,l);
        else {printf("0");
}break;

case 13:
    b1=2,b2=2;
    a=checkbi(in,l);
    if(a==1)
        tobinary(in,b1,b2,l);
        else {printf("0");
}break;

case 14:
    b1=8,b2=8;
    a=checkoct(in,l);
    if(a==1)
        tobinary(in,b1,b2,l);
         else {printf("0");
}break;
case 15:
    b1=8,b2=8;
    a=checkdeci(in,l);
    if(a==1)
        tobinary(in,b1,b2,l);
        else {printf("0");
}break;
case 16:
    b1=16;
    a=checkhex(in,l);
    if(a==1)
        tohex(in,b1,l);
        else {printf("0");
}break;

}
printf("\n");
return 0;
}
void tobinary(char n[],int s,int b,int l)
{int i;
  for(i=0;i<l;i++)
{if((n[i]>='0')&&(n[i]<='9'))
n[i]=n[i]-'0'; 
else if((n[i]>='A')&&(n[i]<='F'))
n[i]=n[i]-'A'+10;
}

long int rem,bi=0,j,k=0,w[50];
   for(j=l-1;j>=0;j--)
    k=k+n[j]*power(s,l-1-j);
i=0;
    while (k!=0)
    {
        w[i]=k%b;
k=k/b;
i++;


    }
for(j=0;j<i;j++)
   printf("%ld",w[j]);
}
void tohex(char n[],int b,int l)
{      int i;
  for(i=0;i<l;i++)
{if((n[i]>='0')&&(n[i]<='9'))
n[i]=n[i]-'0'; 
else if((n[i]>='A')&&(n[i]<='F'))
n[i]=n[i]-'A'+10;
}    
     long int decimalNumber=0,quotient,j,c=0;
    int temp;
i=0;
    char hexadecimalNumber[100];
    for(j=l-1;j>=0;j--)
        decimalNumber=decimalNumber+n[j]*power(b,l-1-j);
     quotient = decimalNumber;
     while(quotient!=0)
    {
         temp = quotient % 16;
      if( temp < 10)
           temp =temp + 48;
      else
         temp = temp + 55;

      hexadecimalNumber[i++]= temp;
      quotient = quotient / 16;
      c++;
  }
for(j=i-1;j>=0;j--)
    printf("%c",hexadecimalNumber[j]);
}
int checkbi(char n[],int l)
{
    int i,f=0;
    for(i=0;i<l;i++)
    {
        if((n[i]>='0')&&(n[i]<='1'))
            f=1;
            else
          {
              f=0;
            break;
          }
    } return f;
    }
    int checkoct(char n[],int l)
    {
        int i,f=0;
        for(i=0;i<l;i++)
        {
            if((n[i]>='0')&&(n[i]<='7'))
                f=1;
            else
            {
                f=0;
                break;
            }
            }return f;
        }
   int checkdeci(char n[],int l)
   {
       int i,f=0;
       for(i=0;i<l;i++)
       {
           if((n[i]>='0')&&(n[i]<='9'))
            f=1;
           else{
            f=0;
            break;
           }
       }
       return f;
       }
       int checkhex(char n[],int l)
       {
           int i,f=0;
           for(i=0;i<l;i++)
           {
               if(((n[i]>='0')&&(n[i]<='9'))||((n[i]>='A')&&(n[i]<='F')))
                f=1;
               else{
                f=0;
                break;
               }
           }return f;
       }
       int power(int a,int b)
       {
           int i,s=1;
           for(i=0;i<b;i++)
           {
               s=s*a;
           }
           return s;
       }

