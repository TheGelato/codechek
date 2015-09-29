#include<stdio.h>
#include<string.h>

int total=0, m[20];

int power(int a, int b)
{
	int i, p=1;
	for(i=1; i<=b; i++)
	p*=a;
	return p;
}

long int convert_to_10 (int b1, int a[], int n)
{
	int i=n-1;
	long int b10=0;
	for(; i>=0; i--)
	b10+=a[i]*power(b1, n-i-1);
	return b10;
}

int * convert_from_10(long int b10, int b2)
{
	while(b10>0)
	{
		*(m+total)=b10%b2;
		b10=b10/b2;
		total++;
	}
	return  m;
}

int main(int argc, char *argv[])
{
	
	int n=strlen(argv[3]);
	int a[n], i, j, b1, b2, max=0;
	char ch;
	
	//converting the given number in string into an integer array
	for(i=0; i<n; i++)  			
	{
		ch=*(argv[3]+i);
		if(ch>=97&&ch<=102)
		a[i]=ch-87;
		else if(ch>=65&&ch<=70)
		a[i]=ch-55;
		else if(ch>=48&&ch<=57)
		a[i]=ch-48;
	}
	
	//converting the initial base into integer
	if(strlen(argv[1])==1)			
	b1=*argv[1]-48;
	else 
	b1=10+(*(argv[1]+1)-48);
	
	//converting the final base into integer
	if(strlen(argv[2])==1)			
	b2=*argv[2]-48;
	else 
	b2=10+(*(argv[2]+1)-48);
	
	//finding the maximium digit in the number entered
	max=a[0];
	for(i=0; i<n; i++)
	{	
	    if(a[i]>max)
	    max=a[i];
	}
	//checking if enered number belongs to initial base
	if(max>=b1)
	{
	    printf("0");
	    //end program if entered number doesn't belong to initial base
	    return 0;        
    }
   else
    {
    	long int num=convert_to_10(b1, a, n);
    	if(b2==10)
    	{
    		printf("%ld",num);
    		return 0;
    	}
    	int* final=convert_from_10(num, b2);
    	char finalnum[total+1];
    	for(i=0; i<total; i++)
    	{
    		j=*(final+total-1-i);
    		if(j>=0&&j<=9)
    		finalnum[i]=j+48;
    		else if(j>=10&&j<=15)
    		finalnum[i]=j+55;
    	}
    	finalnum[total]='\0';
    	puts(finalnum);
    }
    return 0;
}
