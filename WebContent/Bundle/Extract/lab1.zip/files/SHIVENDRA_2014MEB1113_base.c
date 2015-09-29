#include <stdio.h>
#include<string.h>
#include<stdlib.h>
char s[1000]={0};
int itob(int n,char s[],int b);                                         
int main(int argc,char *argv[])                                                              
{
    int n,b;char s[100];
      n=atoi(argv[1]);
    b=atoi(argv[2]);
    strcpy(s,argv[3]);
    itob(n,s,b);   
        return 0;
}
int itob(int n,char s[],int b)                                         
{
    

    int i=0,rem,j,quo=0,p=1,len;char str[100];
    len=strlen(s);
    
    for(i=0;i<len;i++)
    {if(s[i]<=57 && s[i]-48>=n)
    {printf("0");exit(0);}
    else if(s[i]>=65 && s[i]-55>=n)
    {printf("0");exit(0);}}
    for(i=len-1;i>=0;i--)
    {
    if(s[i]<=57)
    quo=quo+(int)(s[i]-48)*p;
    else
    quo=quo+(int)(s[i]-55)*p;
    
    p=p*n;
    }
    
    
    for(i=0;quo!=0;i++)                                                 
    {
        rem=quo%b;
        if(rem<=9)
        str[i]=rem+'0';
        else if(rem>=10)
        str[i]=rem+55;
        quo=quo/b;
    }
    for(j=i-1;j>=0;j--)
    putchar(str[j]);
    return 0;
}
