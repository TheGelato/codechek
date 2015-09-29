#include <stdio.h>
#include <stdlib.h>
#include <string.h>			
int binarytoocta(long long int num)				// binary to octa
{
	long long int s=0,c=1,x;
	while(num!=0){
		x=num % 10;
		s=s+x*c;
		c=c*2;
		num=num/10;
	}
	decimaltoocta(s);	
}												//end binary to octa
int binarytodecimal(long long int num)			// binary to decimal
{
	long long int s=0,c=1,x;
	while(num!=0){
		x=num % 10;
		s=s+x*c;
		c=c*2;
		num=num/10;
	}
	printf("%lli",s);	
}												// end binary to decimal
int binarytohexa(long long int num)				//binary to hexa
{
	long long int s=0,c=1,x;
	while(num!=0){
		x=num % 10;
		s=s+x*c;
		c=c*2;
		num=num/10;
	}
	decimaltohexa(s);	
}												//end binary to hexa
int octatobinary(long long int num)				// octa to binary
{
	long long int s=0,c=1,x;
	while(num!=0){
		x=num % 10;
		s=s+x*c;
		c=c*8;
		num=num/10;
	}
	decimaltobinary(s);
}  												// end octa to binary
int octatodecimal(long long int num)			// octa to decimal
{
	long long int s=0,c=1,x;
	while(num!=0){
		x=num % 10;
		s=s+x*c;
		c=c*8;
		num=num/10;
	}
	printf("%lli",s);	
}  												// end octa to decimal			
int octatohexa(long long int num)				//octa to hexa
{
	long long int s=0,c=1,x;
	while(num!=0){
		x=num % 10;
		s=s+x*c;
		c=c*8;
		num=num/10;
	}
	decimaltohexa(s);
}  												// end octa to hexa
int decimaltobinary(long long int num)			// decimal to binary
{
	long long int n,m,q,r[256];
	q = num;
	if (q==0)
		printf("0");
	else if (q==1)
		printf("1");
	else if (q>=2) {
		n = 1;
		while (q >= 2) {
			r[n] = q % 2;
			q=q / 2;
			r[n+1] = q;
			n++;
		}
		for (m=1;m<=n;m++)
			printf("%lli",r[n+1-m]);
	}
}  												// end decimal to binary
int decimaltoocta(long long int num)			// decimal to octa
{
	long long int n,m,q,r[256];
	q = num;
	if (q==0)
		printf("0");
	else if (q==1)
		printf("1");
	else if (q==2)
		printf("2");
	else if (q==3)
		printf("3");
	else if (q==4)
		printf("4");
	else if (q==5)
		printf("5");
	else if (q==6)
		printf("6");
	else if (q==7)
		printf("7");
	else if (q>=8) {
		n = 1;
		while (q >= 8) {
			r[n] = q % 8;
			q=q / 8;
			r[n+1] = q;
			n++;
		}
		for (m=1;m<=n;m++)
			printf("%lli",r[n+1-m]);
	}
}												// end decimal to octa	
int decimaltohexa(long long int q)				// decimal to hexa
{
	long long int n,m,t;
	char r[256];
	n=0;
	while( q!= 0)	{
	
	t=q % 16;

	if( t < 10)
           t=t+ 48;
      else
         t= t+55;

      r[n]= t;
      q = q/16;
	n++;
	}
	for(m=n-1;m>=0;m--)
      printf("%c",r[m]);
}												// end decimal to hexa
long long int chartoint(char c[])				// converting character string to integer(long)
	{
    	long long int val = 0;
		long long int i;
		i=0;
		while (c[i] != '\0'){
    	    val = val*10 + c[i] - '0';
			i++;
		}
 
    	return val;
	}											// end converting
