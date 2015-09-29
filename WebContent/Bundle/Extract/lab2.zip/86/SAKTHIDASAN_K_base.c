
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char value[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
int val(char a)
{
int r;
    if(a>='0'&&a<='9')
        r=a-'0';
    else
        r=(a-'A')+10;
return r;
}

int check(char *a, int base)
{ 
int i;                 // check for errors!!
   for(i=0;i<strlen(a);i++)
if(val(a[i])>=base)return 0;
    return 1;
}

char* conv(char* from,int base1,int base2)
{
    //first convert to decimal
    int index=strlen(from)-1;
    int pow=1,dec=0;
    while(index>=0)
    {
        dec=dec+val(from[index])*pow;
        pow=pow*base1;
        index=index-1;
    }
    //now convert it to desired base
    char to1[100],to[100];
    int temp;
    int i=0;
    while(dec!=0)
    {
        temp=dec%base2;
        to1[i]=value[temp];
        dec=dec/base2;
        i=i+1;
    }
	to1[i] = '\0';
    printf("%s\n",to1);
    int j=strlen(to1)-1;
   int k=0;
    //to reverse the array
    while(j>=0)
    {
        to[k]=to1[j];
        k=k+1;
        j=j-1;
    }
char *r =to;
    return r;

}

int main(int argc, char* argv[])
{
    int num;
    int base1;
	if(strlen(argv[1])==1)base1=argv[1][0]-'0';
else if(argv[1][0]=='1' && argv[1][1] == '0')base1=10;
else base1=16;                //convert from base
    int base2;
if(strlen(argv[2])==1)base2=argv[2][0]-'0';
else if(argv[2][0] == '1' && argv[2][1] == '0')base2=10;
else base2=16;                //convert to base
    char *from=argv[3];                    //number to convert
    char *to;
    if( check(from,base1)==0)
    {
        printf("Output: 0\n");
        exit(0);
    }
    else
        to=conv(from,base1,base2);          //convert
        int i=strlen(to);
int j;
printf("Output: ");
        for(j=0;j<i;j++)
            printf("%c",to[j]);
printf("\n");
        return 0;
}

