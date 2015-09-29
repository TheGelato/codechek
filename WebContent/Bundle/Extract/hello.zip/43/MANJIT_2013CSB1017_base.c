#include<stdio.h>
#include<string.h>
void itob(int n,char s[],int b);
int main(int argc, char* argv[])
{
      int p,a;
      char r[1000];
      //printf("enter a no. n:\n");
      //scanf("%d",&p);
      p = atoi(argv[3]);
      //printf("enter base digit:\n");
      //scanf("%d",&a);
      a = atoi(argv[2]);
      itob(p,r,a);
      return 0;
}
void itob(int n,char s[],int b)
{
         int i,j,temp;
         if(n==0)
         printf("0\n");
         else
         {
         for(i=0;n>0;i++)
         {
         if(n%b>=10)
         {
        	 s[i]=n%b+55;
             n=n/b;
         }
         else
         {
        	 s[i]=n%b+'0';
             n=n/b;
         }
         }
         s[i]='\0';
        for(i=(strlen(s)-1),j=0;i>j;i--,j++)
         {
         temp=s[i];
         s[i]=s[j];
         s[j]=temp;
         }
         printf("%s",s);
         }
}
