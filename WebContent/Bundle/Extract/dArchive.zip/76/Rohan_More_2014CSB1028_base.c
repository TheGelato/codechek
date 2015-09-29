#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>
int main(int argc,char *argv[]){
int p=1,b1=atoi(argv[1]),b2=atoi(argv[2]),d=0;

char num[100];
strcpy(num,argv[3]);
int len=strlen(num);
int i;

for (i=0;i<len;i++)
{
    if (num[i]<='9' && (num[i]-'0')>=b1)
       {

        printf("0");
        exit(0);}

    else if (num[i]>='A' && (num[i]-55)>=b1)
{
    printf("0");
    exit(0);
}
}

d=0;
for (i=len-1;i>=0;i--){
    if (num[i]<='9')
    d=d+(num[i]-'0')*p;
else d=d+(num[i]-55)*p;
p=p*b1;
}
//printf("%d",d);
char b16[16] =
	 {'0', '1', '2', '3', '4', '5', '6', '7',
	  '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
   int ans[64];
    i=0;
   while (d != 0)
   {
	 ans[i] = d % b2;
	 d=d / b2;
	 ++i;
   }
  --i;
   //printf("\n\nConverted Number = ");
   for(  ; i>=0; i--)   {
	 printf("%c", b16[ans[i]]);
   }
   printf("\n");

return 0;
}
