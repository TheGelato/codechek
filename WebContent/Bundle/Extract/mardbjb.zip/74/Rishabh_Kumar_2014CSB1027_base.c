#include<stdio.h>
#include<math.h>
static char Final[16];
int main()
{
int a,b,n;
printf("Enter the base 1 ,base 2 and number :\n");
scanf("%d%d%d",&a,&b,&n);
int Convert(int, int, int);
Convert(a,b,n);
int i =1;
}
int Convert(int a, int b, int n)
{
int decimal=0,digit=0,temp,i=15,j;
int copy = n;
while(copy != 0)
{
temp = copy % 10;
decimal = decimal+temp*(pow(a, digit));
copy = copy / 10;
digit++;
}
if((decimal % b) <= 9)
Final[i] = (char)((decimal % b)+48);
else
Final[i] = (char)((decimal % b)+55);
i--;
decimal = decimal / b;
do{
if((decimal % b) <= 9)
{
Final[i] = (char)((decimal % b)+48);
}
else
Final[i] = (char)((decimal % b)+55);
decimal = decimal / b;
i--;
}while(decimal / b != 0);
for( j = 0 ; j < 16 ; j++ )
{
if(Final[j]!=0)
break;
}
printf("\n");
for( i = j ; i < 16 ; i++ )
printf("%c",Final[i]);
}
