#include<stdio.h>
#include<string.h>
#include<unistd.h>


int main(int argc,char *argv[])
{
int array[64];
int var,r=0,q1,s=0,y,dec=0,i=0,v=1,j,t,rem,sum=0;
int b1=atoi(argv[1]);
int b2=atoi(argv[2]);
if(b1==16&&b2==10) //fff
{

char arr[35];
strcpy(arr,argv[3]);
       int i,j,no,length,counter=0;
     length=strlen(arr);
 
  int sum=0;

    for(i=length-1;i>=0;i--)
    {

if(arr[i]>='A'&&arr[i]<='F')
          no=arr[i]-55;
      else if(arr[i]>='0'&&arr[i]<='9')
          no=arr[i]-'0';     
       
         
else  if(arr[i]>='a'&&arr[i]<='f')
          no=arr[i]-87;
  
    else
counter++;
sum=sum+(v*no);
       v=v*16;
}
if(counter==0)
printf("%d\n",sum);
else
printf("0\n");
}
if(b1==2&&b2==16) //ghgj
{
char arr[35];
strcpy(arr,argv[3]);
    int i,j,no,length,counter=0;
  
     length=strlen(arr);
  int sum=0;  
for(i=0;i<=(length-1);i++)
{
if(arr[i]=='0'||arr[i]=='1')
y++;
else
r++;
}
if(r>0)
printf("0\n");
else
{int num=atoi(argv[3]);
int q=num;
i=0;
while(q!=0)
{
rem=q%10;
q=q/10;
array[i]=rem;
i++;
}
for(j=0;j<=(i-1);j++)
{

sum=sum+(array[j]*v);
v=v*2;
}


printf("%X\n",sum);
}
}
if(b1==8&&b2==16)  //ghghj
{
char arr[35];
strcpy(arr,argv[3]);
    int i,j,no,length,counter=0;
    int sum=0;  
     length=strlen(arr);
for(i=0;i<=(length-1);i++)
{
if(arr[i]>='0'&&arr[i]<='7')
y++;
else
r++;
}
if(r>0)
printf("0\n");
else
{
int num=atoi(argv[3]);
int q=num;
i=0;
while(q!=0)
{
rem=q%10;
q=q/10;
array[i]=rem;
i++;
}
for(j=0;j<=(i-1);j++)
{

sum=sum+(array[j]*v);
v=v*8;
}
printf("%X\n",sum);
}
}
if(b1==16&&b2==2) //ggjh
{
char arr[35];
strcpy(arr,argv[3]);
    int i,j,no,length,counter=0;
    int sum=0;  
     length=strlen(arr);

    for(i=length-1;i>=0;i--)
    {
 if(arr[i]>='A'&&arr[i]<='F')
          no=arr[i]-55;  
  else if(arr[i]>='0'&&arr[i]<='9')
          no=arr[i]-'0';     
       
else  if(arr[i]>='a'&&arr[i]<='f')
          no=arr[i]-87;
    else
counter++;
sum=sum+(v*no);
       v=v*16;
}
if(counter>0)
printf("0\n");
else
{
int q=sum;
int i=0;
while(q!=0)
{rem=q%2;
q=q/2;
array[i]=rem;
i++;
}
for(j=i-1;j>=0;j--)
{
if(j==0)
printf("%d\n",array[j]);
else
printf("%d",array[j]);
}
}
}
if(b1==16&&b2==8) //ghjbn
{
char arr[35];
strcpy(arr,argv[3]);
    int i,j,no,length,counter=0;
   
     length=strlen(arr);
 int sum=0;  

    for(i=length-1;i>=0;i--)
    {
if(arr[i]>='A'&&arr[i]<='F')
          no=arr[i]-55;  
    else if(arr[i]>='0'&&arr[i]<='9')
          no=arr[i]-'0';     
       
        else  if(arr[i]>='a'&&arr[i]<='f')
          no=arr[i]-87;
    else
counter++;
sum=sum+(v*no);
       v=v*16;
}
if(counter>0)
printf("0\n");
else
{int q=sum;
int i=0;
while(q!=0)
{rem=q%8;
q=q/8;
array[i]=rem;
i++;
}
for(j=i-1;j>=0;j--)
{
if(j==0)
printf("%d\n",array[j]);
else
printf("%d",array[j]);
}
}
}

if((b1==10&&b2==2)||b1==10&&b2==8) //hhgjgj
{
if(b1==10&&b2==2)
var=2;
else
var=8;
char arr[35];
strcpy(arr,argv[3]);
    int i,j,no,length,counter=0;
    int sum=0;  
     length=strlen(arr);
for(i=0;i<=(length-1);i++)
{
if(arr[i]>='0'&&arr[i]<='9')
y++;
else
r++;
}
if(r>0)
printf("0\n");
else
{
int num=atoi(argv[3]);
int q=num;
i=0;
while(q!=0)
{rem=q%var;
q=q/var;
array[i]=rem;
i++;
}
for(j=i-1;j>=0;j--)
{
if(j==0)
printf("%d\n",array[j]);
else
printf("%d",array[j]);
}
}
}
if((b1==2&&b2==10)) //ghhj
{
char arr[35];
strcpy(arr,argv[3]);
    int i,j,no,length,counter=0;
    int sum=0;  
     length=strlen(arr);
for(i=0;i<=(length-1);i++)
{
if(arr[i]>='0'&&arr[i]<='1')
y++;
else
r++;
}
if(r>0)
printf("0\n");
else
{
int num=atoi(argv[3]);
int q=num;
i=0;
while(q!=0)
{
rem=q%10;
q=q/10;
array[i]=rem;
i++;
}
for(j=0;j<=(i-1);j++)
{

sum=sum+(array[j]*v);
v=v*2;
}
printf("%d\n",sum);
}
}
if(b1==8&&b2==2)//dffddf
{
char arr[35];
strcpy(arr,argv[3]);
    int i,j,no,length,counter=0;
    int sum=0;  
     length=strlen(arr);
for(i=0;i<=(length-1);i++)
{
if(arr[i]>='0'&&arr[i]<='7')
y++;
else
r++;
}
if(r>0)
printf("0\n");
else
{
int num=atoi(argv[3]);
int q=num;
i=0;
while(q!=0)
{
rem=q%10;
q=q/10;
array[i]=rem;
i++;
}
for(j=0;j<=(i-1);j++)
{
sum=sum+(array[j]*v);
v=v*8;
}
q1=sum;
while(q1!=0)
{rem=q1%2;
q1=q1/2;
array[s]=rem;
s++;
}
for(t=s-1;t>=0;t--)
{
if(t==0)
printf("%d\n",array[t]);
else
printf("%d",array[t]);
}
}
}
if(b1==2&&b2==8) //rfdff
{
char arr[35];
strcpy(arr,argv[3]);
    int i,j,no,length,counter=0;
    int sum=0;  
     length=strlen(arr);
for(i=0;i<=(length-1);i++)
{
if(arr[i]>='0'&&arr[i]<='1')
y++;
else
r++;
}
if(r>0)
printf("0\n");
else
{
int num=atoi(argv[3]);
int q=num;
i=0;
while(q!=0)
{
rem=q%10;
q=q/10;
array[i]=rem;
i++;
}
for(j=0;j<=(i-1);j++)
{

sum=sum+(array[j]*v);
v=v*2;
}
q1=sum;
int i=0;
while(q1!=0)
{rem=q1%8;
q1=q1/8;
array[i]=rem;
i++;
}
for(j=i-1;j>=0;j--)
{
if(j==0)
printf("%d\n",array[j]);
else
printf("%d",array[j]);
}
}
}
if(b1==10&&b2==16)//j
{
char arr[35];
strcpy(arr,argv[3]);
    int i,j,no,length,counter=0;
    int sum=0;  
     length=strlen(arr);
for(i=0;i<=(length-1);i++)
{
if(arr[i]>='0'&&arr[i]<='9')
y++;
else
r++;
}
if(r>0)
printf("0\n");
else
{int num=atoi(argv[3]);
int q=num;
printf("%X\n",num);
}
}
if((b1==8&&b2==10))//fghjh
{
char arr[35];
strcpy(arr,argv[3]);
    int i,j,no,length,counter=0;
    int sum=0;  
     length=strlen(arr);
for(i=0;i<=(length-1);i++)
{
if(arr[i]>='0'&&arr[i]<='7')
y++;
else
r++;
}
if(r>0)
printf("0\n");
else
{
int num=atoi(argv[3]);
int q=num;
i=0;
while(q!=0)
{
rem=q%10;
q=q/10;
array[i]=rem;
i++;
}
for(j=0;j<=(i-1);j++)
{
sum=sum+(array[j]*v);
v=v*8;
}
printf("%d\n",sum);
}
}
if(b1==2&&b2==2)
{
char arr[35];
strcpy(arr,argv[3]);
    int i,j,no,length,counter=0;
    int sum=0;  
     length=strlen(arr);
for(i=0;i<=(length-1);i++)
{
if(arr[i]>='0'&&arr[i]<='1')
y++;
else
r++;
}
if(r>0)
printf("0\n");
else
{
int num=atoi(argv[3]);
printf("%d\n",num);
}
}
if(b1==8&&b2==8)
{
char arr[35];
strcpy(arr,argv[3]);
    int i,j,no,length,counter=0;
    int sum=0;  
     length=strlen(arr);
for(i=0;i<=(length-1);i++)
{
if(arr[i]>='0'&&arr[i]<='7')
y++;
else
r++;
}
if(r>0)
printf("0\n");
else
{
int num=atoi(argv[3]);
printf("%d\n",num);
}
}
if(b1==10&&b2==10)
{
char arr[35];
strcpy(arr,argv[3]);
    int i,j,no,length,counter=0;
    int sum=0;  
     length=strlen(arr);
for(i=0;i<=(length-1);i++)
{
if(arr[i]>='0'&&arr[i]<='9')
y++;
else
r++;
}
if(r>0)
printf("0\n");
else
{
int num=atoi(argv[3]);
printf("%d\n",num);
}
}
if(b1==16&&b2==16)
{
char arr[35];
strcpy(arr,argv[3]);
    int i,j,no,length,counter=0;
    int sum=0;  
     length=strlen(arr);
for(i=0;i<=(length-1);i++)
{
if((arr[i]>='0'&&arr[i]<='9')||(arr[i]>='A'&&arr[i]<='F')||(arr[i]>='a'&&arr[i]<='f'))
y++;
else
r++;
}
if(r>0)
printf("0\n");
else
printf("%s\n",argv[3]);
}
}












