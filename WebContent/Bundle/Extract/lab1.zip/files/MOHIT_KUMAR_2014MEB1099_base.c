#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int power(int base, int exp)
{
int i,pow = 1;

for( i = 1; i <= exp; i++)
pow = pow * base;

return pow;
}


void decimal_hex(long int num)
{
long int rem[50],i=0,length=0;
while(num>0)
{
rem[i]=num%16;
num/=16;
i++;length++;
}

for(i=length-1;i>=0;i--)
{
switch(rem[i])
{
case 10:
printf("A");
break;
case 11:
printf("B");
break;
case 12:
printf("C");
break;
case 13:
printf("D");
break;
case 14:
printf("E");
break;
case 15:
printf("F");
break;
default :
printf("%ld",rem[i]);
}
}
}

int hex_decimal(char* hex)
{
int i,j,num,len,counter=0,sum=0;

for(i=strlen(hex)-1;i>=0;i--)
{
if(hex[i]>='0'&&hex[i]<='9')
num=hex[i]-'0';
else
{
if(hex[i]>='A'&&hex[i]<='F')
num=hex[i]-55;

}
sum=sum+power(16,counter)*num;
counter++;
}
return sum;
}

long int decimal_binary(int n)
{
int rem;
long int i=1;
long int binary=0;
while (n!=0)
{
rem=n%2;
n/=2;
binary+=rem*i;
i*=10;
}
return binary;
}

int binary_decimal(long int n)

{

int decimal=0, i=0, rem;
while (n!=0)
{
rem = n%10;
n/=10;
decimal += rem*power(2,i);
++i;
}
return decimal;
}

int decimal_octal(int n)
{
int rem, i=1, octal=0;
while (n!=0)
{
rem=n%8;
n/=8;
octal+=rem*i;
i*=10;
}
return octal;
}

int octal_decimal(int n)
{
int decimal=0, i=0, rem;
while (n!=0)
{
rem = n%10;
n/=10;
decimal += rem*power(8,i);
++i;
}
return decimal;
}

int main(int argc, char *argv[])
{
int i;
int b1 = atoi(argv[1]);
int b2 = atoi(argv[2]);

if (b1==2)
{
for (i=0;i<strlen(argv[3]);i++)
{
if (argv[3][i]!='1' && argv[3][i]!='0')
{
printf("0\n");
return 0;
}
}

long int num = strtol(argv[3], NULL, 0);

if (b2==2)
printf("%ld",num);

else if (b2==8)
printf("%d",decimal_octal(binary_decimal(num)));

else if (b2==10)
printf("%d",binary_decimal(num));

else if (b2==16)
decimal_hex(binary_decimal(num));
}

else if (b1==8)
{
for (i=0;i<strlen(argv[3]);i++)
{
if (argv[3][i]<'0' || argv[3][i]>'7')
{
printf("0\n");
return 0;
}
}


int num = atoi(argv[3]);
if (b2==2)
printf("%ld",decimal_binary(octal_decimal(num)));

else if (b2==8)
printf("%d",num);

else if (b2==10)
printf("%d",octal_decimal(num));

else if (b2==16)
decimal_hex(octal_decimal(num));
}

else if (b1==10)
{
for (i=0;i<strlen(argv[3]);i++)
{
if (argv[3][i]<'0' || argv[3][i]>'9')
{
printf("0\n");
return 0;
}
}
int num = atoi(argv[3]);
if (b2==2)
printf("%ld",decimal_binary(num));

else if (b2==8)
printf("%d",decimal_octal(num));

else if (b2==10)
printf("%d",num);

else if (b2==16)
decimal_hex(num);
}

else if (b1==16)
{
for (i=0;i<strlen(argv[3]);i++)
{
if (argv[3][i]<'0' || argv[3][i]>'F' || (argv[3][i]>'9' && argv[3][i]<'A'))
{
printf("0\n");
return 0;
}
}
if (b2==2)
printf("%ld",decimal_binary(hex_decimal(argv[3])));

else if (b2==8)
printf("%d",decimal_octal(hex_decimal(argv[3])));

else if (b2==10)
printf("%d",hex_decimal(argv[3]));

else if (b2==16)
printf("%s",argv[3]);
}
printf("\n");
}
