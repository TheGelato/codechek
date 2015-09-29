#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[])
{
	
	int flag=0;
	int i=0,j=0;
	int p=0;
	int power=1;
	int arr[100];
	int sum=0;
	int b1=0;
	int b2=0;
	int a,b,c;
	a=strlen(argv[1]);
	b=strlen(argv[2]);
	c=strlen(argv[3]);

	
	for(i=a-1;i>=0;i--)
	{ 
	
          if(argv[1][i]>='0'||argv[1][i]<='9')
	  {
		
		b1=b1+(power*(argv[1][i]-48));
		power=power*10;	
		
	  }	
	
	}
	power=1;
	for(i=b-1;i>=0;i--)
	{ 
	
          if(argv[2][i]>='0'||argv[2][i]<='9')
	  {
		
		b2=b2+(power*(argv[2][i]-48));
		power=power*10;
	 		
		
	  }	
	}
	power=1;
	for(i=c-1;i>=0;i--)
	{ 
	
          if(argv[3][i]>='0'&&argv[3][i]<(b1+48))
	  {
		
		sum=sum+(power*(argv[3][i]-48));
		power=power*b1;
	  }
	  else if(argv[3][i]>='A'&&argv[3][i]<(b1+55))
	  {
		
		sum=sum+(power*(argv[3][i]-55));
		power=power*b1;
		
	  }		
		
	else 
	{sum=0;
	flag=1;
	
	break;
	
	}
	}

	if(flag==1)
	printf("0");
	else
	{
	while(sum>0)
	{
		a=sum%b2;
		sum=sum/b2;
		arr[p]=a;
		p++;
		
	}
	
	
		p=p-1;
		for(j=p;j>=0;j--)
		{	
			if(arr[j]>=10)
		{
		switch(arr[j])
		{       case 10:
				printf("A");
			       break;
			case 11:
				printf("B");
			       break;
			case 12:
				printf("C");
			       	break;		
			case 13:
				printf("D");
				break;
			case 14:
				printf("E");
				break;
			case 15:	
			        printf("F");
				break;
		}
		}
			else
			{
				printf("%d",arr[j]);
				
			}
		
		
		}
		
	}

return 0;
}
	
