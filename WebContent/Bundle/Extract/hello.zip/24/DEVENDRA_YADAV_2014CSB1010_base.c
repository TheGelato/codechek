
/* 

   Devendra Pratap Yadav
   2014CSB1010
   GEL103 - Lab 1
   
*/


#include <stdio.h>
#include <string.h>


int conv(char a)
{
	if (a>=65 && a<=70)
	  return (a-55);
    else if (a>=48 && a<=57)
      return (a-48);
    else
      return a;

} 
 
long long int convert_dec(char a[],int b)
{ 
  int i=0,base=b;             
  int size=strlen(a);
  
  
  int pow=1;
  long long int dec=0;
  
  for (i=size-1;i>=0;i--)
  { 
    //printf("%d_%d  ",conv(a[i]),pow);
 
 	dec=dec+((conv(a[i]))*pow);
   	//printf("%lld   ",dec);
 
    pow=pow*base;
    
  }
  
  return dec;
}

int main(int argc, char *argv[])
{
 //char *argv[]={"conv","8","10","107"};
 
 
 long long int b1=convert_dec(argv[1],10);
 long long int b2=convert_dec(argv[2],10);
 
 //long long int no=convert_dec(argv1[3],b1);printf("\n");


 //printf("%lld\n\n%lld\n\n%lld",b1,b2,no);
 
 // check base b1
 
 int flag=0;
 int size=strlen(argv[3]);
 int i=0;

 for (i=0;i<size;i++)
 {  char cc=argv[3][i];
 	
	 if (conv(cc)>=b1 || conv(cc)<0)
 	{
	 	flag=1;
	 	break;
	 }
 
 }
 
 if (flag==1)
 {
 	printf("0");
 }
 else  // convert to other base
 { long long int no=convert_dec(argv[3],b1);
   long long int num=no;
    char pr[1000];
    int ind=0;
    
	if (num==0)
       {
        printf("0");
		
       }
   else{
   	    
   while(num) // store digits in pr[]
   {
   	int dig=num%b2;
   	num=num/b2;
   	pr[ind++]=dig;
   
   }
   
   
   for (ind=(ind-1);ind>=0;ind--)
   {
   	int dig=pr[ind];
   	
   	   if(dig==10)
   	   printf("A");
       else if (dig==11)
   	   printf("B");
   	   else if (dig==12)
   	   printf("C");
   	   else if (dig==13)
   	   printf("D");
   	   else if (dig==14)
   	   printf("E");
   	   else if (dig==15)
   	   printf("F");
   	   else
   	   printf("%d",dig);
    }
  
   }
   	
 }  // close else
  
 
 
 
 
 
 
return 0;


}
