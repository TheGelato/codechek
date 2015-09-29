#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main(int argc,char *argv[])
{
int pow(long long int x,long long int t)
{long long int q,g=1;
for(q=1;q<=t;q++)
{
g=g*x;
}
return g;
}
      long long int b1,b2,j,i,l,p=0,b,c;
b1=atoi(argv[1]);
b2=atoi(argv[2]);
 l=strlen(argv[3]);
    for(i=0;i<l;i++)
    {
    	argv[3][i]=argv[3][i]-'0';
	if( b1!=16&&(argv[3][i]<0 || argv[3][i]>b1-1)) 
	{
	printf("0");
    return 0;
}
long long int c=argv[3][i]-'A';
             c=c+58;
if(b1==16 &&(argv[3][i]<0||argv[3][i]>9)&&(c<10||c>15))
{
	printf("0");
	return 0;
}
                if(argv[3][i]>=0&&argv[3][i]<=9)
            {
                p=p+argv[3][i]*pow(b1,l-1-i);
            }
            else
                { 
                                p=p+c*pow(b1,l-1-i);
                }}
    i=0;
    while(p!=0)
    {
argv[3][i]=p%b2;
        p=p/b2;
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
        if(argv[3][j]<=9) printf("%d",argv[3][j]);
else {printf("%c",argv[3][j]+55);}}
return 0;
}


