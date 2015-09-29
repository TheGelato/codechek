#include <stdio.h>
#include <math.h>
#include<string.h>
int main (int argc, char *argv[])
{
int con[argc];
    int i=0;


    for(i = 0; i < argc-2; i++)
    {
       con[i] = atoi(argv[i+1]);
    }



int b1=con[0];
int b2=con[1];
   
//printf("%d\n %d\n %d\n",b1,b2,n);
int a,p,d,j,k,decimal=0,q,x;
char c,c1,c2;

// ----------------------------------------------------------------------------------------------------
if(b1==2)
{
  
  int l=strlen(argv[3]);
  for(i=0;i<l;i++)
   {
     c=argv[3][i];
     p=(int)c;
     if(p!=48&&p!=49)
       {
        d=2;
        break;
       }     
   }      

}
// -----------------------------------------------------------------------------------------------------
if(b1==10)
{
  
  int l=strlen(argv[3]);
  for(i=0;i<l;i++)
   {
     c=argv[3][i];
     p=(int)c;
     if(p<48||p>57)
       {
        d=2;
        break;
       }     
   }      

}
//-------------------------------------------------------------------------------------------------------
if(b1==8)
{
  
  int l=strlen(argv[3]);
  for(i=0;i<l;i++)
   {
     c=argv[3][i];
     p=(int)c;
     if(p<48||p>55)
       {
        d=2;
        break;
       }     
   }      

}
// --------------------------------------------------------------------------------------------------------
if(b1==16)
{
 
  int l=strlen(argv[3]);
  for(i=0;i<l;i++)
   {
     c=argv[3][i];
     p=(int)c;
     if(p<48||(p>57&&p<65)||p>70)
       {
        d=2;
        break;
       }     
   }      

}
// ---------------------------------------------------------------------------------------------------------
// CONVERSION 


if(d!=2)
{
  for(j=0;j<strlen(argv[3]);j++)
   {
     c1=argv[3][j];
     k=(int)c1;
     if(k>64)
     k=k-55;
     else
     k=k-48;
     decimal=decimal+(k*pow(b1,(strlen(argv[3])-j-1)));
   }
//printf("%d\n",decimal);
 int remainder, o=1,w=0;
  char final[20];
    while (decimal!=0)
    {
        remainder=decimal%b2;
        decimal=decimal/b2;
        if(remainder>9)
         {
           q=remainder+55;
           c2=(char)q;
           final[w]=c2;
         }
        else
           {
             q=remainder+48;
             c2=(char)q;
             final[w]=c2;
           }
         w++;

        
    }
       for(x=w-1;x>=0;x--)
        printf("%c",final[x]);
}
else 
printf("0\n");
printf("\n");
 return 0;

}
