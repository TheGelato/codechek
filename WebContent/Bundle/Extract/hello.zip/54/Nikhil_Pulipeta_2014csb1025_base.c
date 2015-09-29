#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
int main(int argc,char *argv[])
{
	int len=strlen(argv[3]);
	int b1,b2,i,temp1=0,temp2;
	b1=atoi(argv[1]);
	b2=atoi(argv[2]);
//     if((b1!=16&&b2!=10)||(b1!=16&&b2!=8)||(b1!=8&&b2!=2)||(b1!=10&&b2!=2)||(b1!=16&&b2!=2))
 if((b1==2&&b2==8)||(b1==2&&b2==10)||(b1==2&&b2==16)||(b1==8&&b2==10)||(b1==8&b2==16)||(b1==10&&b2==16)||(b1==10&&b2==8)||(b1==b2))
  
{
	for(i=0;i<len;i++)
	{
		temp1=temp1*b1+argv[3][i]-'0';
		if((argv[3][i]-'0')>=b1)
		{
			printf("0\n");
			return 0;
		}
	}
	if(b1==b2)
	{
		for(i=0;i<len;i++)
			printf("%c",argv[3][i]);
		printf("\n");
		return 0;
	}
	if(b2==10)
		printf("%d\n",temp1);
/*else if (b2==8)
	printf("%o\n",temp1);*/
	else if(b2==16)
	{
		temp2=temp1;
		int count=0;
		while(temp2)
		{
			count++;
			temp2/=b2;
		}
		char num[count];
		for(i=count-1;i>=0;i--)
		{
			num[i]=temp1%b2+'0';
			if(temp1%b2 >9)
				num[i]='A'+((temp1%b2)%10);
			temp1/=b2;
		}
		for(i=0;i<count;i++)
			printf("%c",num[i]);
		printf("\n");
	}

}

else if(b1==8&&b2==2)
{
int n,c=0,l=0,u,v=0,binary[50],x,s,t,p;
n=atoi(argv[3]); 
    p=n; 
  while(p!=0)
{
   t=p%10;
     if(t>=8)
{
     printf("0\n");
      return 0;
}
    p=p/10;
}       
while(n!=0)
	  {
            s=n%10;
	   c=c+(s*pow(8, l++));
	   n=n/10;
     
	   }
	  u=c;
	 while(u!=0)
       {
	 binary[v++]=u%2;
	     u=u/2;
	}
	printf("\nBINARY NUMBER IS ");
	for(x=v-1;x>0;x--)
	printf("%d",binary[x]);
	}

 //printf("not possible\n");
else if(b1==10&&b2==2)
{
   
  int x,s,u,v=0,w,binary[25],n;
      n=atoi(argv[3]);
     x=n;
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
 
     {
      u=n ;
       while(u!=0)
       {
	 binary[v++]=u%2;
	     u=u/2;
	}
	printf("\n");
	for(w=v-1;w>=0;w--)
	{printf("%d",binary[w]);}
	printf("\n");}
}
else if ((b1==16&&b2==8)||(b1==16&&b2==2)||(b1==16&&b2==10))
{
    
	char *s=argv[3];
int k;
	k=strlen(s);
	int i1,n1,sum=0;
	for (i1=0;i1<k;i1++)
	{
	if (s[i1]>='0'&& s[i1]<='9')
		
		n1=s[i1]-'0';
		
	else if(s[i1]=='A'||s[i1]=='B'||s[i1]=='C'||s[i1]=='D'||s[i1]=='E'||s[i1]=='F') 
		
		n1=s[i1]-55;
	
      else
         
{
printf("0\n");
return 0;
}
	
	sum=sum+n1*pow(16,k-1-i1);
        
	}

	if(b2==10)
          printf("%d",sum);
          else if(b2==2)
             
{                 int z,v=0,m,binary[25];
                  z=sum;
	     while(z!=0)
	     {
	     binary[v++]=z%2;
	     z=z/2;
	     }
	 
	     for(m=v-1;m>=0;m--)
	     {printf("%d",binary[m]);}
	     
       printf("\n"); }

else
{
              int z,v=0,octal2[25],m;   
                 z=sum;
	      while(z!=0)
	      {
	       octal2[v++]=z%8;
	       z=z/8;
	       }
	      
	       for(m=v-1;m>0;m--)
	     
                 
                 printf("%d",octal2[m]);
	     
	   
printf("\n");                     

}


//printf("\n");
}
}

