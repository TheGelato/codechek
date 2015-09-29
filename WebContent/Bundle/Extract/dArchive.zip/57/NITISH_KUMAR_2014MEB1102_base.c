#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc,char *argv[])
{   int b1,b2;
    int a[100],b[100];char str[100];
    int len,dec=0;
    int p=1,i,k,j;
   b1=atoi(argv[1]);
   b2=atoi(argv[2]);
   strcpy(str,argv[3]);
len=strlen(str);
    for(i=0;i<len;i++)
           if(str[i]<='9')
           a[i]=str[i]-48;
            else
           a[i]=str[i]-55;

    for(i=0;i<len;i++)
           if(a[i]>=b1)
           {printf("0\n");exit(0);}

    for( i=(len-1);i>=0;i--)
    {
        dec=a[i]*p+dec;
        
        p=p*b1;
    }
i=0;
    while(dec>0)
      {
           k=dec%b2;
           dec=dec/b2;
	b[i++]=k;}
for(j=i-1;j>=0;j--)
      {if(b[j]<=9)
        printf("%c",48+b[j]);
      else
        printf("%c",55+b[j]);
      }
printf("\n");
return 0;
}
