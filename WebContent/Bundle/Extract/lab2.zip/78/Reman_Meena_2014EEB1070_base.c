#include<stdio.h>
#include<string.h>
#include<math.h>
int p(int a, int b)
{
int i=1, po=1;
for(; i<=b; i++)po=po*a;return po;
}
int main(int argc,char *argv[])
{
    int i,b1=atoi(argv[1]),b2=atoi(argv[2]),n=strlen(argv[3]); 
char max='\0';
for(i=0; argv[3][i]!='\0'; i++);
if(max<argv[3][i])
max=argv[3][i];

if(b2!=16)
if(max-48>=b2)
{
printf("0");
return 0;
}

if(b2==16)
if(max>=71)
{
printf("0");
return 0;
}

int sum=0;
for(i=0; i<n; i++)
sum+=sum*p(b1,i);

if(b2==10)
printf("%d",sum);

int arr[20];
i=0;
while(sum!=0)
{
arr[i]=sum%b2;
sum=sum/b2;
i++;
}
n=i;
if(b2<16)
{
for(i=n-1; i>=0; i--)
printf("%d",arr[i]);
return 0;
}
for(i=n-1; i>=0; i--)
if(a[i]<10)
printf("%d",arr[i]);
else
printf("%c", arr[i]+55);
return 0;
}
