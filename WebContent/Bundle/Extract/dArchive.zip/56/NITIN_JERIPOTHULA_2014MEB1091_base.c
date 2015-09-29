#include<stdio.h>
#include<math.h>
#include<string.h>
int main(int argc, char *argv[])
{
 int i,j,k,m,x,s,a[100],octal[25],octal1[50],octal2[25],binary[50],binary1[50];
  int  z,v=1,w,u,c=0,temp,b,o=0,num[100],sum=0;
 long int n,p=0;
 char hexadecimal[100],hexadecimal1[100],hex[25];
 //printf("enter base numbers");
 //scanf("%d%d",&i,&j);
i=atoi(argv[1]);
j=atoi(argv[2]);
n=atoi(argv[3]);
if(i==2||i==8||i==10)
{
 if(i==2)
 {
   if(j==2)
   printf("%ld",n);
     x=n;
while(x!=0)
{
        s=x%10;
        if(s>1)
{
         printf("0");
        return;
}
x=x/10;
}

      while(n!=0)
      {
	b=n%10;
	c=c+b*(pow(2, o));
	n=n/10;
	o++;
	}
  
      if(j==10)
      {
      //printf("\nDECIMAL NUMBER IS ");
	printf("%d",c);
       }
       else if(j==8)
       {
	 z=c;
	 while(z!=0)
	 {
	 octal[v++]=z%8;
	 z=z/8;
	 }
	// printf("\nOCTAL NUMBER IS ");
	 for(w=v-1;w>0;w--)
	 printf("%d",octal[w]);

	 }
	 else if(j==16)
	 {
	  z=c;
	  while(z!=0){
	  temp=z%16;
	  if(temp<10)
	  temp=temp+48;
	  else
	  temp=temp+55;
	  hexadecimal[v++]=temp;
	  z=z/16;
	  }
	  //printf("\nHEXADECIMAL NUMBER IS  ");
	  for(w=v-1;w>0;w--)
	  printf("%c",hexadecimal[w]);

	  }
	 }
     

  else if(i==10)
  {
            x=n;
             if(j==10)
              printf("%ld",n);
           while(x!=0)
           {
                s=x%10;
                   if(s>10)
                    {
                printf("0");
                 return;
}
x=x/10;
}
    if(j==2)
     {
      u=n ;
       while(u!=0)
       {
	 binary[v++]=u%2;
	     u=u/2;
	}
	printf("\nBINARY NUMBER IS ");
	for(w=v-1;w>0;w--)
	printf("%d",binary[w]);
	}

      else if(j==8)
      {
       u=n;
             
       while(u!=0)
	{
	   octal1[v++]=u%8;
	      u=u/8;
	 }
	 //printf("\nOCTAL NUMBER IS ");
	 for(w=v-1;w>0;w--)
	 printf("%d",octal1[w]);
	 }
	 else
	{
	z=n;
	while(z!=0)
	{
	 temp=z%16;
	 if(temp<10)
	 temp=temp+48;
	 else

	 temp=temp+55;
	 hexadecimal1[v++]=temp;
	 z=z/16;

	 }
	 //printf("\nhexadecimal number is ");
	 for(w=v-1;w>0;w--)
	 printf("%c",hexadecimal1[w]);
	 }
	}

      else if(i==8)
      {
           x=n;
          if(j==8)
            printf("%ld",n);
            while(x!=0)
           {
                s=x%10;
                  if(s>8)
             {
                 printf("0");
                 return;
              }

                 x=x/10;
            }
	if(j==2||j==10||j==16)
	{
	  while(n!=0)
	  {

	   c=c+((n%10)*pow(8, o++));
	   n=n/10;
	   }
	   }
	   if(j==10)
	   {
	   printf("%d",c);
	    return 0;
	    }


	 else if(j==2)
	 {
	  u=c;
	  while(u!=0)
	  {
	  binary1[v++]=u%2;
	  u=u/2;
	  }
	  //printf("\nBINARY NUMBER IS ");
	  for(w=(v-1);w>0;w--)
	  printf("%d",binary1[w]);
	  }
       else
	  {
	   z=c;
	   while(z!=0)
	   {
	   temp=z%16;
	   if(temp<10)
	   temp=temp+48;
	   else
	   temp=temp+55;
	   hexadecimal[v++]=temp;
	   z=z/16;
	   }
	   //printf("\nHEXADECIMAL NUMBER IS ");
	   for(w=(v-1);w>0;w--)
	   printf("%c",hexadecimal[w]);
	   }

	 }
}


   else
      
	 
	{
	char *s=argv[3];
	k=strlen(s);
	int i1,n1,sum=0;
	for (i1=0;i1<k;i1++)
	{
	if (s[i1]>='0'&& s[i1]<='9')
		
		n1=s[i1]-'0';
		
	else if(s[i1]=='A'||s[i1]=='B'||s[i1]=='C'||s[i1]=='D'||s[i1]=='E'||s[i1]=='F') 
		
		n1=s[i1]-55;
	
      else
         printf("0");

	
	sum=sum+n1*pow(16,k-1-i1);
         
	}
	
	
	    if(j==10)
	     {
	     printf(" %d",sum);
	     }

	  else  if(j==2)
	    {
	     z=sum;
	     while(z!=0)
	     {
	     binary[v++]=z%2;
	     z=z/2;
	     }
	     //printf("BINARY NUMBER IS ");
	     for(m=v-1;m>0;m--)
	     printf("%d",binary[m]);
	     }
	   else
	   {
	      z=sum;
	      while(z!=0)
	      {
	       octal2[v++]=z%8;
	       z=z/8;
	       }
	       //printf("OCTAL NUMBER IS ");
	       for(m=v-1;m>0;m--)
	       printf("%d",octal2[m]);
	     
	      return 0;

}
   }
}

