#include<stdio.h>
int power(int b,int n){
	int a=1,i=0;
	for(;i<n;i++)
		a=a*b;
	if(n==0)
		a=1;
	return a;
}
unsigned long long int  abc_d(int l,int b,char argv[]){
	int i;
	unsigned long long int n=0;
	for(i=0;i<l;i++)
		if(argv[i]<(48+b)&&argv[i]>47&&b!=16)
			n=n+(argv[i]-48)*power(b,l-i-1);
		else if(argv[i]<58&&argv[i]>47&&b==16)
			n=n+(argv[i]-48)*power(b,l-i-1);
		else if((argv[i]<71&&argv[i]>64)&&b==16)
			n=n+(argv[i]-55)*power(b,l-i-1);
		else
			return 0;
	return n;
}
void d_abc(unsigned long long int n,int b){
	unsigned long long int m=n;
	int i,d,l=0;
	while(n>0){
		l++;
		n=n/b;
	}
	char G[l-1];
	for(i=0;m>0;i++,m=m/b){
		d=m%b;
		if(d<10)
			G[i]=d+48;
		else
			G[i]=d+55;
	}
	for(l=0;l<i;l++)
		putchar(G[i-l-1]);
}
int main(int argc, char *argv[]){
	int i=0,l=0,d=0;
	unsigned long long int n=0,m=0;
	while(argv[3][l]!='\0')
		l++;
	if(argv[1][0]=='2'&&argv[1][1]=='\0')
		n=abc_d(l,2,argv[3]);
	else if(argv[1][0]=='8'&&argv[1][1]=='\0')
		n=abc_d(l,8,argv[3]);
	else if(argv[1][0]=='1'&&argv[1][1]=='6'&&argv[1][2]=='\0')
		n=abc_d(l,16,argv[3]);		
	else if(argv[1][0]=='1'&&argv[1][1]=='0'&&argv[1][2]=='\0')
		n=abc_d(l,10,argv[3]);
	else{ 
		printf("0");
		return 0;
	}
	if(n==0){
		printf("0");
		return 0;
	}	
	if(argv[2][0]=='1'&&argv[2][1]=='0'&&argv[2][2]=='\0')
		printf("%llu",n);
	else if(argv[2][0]=='8'&&argv[2][1]=='\0')
		d_abc(n,8);
	else if(argv[2][0]=='1'&&argv[2][1]=='6'&&argv[2][2]=='\0')
		d_abc(n,16);
	else if(argv[2][0]=='2'&&argv[2][1]=='\0')
		d_abc(n,2);
	else
		printf("0");
	return 0;
}
