#include<stdio.h>
#include<string.h>
int check(int, char[]);			// This program will take the base as int and the number to be checked as char array
void convert1(int,int,char*,char[]); 
void stringrev(char []); 
int main(int argc, char* argv[])
{
	char b[100],a[100];
	int b1=atoi(argv[1]); // b1 is the initial base of the number
	int b2=atoi(argv[2]);  // b1 is the final base of the number
							// This is the number to be converted
							// we have given the input as a number(base) and a string
	if(check(b1,argv[3])==1)
	{
		convert1(b1,b2,argv[3],b);
		stringrev(b);
		printf("%s\n",b);
	}
	else 
	printf("0\n");

}

// function that checks whether a number is a given base nor not
int check(int b1,char s[])			// s contains the number to be checked in the base b1
{
	int i,temp;	
	if(b1!=16)
	{
		for(i=0;i<=strlen(s)-1;i++)
		{
			if(s[i]-'0'>=b1)
				return 0;
		}
	}
	else if(b1==16)
		{
			if(s[i]>='0' && s[i]<='9')
			{
				if(s[i]-'0'>=b1)
					return 0;
			}
			else if(s[i]<'A' || s[i] >'F')
				return 0;
		}
		return 1;
	
}
// This function will convert the number from string to base 10 and then to desired base
void convert1(int b1,int b2,char* s,char t[])
{
	int sum=0,i;
	for(i=0;i<=strlen(s)-1;i++)
	{
		if(s[i]>='0' && s[i]<='9')
			sum=sum*b1+(s[i]-'0');
		else if(s[i]>='A' && s[i]<='F')
			sum=sum*b1+(s[i]-'A'+10);
	}
	// Now we will conver the number to the desired base
	i=0;
	while(sum>0)
	{
		int rem=sum%b2;
		if(rem>9)
			t[i]=rem-10+'A';
		else
		t[i]=(rem)+'0';
		sum=sum/b2;
		i++;
	}
	t[i]='\0';
}
void stringrev(char s[])
{
	int i=0,j=strlen(s)-1;
	int temp;
	for(;i<j;i++,j--)
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
	}
}
