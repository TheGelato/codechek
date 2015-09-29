#include<stdio.h> 
#include<string.h> 
#include<stdlib.h>
void baseconvert(char s[50],int,int); 
void checkbase(char s[50],int b1)
{int i;
for(i=0;i<strlen(s);i++)
if(s[i]<='9')
{if(s[i]-'0'>=b1)
{printf("0\n");exit(0);}}

else if(s[i]>='A')
{//printf("hi");
if(s[i]-'0'-7>=b1)
{printf("0\n");exit(0);}}


}



int main(int argc,char *argv[]) 
{    
    char s[50]; 
    int base1,base2; 
    base1=atoi(argv[1]);
    base2=atoi(argv[2]);
    strcpy(s,argv[3]);	
   // printf("Enter the base1 base2 and number:"); 
    //scanf("%d%d%s",&base1,&base2,s); 
   checkbase(s,base1); 
   baseconvert(s,base1,base2); 
} 




void baseconvert(char s[50],int b1,int b2) 
{ 
    int gap=0,r,numb,i,n=0,b=1; 
    for(i=strlen(s)-1;i>=0;i--) 
        { 
         if(s[i]>='A'&&s[i]<='F') 
            { 
             numb=s[i]-'0'-7; 
            } 
         else 
            { 
             numb=s[i]-'0'; 
            } 
        n=numb*b+n; 
        b=b*b1; 
        } 

    while(n!=0) 
    { 
        r=n%b2;
        numb='0'+r; 
        if(numb>'9') 
        { 
            numb+=7; 
        } 
         s[gap]=numb; 
         gap++; 
         n=n/b2; 
    } 
for(i=gap-1;i>=0;i--) 
    { 
     printf("%c",s[i]); 
    } 
 printf("\n"); 

}
