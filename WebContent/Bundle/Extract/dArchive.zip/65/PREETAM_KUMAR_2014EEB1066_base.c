#include<stdio.h>

int power(int b,int n){
	int a=1,i=0;
	for(;i<n;i++)
		a=a*b;
	if(n==0)
		a=1;
	return a;
}
int main(int nn, char *A[]){
	int i=0,l=0,d=0;
	unsigned long long int m=0,n=0;
	while(A[3][l]!='\0')
		l++;
	if(A[1][0]=='2'&&A[1][1]=='\0')
		for(i=0;i<l;i++)
			if(A[3][i]=='1'||A[3][i]=='0')
				n=n+(A[3][i]-48)*power(2,l-i-1);
			else{
				printf("0");
				return 0;
			}
	else if(A[1][0]=='8'&&A[1][1]=='\0')
		for(i=0;i<l;i++)
			if(A[3][i]<56&&A[3][i]>47)
				n=n+(A[3][i]-48)*power(8,l-i-1);
			else{
				printf("0");
				return 0;
			}
	else if(A[1][0]=='1'&&A[1][1]=='6'&&A[1][2]=='\0')
		for(i=0;i<l;i++)
			if(A[3][i]<58&&A[3][i]>47)
				n=n+(A[3][i]-48)*power(16,l-i-1);
			else if(A[3][i]<71&&A[3][i]>64)
				n=n+(A[3][i]-55)*power(16,l-i-1);
			else{
				printf("0");
				return 0;
			}	
	else if(A[1][0]=='1'&&A[1][1]=='0'&&A[1][2]=='\0')
		for(i=0;i<l;i++)
			if(A[3][i]<58&&A[3][i]>47)
				n=10*n+(A[3][i]-48);
			else{
				printf("0");
				return 0;
			}
	else{
		printf("0");
		return 0;
	}
	if(A[2][0]=='1'&&A[2][1]=='0'&&A[2][2]=='\0')
		printf("%llu",n);
	else if(A[2][0]=='8'&&A[2][1]=='\0'){
		m=n;
		l=0;
		while(n>0){
			l++;
			n=n/8;
		}
		char G[l-1];
		for(i=0;m>0;i++,m=m/8)
			G[i]=(m%8)+48;
		for(l=0;l<i;l++)
			putchar(G[i-l-1]);
	}
	else if(A[2][0]=='1'&&A[2][1]=='6'&&A[2][2]=='\0'){
		m=n;
		l=0;
		while(n>0){
			l++;
			n=n/16;
		}
		char G[l-1];
		for(i=0;m>0;i++,m=m/16){
			d=m%16;
			if(d<10)
				G[i]=d+48;
			else
				G[i]=d+55;
		}
		for(l=0;l<i;l++)
			putchar(G[i-l-1]);
	}
	else if(A[2][0]=='2'&&A[2][1]=='\0'){
		m=n;
		l=0;
		while(n>0){
			l++;
			n=n/2;
		}
		char G[l-1];
		for(i=0;m>0;i++,m=m/2)
			G[i]=(m%2)+48;
		for(l=0;l<i;l++)
			putchar(G[i-l-1]);
	}
	else
		printf("0");
	return 0;
}
