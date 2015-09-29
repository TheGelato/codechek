#include<stdio.h>
#include<string.h>

int power(int a, int b)
{
int i=1, po=1;
for(; i<=b; i++)po=po*a;return po;
}
int main(int argc ,char*argv[])
{int b1, b2, n;
b1=atoi(argv[1]);
b2=atoi(argv[2]);
n=strlen(argv[3]);
int arr[n], i;
for(i=0; i<n; i++)
if(argv[3][i]>='0'&&argv[3][i]<='9')
arr[i]=argv[3][i]-48;
else if(argv[3][i]>='A'&&argv[3][i]<='F')
arr[i]=argv[3][i]-55;
int s=0;
for(i=0; i<n; i++)
s+=arr[n-i-1]*power(b1,i);
int max=0;
for(i=0; i<n; i++)
if(max<arr[i])
max=arr[i];
if(max>=b1)
{
printf("0");
return 0;
    }
    
if(b2==10)
{
printf("%d", s);
return 0;
    }
int a[20];
i=0;
while(s!=0)
{
a[i]=s%b2;
s=s/b2;
i++;
}
n=i;
if(b2<16)
{
for(i=n-1; i>=0; i--)
printf("%d",a[i]);
return 0;
}
for(i=n-1; i>=0; i--)
if(a[i]<10)
printf("%d",a[i]);
else
printf("%c", a[i]+55);
return 0;
}
