#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int sum=0;

int dec2any(int any,int number)
{
int i,pro=0,rem;
for (i=1;number!=0;i++)
{
rem=number%any;
pro=pro+rem*p(10,i-1);
number=number/any;
}
return pro;
}

void anytohexadec(int a,char c[])
{int n=0,x=strlen(c)-1;
while(x>=0)
{char c1=c[x];
int b=(int)c1;
if(b>58)
{b=b-55;}
else
{b=b-48;}
n=n+p(a,strlen(c)-x-1)*b;
x--;}
int i=-1,j=n,m;
char ch;
while(j!=0)
{j=j/16;
i++;}
j=n;
while(i>=0)
{m=j/p(16,i);
j=j%p(16,i);
if(m>9)
{ch=(char)(55+m);
printf("%c",ch);}
else
{printf("%d",m);}
i--;}
}



int any2dec(int any,int number)
{
	    int i,r;
	    for (i=1;number!=0;i++)
	    {
	    r=number%10;
	    sum=sum+r*p(any,i-1);
	    number=number/10;
	    }
	    return sum;	    
}

int p(int a,int b)
{int c=1;
while(b!=0)
{c=c*a;
b--;}
return c;}


int check(int a,int n)
{

int i,cool,count1=0,count2=0;
for(i=1;n!=0;i++)
{
count1++;
cool=n%10;
if(cool<a) count2++;
n=n/10;
}
if (count1==count2) return 1;
else return 0;
}

//char dec2hexdec(int,char*[]);
int main(int argc,char *argv[])

{
  
   int k,i1,n1,m,z,binary[25],octal2[25],v=0,b1,b2,num;
              b1=atoi(argv[1]);
            b2=atoi(argv[2]);
          //   char hexadecimalNumber[100]; 
          // char *s=argv[3];


   if(b1==2&&b2==8||b1==2&&b2==10||b1==8&&b2==2||b1==8&&b2==10||b1==10&&b2==2||b1==10&&b2==8||b1==b2)
	{
      if ( argc != 4 ) 
    {
        printf(" Wrong input type \n");
    }
    else 
    {
    	    
            int b1,b2,num,finalans,ans1;
            b1=atoi(argv[1]);
            b2=atoi(argv[2]);
            num=atoi(argv[3]);

	    if (check(b1,num) == 0) { printf("0 not available \n");return 0; }
            
	    else
	    
	    {
	    if (((b1==2) || (b1==8)) && (b2==10)) finalans=any2dec(b1,num);
	    else if ((b1==10) && ((b2==2) || (b2==8)||(b2==10))) finalans=dec2any(b2,num);
	    else if ((b1==8) || (b1==2) || (b2==2) || (b2==8)) {ans1=any2dec(b1,num);finalans=dec2any(b2,ans1);}
	    printf("%d \n",finalans);
	    }
     
}
}
 else if(b1==16&&b2==2||b1==16&&b2==8||b1==16&&b2==10)
{
char *s=argv[3];
//int k,i1,n1,sum=0,m,z,binary[25],octal2[25],v=0;
k=strlen(s);
for(i1=0;i1<k;i1++)
                  {
                  if(s[i1]>='0'&&s[i1]<='9')
                       n1=s[i1]-'0';
                   else if(s[i1]=='A'||s[i1]=='B'||s[i1]=='C'||s[i1]=='D'||s[i1]=='E'||s[i1]=='F')
                     n1=s[i1]-55;
else
printf("0");


sum=sum+n1*p(16,k-i1-1);
}
if(b2==10)
printf("%d",sum);
else if(b2==2)
{
 z=sum;
 while(z!=0)
{
 binary[v++]=z%2;
z=z/2;
}
for(m=v-1;m>0;m--)
{
 printf("%d",binary[m]);
}
}
else
{
 z=sum;
while(z!=0)
{
 octal2[v++]=z%8;
z=z/8;
}
for(m=v-1;m>0;m--)

 printf("%d",octal2[m]);
return 0;
}
}
else if(b2==16)
{
anytohexadec(b1,argv[3]);
return 0;
}
}


      

