#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define OK 1
#define WRONG 0

int check(int a,char array[]);
int powbm(int base,int expo);
int main(int argc, char *argv[])
{
    int b1,b2,num;
     b1 = atoi(argv[1]);
     b2 = atoi(argv[2]);
    char arrnum[100];
     strcpy(arrnum,argv[3]);

    if (b1==10 && b2==2)      //Base 10 to base 2
     {
        int given=check(10,arrnum);
         if (given==WRONG)
            printf("0");
          else
       {
	int num = atoi(arrnum);
        int i,j=0,rem=0;
        int arrbm[32];
        while(num!=0)
        {
            rem = num%2;
            arrbm[j]=rem;
            num =(num)/2;
            j++;
        }
        for(i=j-1;i>=0;i--)
            printf("%d",arrbm[i]);
       }
    }

    else if (b1==10 && b2==8)      //Base 10 to base 8
      {  int given=check(10,arrnum);
         if (given==WRONG)
            printf("0");
          else
    {
       num = atoi(arrnum);
       int i,j=0,rem=0;
        int arrbm[32];
        while(num!=0)
        {
            rem = num%8;
            arrbm[j]=rem;
            num =(num)/8;
            j++;
        }
        for(i=j-1;i>=0;i--)
            printf("%d",arrbm[i]);
    }
   }

     else if (b1==2 && b2==10)      //Base 2 to base 10
     {   int given=check(2,arrnum);
         if (given==WRONG)
            printf("0");
          else
       {
         num = atoi(arrnum);
         int j=1,converted=0,rem;
         do
         {
             rem = num%10;
             converted = converted + rem*j;
             j*=2;
             num/=10;
         }
         while(num!=0);
         printf("%d",converted);
     }
   }

    else if (b1==8 && b2==10)      //Base 8 to base 10
     {   int given=check(8,arrnum);
         if (given==WRONG)
            printf("0");
          else
       {
          num = atoi(arrnum);
         int j=1,converted=0,rem;
         do
         {
             rem = num%10;
             converted = converted + rem*j;
             j*=8;
             num/=10;
         }
         while(num!=0);
         printf("%d",converted);
     }
     }

    else if (b1==2 && b2==8)      //Base 2 to base 8
       { int given=check(2,arrnum);
         if (given==WRONG)
            printf("0");
          else
     {
         num = atoi(arrnum);
         //First binary to decimal conversion
         int j=1,converted=0,rem;
         while(num!=0)
         {
             rem = num%10;
             converted = converted + rem*j;
             j*=2;
             num/=10;
         }

         //Then decimal to octal conversion
         int i,p=0,remp=0;
         int arrbm[32];
         while(converted!=0)
        {
            remp = converted%8;
            arrbm[p]=remp;
            converted =(converted)/8;
            p++;
        }
        for(i=p-1;i>=0;i--)
            printf("%d",arrbm[i]);
     }
  }

     else if (b1==8 && b2==2)       //Base 8 to base 2

      { int given=check(8,arrnum);
         if (given==WRONG)
            printf("0");
          else
     {
          num = atoi(arrnum);
         //First convert octal to decimal
        int j=1,converted=0,rem;
         while(num!=0)
         {
             rem = num%10;
             converted = converted + rem*j;
             j*=8;
             num/=10;
         }

        //Then convert decimal to binary
        int i,p=0,remo=0;
        int arrbm[32];
        while(converted!=0)
        {
            remo = converted%2;
            arrbm[p]=remo;
            converted =(converted)/2;
            p++;
        }
        for(i=p-1;i>=0;i--)
            printf("%d",arrbm[i]);
     }
   }

     else if (b1==10 && b2==16)         //Base 10 to base 16
      {  int given=check(10,arrnum);
         if (given==WRONG)
            printf("0");
          else
     {
          num = atoi(arrnum);
         int rem,q=0,j=0;
         char hexaray[50];
         while (num!=0)
         {
             rem = num%16;
             if (rem<10)
                rem+=48;       //Since integers start from 48
             else
                rem+=55;       //Since Alphabets start from 55

            num/=16;
            hexaray[q]=rem;
            q++;
         }
           for(j=q-1;j>=0;j--)
            printf("%c",hexaray[j]);
     }
   }

    else if (b1==2 && b2==16)      //Base 2 to base 16
      {  int given=check(2,arrnum);
         if (given==WRONG)
            printf("0");
          else
     {
          num = atoi(arrnum);
         int j=1,converted=0,rem;
         while(num!=0)
         {
             rem = num%10;
             converted = converted + rem*j;
             j*=2;
             num/=10;
         }

          int remp,q=0,p=0;
         char hexaray[50];
         while (converted!=0)
         {
             remp = converted%16;
             if (remp<10)
                remp+=48;       //Since integers start from 48
             else
                remp+=55;       //Since Alphabets start from 55

            converted/=16;
            hexaray[q]=remp;
            q++;
         }
           for(p=q-1;p>=0;p--)
            printf("%c",hexaray[p]);
     }
  }

      else if (b1==8 && b2==16)      //Base 8 to base 16
     {   int given=check(8,arrnum);
         if (given==WRONG)
            printf("0");
          else
     {
         num = atoi(arrnum);
         int k=1,converted=0,remp;
         while(num!=0)
         {
             remp = num%10;
             converted = converted + remp*k;
             k*=8;
             num/=10;
         }
            int rem,q=0,j=0;
            char hexaray[50];
            while (converted!=0)
         {
             rem = converted%16;
             if (rem<10)
                rem+=48;       //Since integers start from 48
             else
                rem+=55;       //Since Alphabets start from 55

            converted/=16;
            hexaray[q]=rem;
            q++;
         }
           for(j=q-1;j>=0;j--)
            printf("%c",hexaray[j]);

    }
}

    else if (b1==16 && b2==10)         //Base 16 to base 10
       {   int given=check(16,arrnum);
         if (given==WRONG)
            printf("0");
          else
    {
        int i=0,d,j=0,e=0,l;
        l=strlen(arrnum);
         for (i=0;i<l;i++)
           {
             if (arrnum[i]>='0' && arrnum[i]<='9')
              d = arrnum[i]-48;
             else d = arrnum[i]-55;

          e = d*(powbm(16,(l-i-1))) + e;
           }
           printf("%d",e);

   }
}

   else if (b1==16 && b2==2)         //Base 16 to base 2
       {   int given=check(16,arrnum);
         if (given==WRONG)
            printf("0");
          else
    {
        int i=0,d,e=0,l;
        l=strlen(arrnum);
         for (i=0;i<l;i++)
           {
             if (arrnum[i]>='0' && arrnum[i]<='9')
              d = arrnum[i]-48;
             else d = arrnum[i]-55;

          e = d*(powbm(16,(l-i-1))) + e;
           }

        int k,j=0,rem=0;
        int arrbm[32];
        while(e!=0)
        {
            rem = e%2;
            arrbm[j]=rem;
            e =(e)/2;
            j++;
        }
        for(k=j-1;k>=0;k--)
            printf("%d",arrbm[k]);

   }
   }

     else if (b1==16 && b2==8)         //Base 16 to base 8
        {  int given=check(16,arrnum);
         if (given==WRONG)
            printf("0");
          else
    {
        int i=0,d,e=0,l;
        l=strlen(arrnum);
         for (i=0;i<l;i++)
           {
             if (arrnum[i]>='0' && arrnum[i]<='9')
              d = arrnum[i]-48;
             else d = arrnum[i]-55;

          e = d*(powbm(16,(l-i-1))) + e;
           }

        int k,j=0,rem=0;
        int arrbm[32];
        while(e!=0)
        {
            rem = e%8;
            arrbm[j]=rem;
            e =(e)/8;
            j++;
        }
        for(k=j-1;k>=0;k--)
            printf("%d",arrbm[k]);
    }
}


    else if (b1-b2==0)
       {num = atoi(arrnum);
       printf("%d",num);
       }

else printf("0");
return 0;
}
int powbm(int base,int expo)
{
    int i,multiply=1;
    for (i=0;i<expo;i++)
        multiply = multiply*base;

    return multiply;
}


  int check(int a,char array[100])
{  int len=strlen(array);
   int num[len];int j,f;
   for(j=0;j<len;j++)
   {
       if (array[j]>='0' && array[j]<='9')
       {
           f=array[j]-48;

       }
       else if(array[j]>='A' && array[j]<='F')
       {

           f=array[j]-55;
       }
       num[j]=f;

   }
int k=0;
   for(j=0;j<len;j++)
   {
       if(num[j]>=0 && num[j]<=a-1)
       {
           continue;
       }
       else
       {
        k=1;
      break;
       }

   }
if (k==1)
{
return 0;
}
else
{
return 1;
}
}
