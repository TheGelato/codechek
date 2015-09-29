//Header Files used
# include <stdio.h>
# include <unistd.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>

   
unsigned long long int power(int a,int b)//function to calculate power
    { unsigned long long int p=1,i;
       for(i=1;i<=b;i++)
            p*=a;
       return p;
    }
void dectobi(char str[])//function to convert decimal into binary
 {  int i,j,A[50];
     int num=atoi(str);
    for(i=0;num!=0;i++)
    {   A[i]=num%2;
         num/=2;
    }
     for(j=i-1;j>=0;j--)
        printf("%d",A[j]);
        printf("\n");
 }
unsigned long long int dectooct(char str[])//function to convert decimal into octal 

{   unsigned long long sum=0;
    int octa,i;
   unsigned long long int num=atoi(str);
    for(i=0;num!=0;i++)
    {
        octa=num%8;
        sum+=octa*power(10,i);
        num/=8;
    }
    return sum;
}
void anytohex(char str[])//function to convert any base into hexadecimal
{
   unsigned int num=atoi(str);
    printf("%X\n",num);
}
unsigned long long int bitodec(char str[])//function to convert binary into decimal
{
    unsigned long long int sum=0,i;
    int n=strlen(str);
    for(i=0;i<n;i++)
        sum+=power(2,i)*(str[n-1-i]-48);
        return sum;

}
unsigned long long int octtodec(char str[])//function to convert octal into decimal
{
    unsigned long long int sum=0,i;
    int n=strlen(str);
    for(i=0;i<n;i++)
       { 
        sum+=power(8,i)*(str[n-1-i]-48);
       }
    return sum;

}
unsigned long long int hextodec(char str[])//function to convert hexadecimal into decimal
{
    unsigned long long int sum=0,i,num;
    int n=strlen(str);
    for(i=0;i<n;i++)
    {
       if(str[i]>='0'&&str[i]<='9')
           num=str[i]-48;
       else if(str[i]>='A'&&str[i]<='F')
           num=str[i]-55;
      sum+=power(16,n-i-1)*num;
    }
    return sum;
}
int main(int argc,char *argv[])//main function
{
    int b1=atoi(argv[1]);//type casting
    int b2=atoi(argv[2]);
    int i;
    if(b1==2)//cases
    {   int n=strlen(argv[3]);
            for(i=0;argv[3][i]!='\0';i++)//checking
                if(!(argv[3][i]=='0'||argv[3][i]=='1'))
                   { printf("0\n");  
                     return 0;
                    }
           
                if(b2==2)
                  printf("%s\n",argv[3]);
                   else if(b2==8)
                 {char A[50];
                  unsigned long long int num2= bitodec(argv[3]);
                  sprintf(A,"%llu",num2);
                  printf("%llu\n",dectooct(A));
                 }
                else if(b2==10)
                {
                printf("%llu\n",bitodec(argv[3]));
                }
                else if(b2==16)
          
                anytohex(argv[3]);
           
     }
    else if(b1==8)
   {       int i;
           int n=strlen(argv[3]);
           for(i=0;argv[3][i]!='\0';i++)
           if(!(argv[3][i]>='0'&&argv[3][i]<='7'))
               { printf("0\n");
                return 0;
               }
      
             if(b2==8)
             printf("%s\n",argv[3]);
            else if(b2==2)
            {  char A[50];
              unsigned long long int num3=octtodec(argv[3]);
                sprintf(A,"%llu",num3);
               dectobi(A);
             }
            else if(b2==10)
             printf("%llu\n",octtodec(argv[3]));
            else if(b2==16)
             anytohex(argv[3]);
         
    }
  else if(b1==10)
    {    int n=strlen(argv[3]);
          for(i=0;argv[3][i]!='\0';i++)
            if(!(argv[3][i]>='0'&&argv[3][i]<='9'))
               { printf("0\n");
                 return 0;
               }
             if(b2==10)
              printf("%s\n",argv[3]);
            else if(b2==2)
             dectobi(argv[3]);
            else if(b2==8)
              printf("%lld\n",dectooct(argv[3]));
            else if(b2==16)
             anytohex(argv[3]);
         
    }
   else if(b1==16)
    {     int n=strlen(argv[3]);
           for(i=0;argv[3][i]!='\0';++i)
            if(!((argv[3][i]>='0'&&argv[3][i]<='9')||(argv[3][i]>='A'&&argv[3][i]<='F')))
                { printf("0\n"); 
                  return 0;
                 }
             if(b2==16)
              printf("%s\n",argv[3]);
             else if(b2==2)
             {  char A[50];
              unsigned long long int num4=hextodec(argv[3]);
               sprintf(A,"%llu",num4);
               dectobi(A);
             }
             else if(b2==8)
             { char A[50];
               unsigned long long int num5=hextodec(argv[3]);
               sprintf(A,"%llu",num5);
               printf("%llu\n",dectooct(A));
             }
             else if(b2==10)
               printf("%lld\n",hextodec(argv[3]));
        
    }
else
   printf("0\n");
}//end of main
