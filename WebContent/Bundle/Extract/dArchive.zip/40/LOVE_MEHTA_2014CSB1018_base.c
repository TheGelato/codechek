#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
    int initial , decinum=0 , j=1 , remainder;
    int base = atoi(argv[1]);
    int basec = atoi(argv[2]);
    int f = 0,le=strlen(argv[3]),i=0;
    for(i=0;i<le;i++)
{if((base==2&&(argv[3][i]=='0'||argv[3][i]=='1'))||(base==8&&(argv[3][i]>='0'&&argv[3][i]<='7'))||(base==10&&(argv[3][i]>='0'&&argv[3][i]<='9'))||(base==16&&((argv[3][i]>='0'&&argv[3][i]<='9')||(argv[3][i]>='A'&&argv[3][i]<='F'))))
{int x=(int)argv[3][i];
if(x>57)
{x=x-55;}
else
{x=x-48;}
printf("%d   %d\n",x,p(base,le-i-1));
decinum=decinum+x*p(base,le-i-1);
}
else
{printf("0");
return 0;}
printf("%d",decinum);
}
calc(decinum,basec);
}


void calc(int x,int b){
	int temp=x%b;
	if(x==0)
	return ;
	calc(x/b,b);
	switch(temp)
	{
		case 10:
		printf("A");break;
		case 11:
		printf("B");break;
		case 12:
		printf("C");break;
		case 13:
		printf("D");break;
		case 14:
		printf("E");break;
		case 15:
		printf("F");break;
                default:
                printf("%d",temp);break;
	}
}

int p(int a,int b)
{int ans=1;
while(b!=0)
{ans=ans*a;
b--;}
return ans;
}
