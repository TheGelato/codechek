#include<string.h>
#include<stdio.h>
#include<stdlib.h>

void check(int arr[],int n,int length)
{int i;
    for( i=0;i<length;i++)
        if(arr[i]>=n)
    {//printf("hi");
        printf("0\n");exit(0);
    }return;
}
long long int dec(int arr[],int n,int length)
{int i;
    long long int sum=0,p=1;
    for(i=0;i<length;i++)
       {
       sum=sum+ arr[length-1-i]*p;
       p=p*n;
       }
   
    return sum;
}
void change(int num,int base)
{
 int arr[100] ; int i=0;
    while(1)
     {arr[i]=num%base;
      num=num/base;
      if(num==0)
        break;
      i++;
     }
int k;
for(k=i;i>=0;i--)
    if(arr[i]<=9)
   
	printf("%d",arr[i]);
else 

printf("%c",55+arr[i]);
}

int main(int argc, char *argv[])
{
int x,y,len,z; char arr[100];int temp[100];long long int num;

x=atoi(argv[1]);
y=atoi(argv[2]);

strcpy(arr,argv[3]);
int i;
len=strlen(arr);

for( i=0;i<len;i++)
{z=(int)(arr[i]);
//printf("%d",z);
if(z>=48 && z<=57)
{temp[i]=z-48;}
else if(z>=65 && z<=70 )
    {temp[i]=z-55;}
else {printf("0\n");exit(0);}

}
check(temp,x,len);
num=dec(temp,x,len);
//cout<<num<<endl;
change(num,y);
printf("\n");
return 0;
}
