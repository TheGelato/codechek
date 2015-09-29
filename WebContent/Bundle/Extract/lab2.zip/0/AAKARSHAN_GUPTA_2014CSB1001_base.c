#include<stdio.h>
#include<string.h>
int power(int,int);
int checker(char num[100],int base1);
int alltodeci(char a[100],int base1);
void decitoall(int b,int base2);
int main(int argc,char *argv[]) 
 {
  int num,base1=atoi(argv[1]),base2=atoi(argv[2]),sum;
  
  char b[100];
  strcpy(b,argv[3]);
  num=atoi(b);
  int l,m=0,n;
  n=strlen(b);
  for(l=0;l<n;l++)
  {
     if(b[l]=='0')
     m=m+1;
  }
  if(m==n)
  printf("0");

  int p=1;
  if (base1==10)
     {
        p= checker(b,base1);
          if(p==0)
          return 0;
         else decitoall(num,base2);
     }
  else if(base1==2)                            
     {
         p=checker(b,base1);
         if(p==0)
 	  return 0;
         else
         sum=alltodeci(b,base1);
         decitoall(sum,base2);
     }
  else if(base1==8)
     {
        p= checker(b,base1);
         if(p==0)
          return 0;
         else
         sum=alltodeci(b,base1);
         decitoall(sum,base2);
     }
  else if(base1==16)
     {
         p=checker(b,base1);
          if(p==0)
          return 0;
         else
         sum=alltodeci(b,base1);
         decitoall(sum,base2);
     }
 }

int alltodeci(char a[100],int base1)         //alltodeci=all to decimal
 {  
  int i,sum=0,d=0; 
  int l=strlen(a);             
  for(i=0;i<l;i++)
     {
       if (a[i]>=48&&a[i]<=57)
          { 
             sum=sum+(a[i]-48)*power(base1,l-d-1);
             d++;
          }
       else if(a[i]>=65&&a[i]<=70)
          {
             sum=sum+(a[i]-55)*power(base1,l-d-1);
             d++;
          }
     }
       return sum;
 }

void decitoall(int b,int base2)              //decitoall=decimal to all
 {  
  int i,d=0;
  int c;
  char sum[100];            
  for(i=0;b>0;i++)
     { 
       c=b%base2;
       b=b/base2; 
       if(c>=0&&c<=9)
         {
           char r1=c+48;
           sum[i]=r1;
         }
       else if(c>=10&&c<=15)
         {
           char r=c+55;
           sum[i]=r;
         }
 
     }
  for(d=i-1;d>=0;d--)
     {
       printf("%c",sum[d]);
     }  
 } 

int power(int x,int y)                       //power function
{  
int a,b;
   a=1;
   if(y==0)
     return 1;
   else 
    {
       for(b=1;b<=y;b++)
          a=a*x;
       return a;
    }
}
int checker(char num[100],int base1)         //checker function
{  int i,check=1;
   int l=strlen(num);
   for(i=0;i<l;i++)
      {
         if (base1==2)
              {
               if (num[i]>=48&&num[i]<=49)
                  check=1;
               else
                  {
                  check=0;
                  break;
                  }
            }
         else if (base1==8)
               {
               if (num[i]>=48&&num[i]<=55)
                     check=1;
               else
                   {
                   check=0;
                   break;
                   }
              }
       else if (base1==10)
       {
              if (num[i]>=48&&num[i]<=57)
                 check=1;
              else
                 {
                 check=0;
                 break;
                 }      
       }
       else if (base1==16)
       {
              if ((num[i]>=48&&num[i]<=57)||(num[i]>=65&&num[i]<=70))
                 check=1;
              else
                 {
                 check=0;
                 break;
                 }      
       }
   }
   if(check==0)
   printf("%d",check);
   return check;       
}
