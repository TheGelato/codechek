#include<stdio.h>
#include<string.h>

int main(int argc,char *argv[])
{  if(argc==4)                                                  //Checking if 3 arguments have been passed for the Program
   {int a= atoi(argv[1]),b=atoi(argv[2]),cn=strlen(argv[3]);    //Taking input as argv[] and assigning the bases to variables
   int i=0,res=0;
   if(a==2)
       {for(;i<cn;i++)                                          //Checking Input Number for Binary Base
           {  char ch=argv[3][i];
              int d=(int)ch;
              if(d==48||d==49)                                  //Comparing ASCII values of input digits with permitted digits of BINARY base
              {}
              else
              {res=1;}
           }
       }
   else if(a==8)
       {for(;i<cn;i++)                                          //Checking Input Number for Octal base
           {  char ch=argv[3][i];
              int d=(int)ch;
              if(d>=48&&d<=55)                                  //Comparing ASCII values of input digits with permitted digits of OCTAL base
              {}
              else
              {res=1;}
           }
       }
   else if(a==10)
       {for(;i<cn;i++)                                          //Checking Input Number for Decimal base
           {  char ch=argv[3][i];
              int d=(int)ch;
              if(d>=48&&d<=57)                                  //Comparing ASCII values of input digits with permitted digits of DECIMAL base
              {}
              else
              {res=1;}
           }
       }
   else if(a==16)
       {for(;i<cn;i++)                                          //Checking Input Number for Hexadecimal Base
           {  char ch=argv[3][i];
              int d=(int)ch;
              if(d>=48&&d<=70)                                  //Comparing ASCII values of Input digits with permitted digits of HEXADECIMAL base
              {if(d>=58&&d<=64)
              {res=1;}
              }
              else
              {res=1;}
           }
       }
   if(res==0)                                                   //If all digits of Input Number follow Base1 execute the following code
         {  int dec=0,c1=1,i1;                                  //Declaring variable dec which will store decimal value
            for(i1=0;i1<cn;i1++)
            {c1=1;int j;
            for(j=cn-i1-1;j>0;j--)
                {c1=c1*a;}
                int x=(int)argv[3][i1];                         //Process for converting number in give base to number in DECIMAL base
                if(x>=65&&x<=70)
                {x=x-55;}                                       //Using ASCII codes to convert number to DECIMAL base
                else
                {x=x-48;}
                dec=dec+c1*x;                                   //Obtaining number in DECIMAL form by multiplying with powers
            }
            i1=dec;
            int c2=0,c4=dec;
            while(i1!=0)
            {i1=i1/b;
            c2++;}                                              //Obtaining highest power of Base2 in DECIMAL number and storing in c2
            c2--;
            int c3;
            for(c3=c2;c3>=0;c3--)
            {c1=1;int j;
            for(j=c3;j>=1;j--)
                {c1=c1*b;}
            int c6=c4/c1;
            char c8;
            if(c6>=10)
            {c8 = (char)(((int)'A')+c6-10);                     //Using ASCII values to print characters of required answer
            }
            else
            {c8 = (char)(((int)'0')+c6);
            }
            printf("%c",c8);
            c4=c4%c1;                                          //Printing each character of required Answer
            }
    printf("\n");
         }
   else
   {printf("0");}                                              //Printing 0 if the Input Number is not a valid Base1 number
   }
 else
 {printf("3 Arguments expected");}
}
