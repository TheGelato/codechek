#include<stdio.h>
#include<string.h>
#include<stdlib.h>
		      /*with validation of entered number*/
		      /*binary,octal,decimal*/
int vallidation(int base,unsigned long num);
int check16(char a[]);
int pwr(int a,int b);
int main(int argc,char *argv[])
{
  int status,b1,b2,digit,scanfStatus;
  //char ch[];
  unsigned long place=1;
  unsigned long num,output=0;
  //printf("\n\tconver");
  //scanf("%d %d",&b1,&b2);
   b1=atoi(argv[1]);
   b2=atoi(argv[2]);
num=atoi(argv[3]);
 char e[100];
   strcpy(e,argv[3]);
int we=0;
   if(b1==b2)
{
   if(b1==16)
   {if(check16(e)==1)
   {for(we=0;we<strlen(e);we++)
    {printf("%c",e[we]);
    }
    return 0;
   }
   else
    {
      printf("0");
      return 0;
    }
}
  else {
      if(vallidation(b1,num)==1)
    {for(we=0;we<strlen(e);we++)
    {printf("%c",e[we]);
    }
    return 0;
   }
     else
       {
            printf("0");
            return 0;
       }
     }
   
}
 
   
  //scanfStatus=scanf("%lu",&num);
  if (b1==2||b1==8||b1==10)
{
  int ctr=0;
  for(ctr=0;ctr<strlen(e);ctr++)
   {
      if(e[ctr]<48||e[ctr]>57)
       {
           printf("0");
           return 0;
       }    
   }
  status=vallidation(b1,num);
}
  else
  {
   status=check16(e);
  }
  if(status==0){printf("%d",status);return 0;}
  if(status==1)
  {
  //
	if(b1==16)   // making hexa to decimal...
	{
	int i,s=strlen(e),d=0,l;
	for(i=0;i<s;i++)
	{
	   if(e[i]>=65&&e[i]<=70)
	    {
               l=e[i]-55;
		d=d+l*pwr(16,s-(i+1));
	    }
	  else
	    {        
		l=e[i]-48;
		d=d+l*pwr(16,s-(i+1));
	    }
          
	}
           b1=10;
          if(b2==10)
           {
              printf("%d",d);
              return 0;
           }        
			
       }                           




    if(b1==2&&b2==16 ||b1==8&&b2==16) //bin to hex and oct to hex
     {
      while(num!=0)
    {
     output=output+(num%10)*place;
     num/=10;
     if(b1==2)place*=2;
     else place*=8;
    } 
    num=output;
    goto sos;  // calling dec to hexa 
    }	


   if((b1==10&&b2==2)||(b1==10&&b2==8)||(b1==10&&b2==16))
   { 
 
      sos:    // for goto 
     if(b2==16)
{
	char dig,ans[100];
         int remainder,t=0;
    while(num)
    {
        remainder=num%16;
        num=num/16;
        if(remainder<10&&remainder>=0)
        {
            ans[t]=remainder+48;
        }
        else if(remainder>9&&remainder<16)
        {
            ans[t]=remainder+55;

        }
        t++;
    }
    for(t=t-1;t>=0;t--)
    {
        printf("%c",ans[t]);
    }
    return 0;
}
   else    
    while(num>0)
    {
     if(b1==10&&b2==2)output=output+(num%2)*place;
     else output=output+(num%8)*place;
     if(b1==10&&b2==2)num/=2;
     else num/=8;
     place*=10;
    }
    printf("%lu",output);
   }
  //

  //
   else if((b1==2&&b2==10)||(b1==8&&b2==10))
   {
    while(num!=0)
    {
     output=output+(num%10)*place;
     num/=10;
     if(b1==2&&b2==10)place*=2;
     else place*=8;
    }
    printf("%lu",output);
   }

  //

  //
   else if((b1==2&&b2==8)||(b1==8&&b2==2))
   {
    while(num>0)
    {
     if(b1==2&&b2==8)digit=num%1000;
     else digit=num%10;
     int place2=1;
     int deci=0;
     while(digit!=0)
     {
       if(b1==2&&b2==8)deci=deci+(digit%10)*place2;
       else deci=deci+(digit%2)*place2;
       if(b1==2&&b2==8)digit/=10;
       else digit/=2;
       if(b1==2&&b2==8)place2*=2;
       else place2*=10;
     }
     output=output+(deci*place);
     if(b1==2&&b2==8)num/=1000;
     else num/=10;
     if(b1==2&&b2==8)place*=10;
     else place*=1000;
    }
    printf("%lu",output);
   }
   //
  }
  return 0;
}
int vallidation(int base,unsigned long num)
{
 int digit,flag=0;
 if(base==2||base==8||base==10)//base 2,base 8,base 10//
 {
  while(num!=0)
  {
   digit=num%10;
   if(base==2&&digit!=0&&digit!=1) return 0;
   else if(base==8&&digit>7) return 0;
   else if(base==10&&digit>9) return 0;
   num/=10;
  }
  
 }
 else 
{flag=0;}
 return 1;
}

int check16(char a[])  // function to 
{
    int le=strlen(a);
    int i,ctr=1;
    for(i=0;i<le;i++)
    {
        if((a[i]>=48&&a[i]<=57)||(a[i]>=65&&a[i]<=70))
            ctr=1;
        else {ctr=0; break;}
    }
    if(ctr==0)
    return 0;
    else return 1;
}


int pwr(int a,int b)  // function to claculate power
{
 	int i,c=1;
	if(b==0)
	return 1;
	else
	{
		for(i=0;i<b;i++)
		{
			c=c*a;
                } 
	return c;
	}
}
