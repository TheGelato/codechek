#include <stdio.h>
char s[1000]={0};
int itob(int n,char s[],int b);                                         /*declared here so that main knows it exists*/
int main(int argc,char *argv[])                                                              /*main begins*/
{
    int n,b;
n=atoi(argv[3]);
b=atoi(argv[2]);
    //printf("Enter the number to convert.\n");                           /*number taken as input in base 10 integer*/
    //scanf("%d",&n);
    //printf("Enter base(prefrably uptil 16):\n");                        /*base value as input*/
   // scanf("%d",&b);
    itob(n,s,b);                                                        /*function itob() called*/
    return 0;
}
int itob(int n,char s[],int b)                                          /*function itob() begins*/
{
    int sign=1;                                                         /*sign (variable) to incorporate sign of the number given as input*/
    if(n<0)
    {
        sign=-1;
        n=-n;
    }
    int i=0,rem,j,quo=n;
    s[0]='0';
    for(i=0;quo!=0;i++)                                                 /*alogithm to convert to any base uptil 16 preferably.*/
    {
        rem=quo%b;
        if(rem<=9)
        s[i]=rem+'0';
        else if(rem>=10)
        s[i]=rem-10+'a';
        quo=quo/b;
    }
    if(sign==-1)                                                        /*sign incorporated to the array*/
    s[i]='-';
    printf("So here's your converted number.:)\n");
    for(j=i;j>=0;j--)
    putchar(s[j]);
    return 0;
}
