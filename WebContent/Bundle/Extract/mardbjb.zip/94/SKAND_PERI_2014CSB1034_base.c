#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int power(int x,int y) // to calculate the power of 'x' raised to 'y'.
{
 int i,a=1;
if(y==0)
return 1;      

else if(y==1)
return x;

else if(y==2)
return (x*x);

else
{
a=x*x;
for(i=3; i<=y; i++)
{
a=a*x;
}
return a;


}
}

//end of power function.

int check(int b1,int n,char *a)  // to check if b1!=16 then is the number in that number system.
{
   int i;
   for(i=0;i<n;i++)
   {
     if(a[i]>=(b1+48))
       return 0 ;
   }
   return 1;
}

// end of check function.

int check16(int b1,int n, char *a)  // to check if b1=16 then whether the number is in that system or not.
{
  int i;
  for(i=0;i<n;i++)
    {
     if(a[i]!='A'&&a[i]!='B'&&a[i]!='C'&&a[i]!='D'&&a[i]!='E'&&a[i]!='F'&&a[i]!='0'&&a[i]!='1'&&a[i]!='2'&&a[i]!='3'&&a[i]!='4'&&a[i]!='5'&&a[i]!='6'&&a[i]!='7'&&a[i]!='8'&&a[i]!='9')
        return 0;
    }
    return 1;
}

// end of check16 function.

int conv (int b1,int n,char *num)      // if b2!=16 then function for converting to decimal.
{
  int j,c=0;
for(j=0;j<n;j++)
{
  c=c+power(b1,j)*(num[n-1-j]-48);  
       
}
return c;

}

int conv16 ( int b1,int n,char *num)   // if b2==16 then function for converting to decimal.
{ int l,c=0;
  for(l=0;l<n;l++)
   {
     if (num[n-1-l]>=48&&num[n-1-l]<=57)
       c=c+power(b1,l)*(num[n-1-l]-48);
     else if (num[n-1-l]>=65&&num[n-1-l]<=70)
       c=c+power(b1,l)*(num[n-1-l]-55);
   }
 return c;
}

int main(int argc,char *argv[])
{
int l;
int b1=atoi(argv[1]),b2=atoi(argv[2]);
char num[100];
strcpy(num,argv[3]);
int length=strlen(num); // to find the length of num array(string).

int c;
int t,t1=0;
for(t=0;t<length;t++)
{
   if(num[t]=='0')
   { t1=t1+1;}
}
if(t1==length)
{printf("0");}


    if(b1!=16)
    {
      if(check(b1,length,num)==0)
      {printf("0");
      return 0;
      }
    }
    else if (b1==16)
         {
            if(check16(b1,length,num)==0)
            {printf("0");
            return 0;
            }
         }

// checking is finished.

if(b1!=16)
     {

        c=conv(b1,length,num);
     }
else if(b1==16)
     {

        c=conv16(b1,length,num);

     }
// decimal conversion finished.

int d=c;
char new[100],k;
if(b2!=16)
{  
      for(k=0;d>0;k++)                       // to convert number from decimal to some other system (b2).
             {  new[k]=d%b2+48;            
                d=d/b2;
             }
      
}
else if(b2==16)
{
 
       for(k=0;d>0;k++)
         {

           if((d%b2)>=0&&(d%b2)<=9)
           {new[k]=(d%b2)+48;}
           else if((d%b2)>=10&&(d%b2)<=15)          
            {new[k]=d%b2+55;}
            d=d/b2;

         }
     
}
int u;
for(u=k-1;u>=0;u--)
{printf("%c",new[u]);}
return 0;
}

