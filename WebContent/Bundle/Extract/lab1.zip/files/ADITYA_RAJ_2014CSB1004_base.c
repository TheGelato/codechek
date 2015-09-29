#include<string.h>
#include<stdio.h>
int Base16=0;
int check(char a[],int base,int size)
{
    int i;
for(i=0;i<size;i++)
{
    if(base==16)
{
Base16=1;
    if (a[i]>'F')
        return 0;
}
   else if((a[i]-'0')>base)

       return 0;
}
return 1;
}
int main(int argv,char* argc[])
{
int i=0;
int b1;
int b2;
b1=atoi(argc[1]);
b2= atoi(argc[2]);
char *input=argc[3];
int size=0;
for(i=0;input[i]!='\0';i++)
size+=1;
if(!check(input,b1,size)){printf("0\n");return 0;} //invalid base or number!
long mul=1;
long num=0;
for (i=size-1;i>=0;i--)
{
if(Base16) input[i]=(input[i]>='A')?(input[i]-'A'+'9'+1):(input[i]);
num+=(input[i]-'0')*mul;
mul*=b1;
}
long MyNum=0;
short flag=0;
long pow=1;
char output[10];
i=0;
while(1)
{
MyNum=num%b2;
output[i++]=(MyNum<10)?MyNum+'0': ('A'+MyNum-10);
num/=b2;
if(flag==1)
    break;
if(num<b2)
    flag=1;
}
int j=0;
for(j=i-1;j>=0;j--)
printf("%c",output[j]);
printf("\n");
return 0;}
