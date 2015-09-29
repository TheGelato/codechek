#include<stdio.h>
#include<string.h>
#include<math.h>
int main(int argc,char *argv[])
{
    int i,b1=atoi(argv[1]),b2=atoi(argv[2]),sum=0,n,h,c=0; //defined functions


       if(b1==2)                                           //condition to check if base1 is 2
{
         n=strlen(argv[3]);
                for(i=n-1;i>=0;i--)
                {
                    if (argv[3][i]!='0' && argv[3][i]!='1')//condition for checking if no is binary
                     {printf("0");
                        return 0;}
                }



                for(i=n-1;i>=0;i--)
                {
                    h=(int)argv[3][i]-48;
                    sum=sum+h*pow(b1,c);                  //decimal value of binary no
                    c++;
                }

}
    if(b1==16)                                            //condition to check if given base1 is hexadecimal
    {
        n=strlen(argv[3]);
            for(i=n-1;i>=0;i--)
            {
            if(argv[3][i]>='0'&&argv[3][i]<='9')
            h=(int)argv[3][i]-'0';
            else
            {
                if(argv[3][i]>='A'&&argv[3][i]<='F')      //conditions to check no is hexadecimal or not
                h=(int)argv[3][i]-55;
                else
                {
                printf("0");
                return 0;
                }
            }
            sum=sum+pow(16,c)*h;                           //decimal value of hexadecimal no
            c++;
            }
        }
    if(b1==8)                                              //condition to check if given base1 is octal
    {
        n=strlen(argv[3]);
            for(i=n-1;i>=0;i--)
            {
            if(argv[3][i]>='0'&&argv[3][i]<='7')           //condition to check if no is ocatal
            h=(int)argv[3][i]-'0';
            else
            {
            printf("0");
            return 0;
            }
          sum=sum+pow(8,c)*h;                              //decimal value of octal no
          c++;

            }


    }
    if(b1==10)                                             //condition to check if given base1 is decimal
    {
     n=strlen(argv[3]);
        for(i=n-1;i>=0;i--)
            if(argv[3][i]>='0'&&argv[3][i]<='9')           //condition to check if given no is decimal or not
                sum=(int)argv[3][i]-48;                    //decimal value
            else
                {
                printf("0");
                return 0;
                }
        }
    if(b2==2||b2==8||b2==10)                               //condition to check if base2 is decimal,octal,binary
    {
    int z=sum,n1=sum,j=-1;
        while(z!=0)                                        //loop to check until the remainder is zero
        {
        z=z/b2;
        ++j;
        }
        while(j>=0)
        {
        int c1=pow(b2,j);
        j--;
        int c2=n1/c1;
        printf("%d",c2);                                   //converted no according to base2
        n1=n1%c1;
        }
    }
    if(b2==16)                                             //condition to check if base2 given is hexadecimal or not
    {
int z=sum,n1=sum,j=-1;
        while(z!=0)                                        //loop to check until the remainder is not zero
        {
        z=z/b2;
        ++j;
        }
        while(j>=0)
        {
        int c1=pow(b2,j);
        j--;
int c2=n1/c1;
        if(c2<=9)                                         //condition to check if no does not exceed 10 in hexadecimal
        {
        printf("%d",c2);                                  //hexadecimal no
        n1=n1%c1;
        }
        else
        {
        char ch;
        if(c2==10)                                        //these all are the cases applied when no exceed 10
           ch='A';                                       //and here the respective values are assigned in them
        if(c2==11)
           ch='B';
        if(c2==12)
           ch='C';
        if(c2==13)
           ch='D';
        if(c2==14)
           ch='E';
        if(c2==15)
           ch='F';
            printf("%c",ch);                            //hexadecimal values when no exceeding 10
            n1=n1%c1;
        }
        }

    }
printf("\n");
}




