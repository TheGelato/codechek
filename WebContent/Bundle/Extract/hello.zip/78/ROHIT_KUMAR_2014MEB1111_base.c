#include<stdio.h>
#include<string.h>

int ipow(int x, unsigned int y)
{
    if( y == 0)
        return 1;
    else if (y%2 == 0)
        return ipow(x, y/2)*ipow(x, y/2);
    else
        return x*ipow(x, y/2)*ipow(x, y/2);
}

void dtob(int new_num,int b2n)
{
	int rem,j,i,num;
	char str[100];
	char chr;
	while(new_num>0)
	{
	rem=new_num%b2n;
	new_num=new_num/b2n;
	if(rem<10)
	{
	rem=rem+48;
	chr=rem;
    }
    else
    {
    	rem=rem+55;
    	chr=rem;
    }
    str[i++]=chr;
    }
	str[i]='\0';
	printf("Output: ");
    for(j=i;j>=0;j--)
    printf("%c",str[j]);
	printf("\n");
}

void btod(char num[],int b1n, int b2n)
{
	int i,new_num,dig,j=0;
	new_num=0;
	for(i=strlen(num)-1;i>=0;i--)
	{
		if(num[i]>='0' && num[i]<='9')
		{
			dig=num[i]-48;
			//printf("%d\n",dig);
			new_num=new_num+dig*(ipow(b1n,j++));
		}
		else
		{
			dig=num[i]-55;
			new_num=new_num+dig*(ipow(b1n,j++));
		}
	}
	fflush(stdout);
	dtob(new_num,b2n);
}

void check(char num[], int b1n, int b2n)
{
	fflush(stdout);
	int i,flag=0;
	if(b1n!=16)
	{
		for(i=0;i<strlen(num);i++)
		{
			if(!((num[i]-48)>=0 && (num[i]-48)<=b1n))
			{
				flag=1;
				printf("Output: 0\n");
				break;
			}
		}
	}
	if(b1n==16)
	{
		for(i=0;i<strlen(num);i++)
		{
			if(!((num[i]>='0' && num[i]<='9') || (num[i]>='A' && num[i]<='F')))
			{
				flag=1;
				printf("Output: 0\n");
				break;
			}
		}
	}
	if(flag==0)
	btod(num,b1n,b2n);
}

 int main()
 {
 	fflush(stdout);
 	int len,i,j=0;
 	int b1n,b2n,tmp=0;
 	char c;
 	char b1[2];
 	char b2[2];
 	char num[100];
 	int sp[3];
 	char msg[200];
 	len=0;
 	while((c=getchar())!='\n')
 		msg[len++]=c;
 	msg[len]='\0';
 	//len=strlen(msg);
 	//printf("%d",len);
 	for(i=0;i<len;i++)
 	{
 		if(msg[i]==' ')
 		{
 			sp[j]=i;
 			j++;
 		}
 	}
 	//for(i=0;i<j;i++)
 	//printf("%d\n",sp[i]);
 	b1[0]=msg[sp[0]+1];
 	if((sp[1]-sp[0])==2)
 		b1[1]='\0';
 	else
 	{
 		b1[1]=msg[sp[1]-1];
 		b1[2]='\0';
 	}
 	b2[0]=msg[sp[1]+1];
 	if((sp[2]-sp[1])==2)
 		b2[2]='\0';
 	else
 	{
 		b2[1]=msg[sp[2]-1];
 		b2[2]='\0';
 	}
 	for(i=sp[2]+1;i<len;i++)
 	{
 		num[tmp++]=msg[i];
 	}
 	num[tmp]='\0';
 	b1n=atoi(b1);
 	b2n=atoi(b2);
 	check(num,b1n,b2n);
}
