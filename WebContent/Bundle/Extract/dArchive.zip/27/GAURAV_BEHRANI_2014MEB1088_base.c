#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    int b1=atoi(argv[1]),b2=atoi(argv[2]),i=0;
    char result[1000],ax[1000],x='A';
    int octal,decimal,hexadecimal,number=0,a,j=0;
    long long binary,coef;
   // printf("%s",&argv3);
   // char *c = argv3;
char ab;
    int ac;
switch(b1){
case 2:
    //check
    //change to decimal

   // binary=atoi(argv3);
    while(argv[3][i]!='\0'){
        ab=argv[3][i];
       // printf("%c\n",ab);
        ac=ab-'0';

            if(0<=ac&&ac<=1)
            {//printf("",ac);
              number=(number+ac)*2;
          // coef=2;
        i++;
            }
             else
            { printf("0\n");
              return 0;
               // ac=ab-'A'+10;
                //printf("%c",ab);
            }

    }
    number/=2;
    //printf("%d",number);
    break;
case 8:
    while(argv[3][i]!='\0'){
        ab=argv[3][i];
        //printf("%c",ab);
            if('0'<=ab&&ab<='7')
            {
                ac=ab-'0';
            }
             else
            { printf("0\n");
              return 0;
               // ac=ab-'A'+10;
                //printf("%c",ab);
            }
            number=(number+ac)*8;
           // coef*=8;
        i++;
    }
    number/=8;
    break;
case 10:
    while(argv[3][i]!='\0'){
        ab=argv[3][i];
        //printf("%c",ab);
            if('0'<=ab &&ab<='9')
            {
                ac=ab-'0';
            }
             else
            { printf("0\n");
              return 0;
               // ac=ab-'A'+10;
                //printf("%c",ab);
            }
            number=(number+ac)*10;
          //  coef*=10;
        i++;
    }  number/=10;  break;
case 16:
//
    while(argv[3][i]!='\0'){
        ab=argv[3][i];
        //printf("%c",ab);
        ac=ab-'0';//printf("%d\n",ac);
            if(17<=ac && ac<=22)
            {
                ac=ac-7;

            }
            else if(ac<=9)
            {}
            else
            {printf("0\n");
             return 0;}
            number=(number+ac)*16;//printf("%d\n",number);
           // coef*=16;
        i++;
    }number/=16;
    //printf("%d\n",number);
    break;
}
switch(b2){
case 2:
    //check
    //change to decimal
   binary=0;coef=1;
    while(number!=0){

                    a=number%2;number/=2;          //  printf("%d\n",a);

        binary=(binary)+a*coef;coef*=10;//printf("%ll\n",binary);
        }
            printf("%lld",binary);

       // return binary;


    break;
case 8:
       octal=0;coef=1;
    while(number!=0){

                    a=number%8;number/=8;
        octal+=coef*a;coef*=10;}
         printf("%d",octal);
    break;
case 10:
    printf("%d",number);
    break;
case 16:
    i=0;
    while(number!=0){
    a=number%16;number/=16;
    if(9<a &&a<16)
      {//x+=(a-10);
         // printf("",a);
     char z=(char)(((int)'A')+a-10);//printf("%c\n",z);
    result[i]=z;
    }//(char)(((int)'0')+i);
    if(0<=a &&a<10)
     {
         char z=(char)(((int)'0')+a);//printf("%c\n",z);
      //char z=char (int('0')+a);
         result[i]=z;}
        i++;
    }
    result[i]=0;i--;
    for(;i>=0;i--){
        ax[j]=result[i];j++;
    }
    ax[j]=0;
    printf("%s",ax);
    break;

}
printf("\n");

}
