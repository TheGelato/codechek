#include<stdio.h>
#include<string.h>
#include<math.h>

int main(int argc,char* argv[])
{
int l=0,q,m,n,b1,b2,k=1,sum=0,num,r=1,i=1,d[ ]={10,11,12,13,14,15},t;
char rem[100]={' '},s,c[ ]={'A','B','C','D','E','F'},p;

n=strlen(argv[3]);
num=atoi(argv[3]);
b1=atoi(argv[1]);
b2=atoi(argv[2]);

if(b1==16)		//Hexadecimal to Decimal
{
	for(i=n-1;i>=0;i--)
	   {
		p=argv[3][i];
			if(p>=48 && p<=57)
				t=p-48;
			else
				if(p>=65 && p<=70)
					t=p-55;
				else
	      			{
					printf("0\n");
					break;
				}
		sum=sum+k*t;
		k=k*16;
	   }

		num=sum;




	if(b2==2 || b2==8 || b2==10)
  	   {
		i=1;
		sum=0;
		while(num!=0)
		{
			r=num%b2;
			num=num/b2;
			sum=sum+r*i;
			i=i*10;
		}
		printf("%d\n",sum);
	   }




}
else			//Any numbet to Decimal

	if(b1==2 || b1==8 || b1==10)
	     



		while(num!=0)
	  {	
                q=0;
		m=num;
		sum=0;
m=m%10;
if(m>=b1)
{
printf("0");
sum=0;
l=1;
break;
}

		
		r=num%10;
		num=num/10;
		sum=sum+r*i;
		i=i*b1;
	 }
        

	num=sum;
if(b2==2 || b2==8 || b2==10)
  	{
		i=1;
		sum=0;
		while(num!=0)
		{
			r=num%b2;
			num=num/b2;
			sum=sum+r*i;
			i=i*10;

		}
			printf("%d\n",sum);
	}
   
//hexadecimal

//if(b1==10 && b2==16)
	
	else
	   {
		i=0;
		while(num>0)
		{
			rem[i]=num%16;
			if(rem[i]>9)
			rem[i]=c[rem[i]-10];
			i++;
			num=num/16;
		}
		while(i>0)
		{
			s=rem[i-1];
			if(s>9)
				printf("%c",s);
			else
				printf("%d",s);
			i--;
		}
		printf("\n");
	  }

}
