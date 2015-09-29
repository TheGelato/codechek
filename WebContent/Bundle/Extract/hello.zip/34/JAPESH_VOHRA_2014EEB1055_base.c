#include<stdio.h>
#include<string.h>
int main(int argc,char*argv[])
{
    int c,a,k,l,i=0,j;
    char y[100];
    int base1=atoi(argv[1]);
    int base2=atoi(argv[2]);
    int length=strlen(argv[3]);
    int ma=0;
        for(i=0;i<length;++i)
    {
        if (argv[3][i]>ma)
        {
            ma=argv[3][i];
        }
    }
            if (ma>64)
         {ma=ma-55;}
        else
           {ma=ma-48;}

    if (ma>base1-1)
    {
        printf("0");
        return 0;
    }
   i=0;

  for(c=0;c<length;c++)
        {
            k=1;
            for (a=length-1;a>c;a--)
            {
                k=base1*k;
            }
            if (argv[3][c]>64)
            {j=(argv[3][c]-55)*k;}
            else
            {j=(argv[3][c]-48)*k;}
            i=i+j;
        }
       int num=i;
        c=0;
            while(num !=0)
            {
                y[c]=num%base2;
                num=num/base2;
                c++;
            }
            l=c;
            for (c=0;c<l;c++)
            {printf("%d",y[l-c-1]);}
}