int main(long long int argc, char *argv[])		// main() THE KING
{
    long long int b1,b2,num;
    
	b1=chartoint(argv[1]);
	b2=chartoint(argv[2]);


		char str[256]="0";
		int result;
		long long int l,cnum;
		l=strlen(argv[3])-1;

		for (cnum=0;cnum<=l;cnum++) {
		str[cnum]=argv[3][cnum];
		}
	num=chartoint(str);				
	int n1,c1;									//check
	n1=0;
	c1=0;
	if(b1==2) {
	while( str[n1] != '\0' ) {
		if (str[n1]!='0' && str[n1]!='1') {
			c1++;
		}
	n1++;
	}
	}
	if(b1==8) {
	while( str[n1] != '\0' ) {
		if (str[n1]!='0' && str[n1]!='1' && str[n1]!='2' && str[n1]!='3' && str[n1]!='4' && str[n1]!='5' && str[n1]!='6' && str[n1]!='7') {
			c1++;
		}
	n1++;
	}
	}
	if(b1==10) {
	char p;
	while( str[n1] != '\0' ) {
		for(p='a';p<='z';p++)
			if (str[n1]==p || str[n1]==toupper(p)) {
				c1++;
			}
		n1++;
		}
	}
	if(b1==16) {
	char p;
	while( str[n1] != '\0' ) {
		for(p='g';p<='z';p++)
			if (str[n1]==p || str[n1]==toupper(p))
				c1++;
		n1++;
		}
	}
	if (c1==0)
		result=1;
	else
		result=0;									//end check
	if (result==1) {
									if(b1==b2)
										printf("%s",str);
									else if ((b1 == 10) && (b2==2))
										decimaltobinary(num);
									else if ((b1 == 10) && (b2==8))
										decimaltoocta(num);
									else if ((b1 == 10) && (b2==16))
										decimaltohexa(num);
									else if ((b1 == 2) && (b2==10))
										binarytodecimal(num);
									else if ((b1 == 8) && (b2==10))
										octatodecimal(num);
									else if ((b1 == 16) && (b2==10)) {
										char q[256];
										long long int n,s,l,ch,c,digit,p,i;
										l=strlen(argv[3])-1;
										digit=0;
										for (n=0;n<=l;n++)
										q[n]=argv[3][n];
										s=0;
										for(i=l;i>=0;i--) {
											if (q[i]>='0' && q[i]<='9')
												ch=q[i]-'0';
											else if((q[i]>='A' && q[i]<='F') || (q[i]>='a' && q[i]<='f'))
												ch=q[i]-55;
											c=1;
											if (digit>=1) {
												for (p=1;p<=digit;p++) {
													c=c*16;
												}
											}
											else if (digit==0)
												c=1;	
											s=s+(c*ch);
											digit++;
										}
	
										printf("%lli",s);
										putchar('\n');
									}
									else if ((b1 == 2) && (b2==8))
										binarytoocta(num);
									else if ((b1 == 2) && (b2==16))
										binarytohexa(num);
									else if ((b1 == 8) && (b2==2))
										octatobinary(num);
									else if ((b1 == 8) && (b2==16))
										octatohexa(num);
									else if (b1 == 16) {
										char q[256];
										long long int n,s,l,ch,c,digit,p;
										l=strlen(argv[3])-1;
										digit=0;
										for (n=0;n<=l;n++) {
										q[n]=argv[3][n];
										}
										s=0;
										long long int i;
										for(i=l;i>=0;i--) {
											if (q[i]>='0' && q[i]<='9')
												ch=q[i]-'0';
											else if(q[i]>='A' && q[i]<='F')
												ch=q[i]-55;
											else if(q[i]>='a' && q[i]<='f')
												ch=q[i]-87;
											c=1;
											if (digit>=1) {
												for (p=1;p<=digit;p++)
													c=c*16;
											}
											else if (digit==0)
												c=1;	
											s=s+(c*ch);
											digit++;
										}
										if (b2==2)
										decimaltobinary(s);
										if (b2==8)
										decimaltoocta(s);
										if (b2==10)
										printf("%lli",s);
									}
	}
	else if (result==0)
		printf("0");
}  																// end main
