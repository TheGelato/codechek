#include<stdio.h>
#include<string.h>
#include<math.h>
int convert(int a,int b,int number)
{
       int j=1,rem,digit[10000];
        while(number!=0)
        {
            rem=number%10;
            if(rem>=a)
            {
                 printf("%d",0);
                 return 0;
            }
            digit[j]=rem;
            number=number/10;
        //    printf("digit[%d]=%d\n",j,rem);
            j=j+1;
        }
        int length=j-1;
        int sum=0,k;
        for(k=1;k<=length;k++)
        {
            sum=sum+(digit[k])*(power(a,k-1));
        }
   //     printf("value in base 10=%d\n",sum);
       // printf("value in base %d=",b);
        int remain,store[100],i=0,x;
        while(sum!=0)
        {
            remain=sum%b;
            store[i]=remain;
            sum=sum/b;
            i++;
        }
//printf("output :");
        
        for(x=i-1;x>=0;x--)
      
             printf("%d",store[x]);
        
        return 0;
}



int converthexa(int a,int b,char s[])
{
     if(a==16)
     {
        int c;
        c=strlen(s);
        int u;
        char t;
        int sum=0;
        for(u=0;u<c;u++)
        {
            t=s[u];
            if(t=='A' ||t=='B' ||t=='C'||t=='D' ||t=='E' ||t=='F')
            sum+=(t-'A'+10)*power(16,c-u-1);
            else if(t-'0'<10&&t-'0'>=0)
                sum+=(t-'0')*power(16,c-u-1);
            else
            {
                  printf("%d\n",0);
                  return 0;
            }
        }
        convert(10,b,sum);
    }
    else if(b=16)
    {
        int number=atoi(s);
        int j=1,rem,digit[10000];
        while(number!=0)
        {
            rem=number%10;
         if(rem>=a)
                          {
                            printf("%d",0);
                             return 0;
                           }
            digit[j]=rem;
            number=number/10;
        //    printf("digit[%d]=%d\n",j,rem);
            j=j+1;
        }
        int length=j-1;
       // printf("no. of digits is %d\n",length);
        int sum=0,k;
        for(k=1;k<=length;k++)
        {
            sum=sum+(digit[k])*(power(a,k-1));
        }
         int d=1,horse[100],jagjit;
            while(sum!=0)
            {
                jagjit=sum%16;
                horse[d]=jagjit;
                sum=sum/16;
                d=d+1;
            }
            int x;
            for(x=d-1;x>=1;x--)
            {
                if(horse[x]<10)
                   printf("%d",horse[x]);
                 else
                    printf("%c",'A'+(horse[x]-10));
            }
            //printf("\n");
    }
    return 0;
}


int power(int a,int b)
{
    int p=1,i;
    if(b>0)
    {
        for(i=1;i<=b;i++)
            p=p*a;
    }
    else
        p=1;
    return(p);
}



 main(int argc,char *argv[])

{
    int base1,base2,c,w;
    char s[100]={' '};
c=strlen(argv[3]);
     base1=atoi(argv[1]);
base2=atoi(argv[2]);
for(w=0;w<=c-1;w++)
                {
                 s[w]=argv[3][w];
            
                }
    //printf("enter base 1 : ");
    //scanf("%d",&base1);
    //printf("enter base 2 : ");
    //scanf("%d",&base2);
    //printf("enter number : ");
    //scanf("%s",&s);
    //a=atoi(argv[1]);
    //b=atoi(argv[2]);
    if(base1!=16 && base2!=16)
    {
         int l=strlen(s);
         int i;
         for(i=0;i<l;i++)
         {
             if(s[i]-'0'>9||s[i]-'0'<0)
             {
                   printf("%d",0);
                   return 0;
             }
         }
         int number=atoi(s);
         convert(base1,base2,number);
    }
    else
   /*  if(base2==16)
{
    int r=0;
            for(r=0;r<=c-1;r++)
                                   {
if(s[r]>'9')
   {
printf("%d\n",0);
return 0;
   }
                                    }
}*/
                     {
           
        converthexa(base1,base2,s);
                     }
return 0;
}
