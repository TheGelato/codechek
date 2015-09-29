#include<stdio.h>
#include<math.h>
#include<string.h>
int powe(int xx,int yy)
{int pp=1,qq;
for(qq=0;qq<yy;qq++)
{
pp=pp*xx;
}
return pp;
}
int check(char z[],int a){
	int i,temp,n,x=0;
	n=strlen(z);
	i=n-1;
	while(i>=0)
	{
		temp=z[i]-'0';
		if((temp>=a&&a<16)||z[i]>70)
		return -1;
		if(temp>=17)  //BY ASCII CODES
		temp=temp-7;
		x+=temp*powe(a,n-i-1);
		i--;
    }
	return x;
}
void calc(int x,int b){
	int temp=x%b;
	if(x==0)
	return ;
	calc(x/b,b);
	if(temp<10)
	printf("%d",temp);
	else
	{
		if(temp==10)
		printf("A");
		else if(temp==11)
		printf("B");
		else if(temp==12)
		printf("C");
		else if(temp==13)
		printf("D");
		else if(temp==14)
		printf("E");
		else if(temp==15)
		printf("F");
	}
}
int main(int argc,char *argv[]){
	char z[50];
	int x=check(argv[3],atoi(argv[1]));
	if(x==-1)
	printf("0");
	else
	{
	calc(x,atoi(argv[2]));
    }
}
