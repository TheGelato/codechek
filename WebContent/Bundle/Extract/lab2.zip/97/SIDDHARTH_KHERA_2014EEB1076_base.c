#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main (int argc, char *argv[])
{
           int pow (int x, int y)
 {
     int i,n=1;
     for (i=1;i<=y;i++)
     {
         n*=x;
     }
 return n;
 }
            int f, b1,b2,num,i=0,j,k,ans=0,a=0,n,t;
            int ans2[20];
b1=atoi(argv[1]);
b2=atoi(argv[2]);
num=atoi(argv[3]);
int l=strlen(argv[3]);
if (b1!=16)
{
for(f=0;f<l;f++)
{
if((int)(argv[3][f])-48<0||(int)(argv[3][f])-48>(b1-1))
{
printf("0");
exit(0);
}
}
}
else 
{
for(f=0;f<l;f++)
{
if(((int)((argv[3][f])-48)<0||(int)((argv[3][f])-48)>(b1-1))&&(b1==16&&((int)((argv[3][f])-55)<10||(int)((argv[3][f])-55)>15)))
{
printf("0");
exit(0);
}
}
}
            t=num;
if (b1==b2)
        {
            printf("%s",argv[3]);
        }
else
{
            if ((b1==10) && (b2==2 || b2==8 || b2==16))
{
            int q[20];
            while(num>0)
        {
            q[i]=num%b2;
            i++;
            num=num/b2;
        }
            for( j=i-1;j>=0;j--)
        {
            //printf("%d",ans[j]);
            if (q[j]<10)
            {
                printf("%d",q[j]);
            }
            else
            {
                printf("%c",(char)(q[j]+55));
            }
        }
}
        else  if ((b1==8 || b1==16 || b1==2) && (b2==8 || b2==16 || b2==2 || b2==10))
{
ans=0;
 l=strlen(argv[3]);
            for (k=0;k<l;k++)
        {if((int)(argv[3][l-1-k])-48<=9)
            ans=((int)(argv[3][l-1-k])-48)*pow(b1,k) + ans;
else
ans=((int)(argv[3][l-1-k])-55)*pow(b1,k) + ans;
        }
 int u,v=0;
            while(ans!=0)
        {
            ans2[v]=ans%b2;
          
            ans=ans/b2;
 v++;
        } 
            for( u=v-1;u>=0;u--)
        {if(ans2[u]<=9)
         printf("%d",ans2[u]);
else
printf("%c",(char)(ans2[u]+55));        
}
}     
}
return(0);
}
