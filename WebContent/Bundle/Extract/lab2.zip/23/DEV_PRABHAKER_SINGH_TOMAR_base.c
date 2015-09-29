#include<stdio.h>
#include<ctype.h>
// type convert b1 b2 num for getting output
int main(int argc, char *argv[])
{
int k=1,numb=0;
int bone,btwo,numarray[100],i,j,temp=0,array[100],len,result,multiplier=1,alpha;
char star ='A',string[100];
i=0,bone=0;
   while(1)
{
if (argv[1][i]=='\0')
{
  temp=i;
  break;
}
i++;
}
temp=i;
for (i=temp-1;i>=0;i--)
{
   alpha=((int)(argv[1][i])-48)*multiplier;
  bone=bone+alpha;
multiplier*=10;
}
i=0,btwo=0;
   while(1)
{
if (argv[2][i]=='\0')
{
  temp=i;
  break;
}
i++;
}
temp=i,multiplier=1;
for (i=temp-1;i>=0;i--)
{
   alpha=((int)(argv[2][i])-48)*multiplier;
  btwo=btwo+alpha;
multiplier*=10;
}

i=0;
while (1)
{
  if (argv[3][i]=='\0')    //here '\0' is string terminater ..wich is used to find the length of string
{
  len=i;
  break;
}
i++;
}
if (bone!=16)   {
for (i=0;i<len;i++)
{
numarray[i]=(int)(argv[3][i])-48;    //type casting of number into number array form from string form
}
for (i=0;i<len;i++)
{
  if (numarray[i]>=bone)
{
result=0;
break;
}
} 
}
else {
    for (i=0;i<len;i++)
{
    star='H';
     for (j=1;j<=18;j++)
{ 
       if (argv[3][i]==star)
{ 
    result=0;
     break;
}
     star++; 
}
}
}
if (result==0)
{
printf("Output : %d\n",result);      //if the number is not of the form of base 1
}
else if (result!=0)
{
result=0,multiplier=1;
 if (bone!=16)  {
   for (i=len-1;i>=0;--i)
{
 temp=numarray[i]*multiplier;
result=result+temp;
multiplier*=bone;  
}
}
else {
     for (i=temp-1;i>=0;i--)
{
    star='A';
    for (j=10;j<=16;j++)
{
     if (argv[3][i]==star)
{
       alpha=j*multiplier;
       result=result+alpha;
     k=0;
    break;
}
   star++;
}
   if (k!=0) 
     {
     alpha=((int)(argv[3][i])-48)*multiplier; 
     result=result+alpha; 
     } 
    multiplier=multiplier*16;  
}
}
if ((btwo!=10)&&(btwo!=16))
{
  i=0;
  while (1)
{
array[i]=result%btwo;
result=(result-array[i])/btwo;
if (result<btwo)
{
    alpha=i+1;
   array[alpha]=result;
   break;
}
i++;
}
multiplier=1,result=0;
for (i=0;i<=alpha;i++)
{
  temp=array[i]*multiplier;
  result=result+temp;
  multiplier*=10;
}

}

else if (btwo==16) {
alpha=1,multiplier=1,temp=0;
   while (1)
{
     alpha=multiplier;
     multiplier*=16;
    if (multiplier>=result)
{
     temp=alpha;
    break;
}
}
i=0;
    while(1)
{
    star='A';
      numb=result/temp;
      result=result%temp;
      for (j=10;j<=16;j++)
{
       if (numb==j)
{ 
        string[i]=star;
    k=0;
    break;
}
  star++;
}
    if (k!=0)
{
    string[i]=(char)numb;
}
if (result<temp)
{
     for (j=10;j<=16;j++)
{
       if (result==j)
{ 
        string[i+1]=star;
    k=0;
    break;
}
  star++;
}
    if (k!=0)
{
    string[i+1]=(char)result;
}
      break;
}
    temp=temp/16;
    i++;
}
}
  if (btwo!=16)  {
printf("Output :%d \n",result);
}
  if (btwo==16)
{
    printf("Output : %s\n",string);
}
}

}
