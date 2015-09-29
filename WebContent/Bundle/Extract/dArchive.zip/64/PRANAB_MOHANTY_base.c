#include<stdio.h>
void main()
{
long signed int inputnumber,inputbase,k,op,s,p;
printf("convert b1 b2 num");
int base;
scanf("%ld%i%ld",&inputbase,&base,&inputnumber);
op=0;
k=inputnumber;
p=1;
while(k!=0)
{
s=k%10;
k=k/10;
op=op+s*p;
p=p*inputbase;
}

char base_digits[16] =
{'0', '1', '2', '3', '4', '5', '6', '7','8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

int converted_number[64];
long int number_to_convert;
number_to_convert=op;
int next_digit, index=0;


while (number_to_convert != 0)
{
converted_number[index] = number_to_convert % base;
number_to_convert = number_to_convert / base;
++index;
}



--index; /* back up to last entry in the array */
printf("\n\nConverted Number = ");
for( ; index>=0; index--) /* go backward through array */
{
printf("%c", base_digits[converted_number[index]]);
}
printf("\n");}
