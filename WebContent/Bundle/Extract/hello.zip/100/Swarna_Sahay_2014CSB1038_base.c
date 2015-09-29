#include<stdio.h>
#include<string.h>
char z[20], y[20], x[20], w[20];
char max(char *st,int k)
{int i;
  char m='\0';
 for(i=0;i<k;i++)
   if(*(st+i)>m)
    m=*(st+i);
    return m;
}
long pw(int p1,int h)
{
int i=1, p=1;
for(;i<=h; i++)p*=p1;return p;
}
void to_decimal(char *st,int k,int b1)
{ 
long sum=0;
int i,j;
 for(i=0,j=k-1;i<k;i++,j--)
  if(*(st+j)<='9')
   sum=sum+pw(b1,i)*(*(st+j)-48);
   else
   sum=sum+pw(b1,i)*(*(st+j)-55);
   
   for(i=0;sum!=0;i++)
   {z[i]=(sum%10)+48;
    sum=sum/10;
   }
   for(i=0;i<strlen(z);i++)
   y[i]=z[strlen(z)-i-1];
   
}
void f_decimal(char *st,int k,int b2)
{
 long sum=0;
int i,j;
 for(i=0,j=k-1;i<k;i++,j--)
  if(*(st+j)<='9')
   sum=sum+pw(10,i)*(*(st+j)-48);
   else
   sum=sum+pw(10,i)*(*(st+j)-55);
   
   for(i=0;sum!=0;i++)
   {if((sum%b2)<10)
    x[i]=(sum%b2)+48;
    else
    x[i]=(sum%b2)+55;
    sum=sum/b2;
   }
   for(i=0,j=strlen(x)-1;i<strlen(x);i++,j--)
   w[j]=x[i];
   
}

int main(int argc, char *argv[])
{
  int c=0,len,b1,b2,i;
  char maxi;
  if(*argv[1]=='1'&&*(argv[1]+1)=='6')
     b1=16;
     else if(*argv[1]=='1'&&*(argv[1]+1)=='0')
       b1=10;
     else 
     b1=*argv[1]-48;
  if(*argv[2]=='1'&&*(argv[2]+1)=='6')
     b2=16;
     else if(*argv[2]=='1'&&*(argv[2]+1)=='0')
       b2=10;
     else 
     b2=*argv[2]-48;   
   
  len=strlen(argv[3]);
  if(*argv[1]=='2')
     {maxi=max(argv[3],len);
     if(maxi<'2')
     c=1;
    	}
  else if(*argv[1]=='8') 
     {maxi=max(argv[3],len);
     if(maxi<'8')
     c=1;
    	}
  else if(*argv[1]=='1'&&*(argv[1]+1)=='0')
     {maxi=max(argv[3],len);
     if(maxi<='9')
     c=1;
	}
 else if(*argv[1]=='1'&&*(argv[1]+1)=='6')
 {maxi=max(argv[3],len);
     if(maxi<'G')
     c=1;
	}
	
if(c==1)
{

   if(b1==10)
      {
	  f_decimal(argv[3],len,b2);puts(w);}
   else if(b2==10)	
      {
	  to_decimal(argv[3],len,b1); puts(y);}
   else
      {to_decimal(argv[3],len,b1);
       f_decimal(y,strlen(y),b2);
       puts(w);
      }
}
else 
return 0;

}

	
