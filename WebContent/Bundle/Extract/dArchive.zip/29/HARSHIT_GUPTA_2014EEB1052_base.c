#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char digits[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

int base10(char* x,int base){
	int temp=1,sum=0,i;
	for (i=strlen(x)-1;i>=0;i--)
	{
		if (x[i]<='9')
		sum=sum+(x[i]-'0')*temp;
		else
		sum=sum+(10+(x[i]-'A'))*temp;
		temp=temp*base;
	}
	
	return sum;
	
}

int checkbase(char* x,int base){
	int check=0,i;
	for (i=strlen(x)-1;i>=0;i--)
	{
		if (x[i]<=digits[base-1])
		continue;
		else
		{
			check=1;
			break;
		}
	}
	if (check==0)
	return 1;
	else
	return 0;
		
}

void ConvertToBase(int x,int base)
{
	int temp,i,count=0;
	char *s;
	s= (char*)malloc(sizeof(char)*1000);
	while(x!=0)
	{
		s[count++]=(digits[x%base]);
		x=x/base;
		
	}
	printf("Output: ");	
	for (i=strlen(s)-1;i>=0;i--)
	printf("%c",s[i]);
	printf("\n");
}


int main(int argc, char *argv[])
{
	if(argc!=4){
		printf("Wrong number of arguments\n");
		return 0;
	}
	char *s;
	int q,base1,base2;
	
	
	base1 = atoi(argv[1]);
	base2 = atoi(argv[2]);
	s = argv[3];	
		
	char temp;
	if (checkbase(s,base1))
	{
		q=base10(s,base1);
		ConvertToBase(q,base2);
	}
	else
	printf("Output: 0\n");	
	return 0;
}
