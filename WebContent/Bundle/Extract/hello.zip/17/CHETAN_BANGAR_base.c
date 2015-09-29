#include<stdio.h>
#include<string.h>
#include<unistd.h>
void decimaltodecimal(int,char *);
void decimaltohexa(int,char *);
void decimaltobinary(int,char *);
void decimaltooctal(int,char *);
void octaltooctal(int,char *);
void octaltohexa(int,char *);
void octaltobinary(int,char *);
void octaltodecimal(int,char *);
void binarytobinary(int,char *);
void binaryhexa(int,char *);
void binarytooctal(int,char *);
void binarytodecimal(int,char *);
void hexatohexa(char *);
void hexatobinary(char *);
void hexatooctal(char *);
void hexatodecimal(char *);
int main(int argc,char *argv[])
{int b1=atoi(argv[1]);
int b2=atoi(argv[2]);
if(b1==16 && b2==10)
{char hexadecimal[100];
strcpy(hexadecimal,argv[3]);
 hexatodecimal(hexadecimal);
}
else if(b1==16 && b2==8)
{ char hexaoctal[100];
strcpy(hexaoctal,argv[3]);
   hexatooctal(hexaoctal);
}
else if(b1==16 && b2==2)
{char hexabinary[100];
strcpy(hexabinary,argv[3]);
hexatobinary(hexabinary);
}
else if(b1==16 && b2==16)
{char hexahexa[100];
strcpy(hexahexa,argv[3]);
hexatohexa(hexahexa);
}
int num=atoi(argv[3]);
if(b1==2 && b2==10)
{char checker[100];
strcpy(checker,argv[3]);
binarytodecimal(num,checker);
}
if(b1==2 && b2==8)
{char checker[100];
strcpy(checker,argv[3]);
binarytooctal(num,checker);
}
else if(b1==2 && b2==16)
{char checker[100];
strcpy(checker,argv[3]);
binaryhexa(num,checker);}

else if(b1==2 && b2==2)
{char checker[100];
strcpy(checker,argv[3]);
binarytobinary(num,checker);
}
else if(b1==8 && b2==10)
{char checker[100];
strcpy(checker,argv[3]);
octaltodecimal(num,checker);
}
else if(b1==8 && b2==2)
{char checker[100];
strcpy(checker,argv[3]);
octaltobinary(num,checker);}
else if(b1==8 && b2==16)
{char checker[100];
strcpy(checker,argv[3]);
octaltohexa(num,checker);
}
else if(b1==8 && b2==8)
{char checker[100];
strcpy(checker,argv[3]);
octaltooctal(num,checker);
}
else if(b1==10 && b2==8)
{char checker[100];
strcpy(checker,argv[3]);
decimaltooctal(num,checker);
}
else if(b1==10 && b2==2)
{char checker[100];
strcpy(checker,argv[3]);
decimaltobinary(num,checker);
}
else if(b1==10 && b2==16)
{char checker[100];
strcpy(checker,argv[3]);
decimaltohexa(num,checker);
}
else if(b1==10 && b2==10)
{char checker[100];
strcpy(checker,argv[3]);
decimaltodecimal(num,checker);
}
}
void hexatodecimal(char hexadecimal[])//Conversion of hexadecimal to decimal
{int sum=0,i,j=1,add,length,counting=0;
        length=strlen(hexadecimal);
 for(i=length-1;i>=0;i--)
    {if(hexadecimal[i]>='0'&&hexadecimal[i]<='9')
          add=hexadecimal[i]-'0';     
        else  if(hexadecimal[i]>='A'&&hexadecimal[i]<='F')
          add=hexadecimal[i]-55;  
else if(hexadecimal[i]>='a'&&hexadecimal[i]<='f')
         add=hexadecimal[i]-87;
    else
counting++;
sum=sum+(j*add);
       j=j*16;
}
if(counting==0)
printf("%d\n",sum);
else
printf("0\n"); 
}
void hexatooctal(char hexadecimal[])//Conversion of hexadecimal to octal
{int sum=0,i=0,j=1,remainder,add,p,length,counting=0;
        length=strlen(hexadecimal);
int octal[100];
for(i=length-1;i>=0;i--) 
  {if(hexadecimal[i]>='0'&&hexadecimal[i]<='9')
          add=hexadecimal[i]-'0';     
           else  if(hexadecimal[i]>='A'&&hexadecimal[i]<='F')
          add=hexadecimal[i]-55;  
else if(hexadecimal[i]>='a'&&hexadecimal[i]<='f')
         add=hexadecimal[i]-87;
    else
counting++;
sum=sum+(j*add);
       j=j*16;}
if(counting==0)
{int i=0;
while(sum!=0)
{remainder=sum%8;
octal[i]=remainder;
sum=sum/8;
i++;}
for(p=i-1;p>=0;p--)
{if(p==0)
printf("%d\n",octal[p]);
else
printf("%d",octal[p]);
}
}
else
printf("0\n");
}
void hexatobinary(char hexadecimal[])//conversion of hexadecimal to binary
{int sum=0,i,j=1,add,length,counting=0;
        length=strlen(hexadecimal);
 for(i=length-1;i>=0;i--)
    {if(hexadecimal[i]>='0'&&hexadecimal[i]<='9')
          add=hexadecimal[i]-'0';     
        else  if(hexadecimal[i]>='A'&&hexadecimal[i]<='F')
          add=hexadecimal[i]-55;  
else if(hexadecimal[i]>='a'&&hexadecimal[i]<='f')
         add=hexadecimal[i]-87;
    else
counting++;
sum=sum+(j*add);
       j=j*16;
}
if(counting==0)
{int i=0;
int p;
int remainder,binary[100];
while(sum!=0)
{remainder=sum%2;
sum=sum/2;
binary[i]=remainder;
i++;
}
for(p=i-1;p>=0;p--)
{if(p==0)
printf("%d\n",binary[p]);
else
printf("%d",binary[p]);
}
}
else
printf("0\n");
}
void hexatohexa(char hexahexa[])//conversion of hexa to hexa
{int c,length,i,counter=0;

length=strlen(hexahexa);
for(i=length-1;i>=0;i--)
{
if((hexahexa[i]>='0' && hexahexa[i]<='9')||(hexahexa[i]>='A' && hexahexa[i]<='F')||(hexahexa[i]>='a'&&hexahexa[i]<='f'))
c=1;
else
counter++;
}
if(counter>0)
printf("0\n");
else
printf("%s\n",hexahexa);
}
void binarytodecimal(int num,char checker[])//conversion of binary to decimal
{int d=0,c=0,i,length;
length=strlen(checker);
for(i=0;i<=(length-1);i++)
{
if(checker[i]>='0'&&checker[i]<='1')
c++;
else
d++;
}
if(d>0)
printf("0\n");
else
{int i=0,remainder,decimal=0,p,j=1;
while(num!=0)
{
remainder=num%10;
num=num/10;
decimal=decimal+remainder*j;
j=j*2;
}
printf("%d\n",decimal);
}
}
void binarytooctal(int num,char checker[])//conversion of binary to octal
{int d=0,c=0,i,length,octal[100];
length=strlen(checker);
for(i=length-1;i>=0;i--)
{if((checker[i]>='0')&&(checker[i]<='1'))
d++;
else
c++;
}
if(c>0)
{printf("0\n");
}
else
{int remainder,decimal=0,p=0,j=1;
while(num!=0)
{remainder=num%10;
num=num/10;
decimal=decimal+remainder*j;
j=j*2;
}
int i=0,rem;
while(decimal!=0)
{rem=decimal%8;
octal[i]=rem;
decimal=decimal/8;
i++;}
for(p=i-1;p>=0;p--)
{if(p==0)
printf("%d\n",octal[p]);
else
printf("%d",octal[p]);
}
}
}
void binaryhexa(int num,char checker[])//conversion of binary to hexadecimal
{int d=0,c=0,i,length,octal[100];
length=strlen(checker);
for(i=length-1;i>=0;i--)
{if((checker[i]>='0')&&(checker[i]<='1'))
d++;
else
c++;
}
if(c>0)
{printf("0\n");
}
else
{int remainder,decimal=0,p=0,j=1;
while(num!=0)
{remainder=num%10;
num=num/10;
decimal=decimal+remainder*j;
j=j*2;
}
int i=0,temp;
char hexadecimalNumber[100];
while(decimal!=0){
         temp=decimal%16;
      if(temp<10)
       temp =temp+48;
      else
         temp=temp+55;
      hexadecimalNumber[i]= temp;
      decimal=decimal/16;
i++;
  }
for(p=i-1;p>=0;p--)
{if(p==0)
printf("%c\n",hexadecimalNumber[p]);
else
printf("%c",hexadecimalNumber[p]);}
}
}
void binarytobinary(int num,char checker[])//conversion of binary to binary
{int d=0,c=0,i,length;
length=strlen(checker);
for(i=0;i<=(length-1);i++)
{
if(checker[i]>='0'&&checker[i]<='1')
c++;
else
d++;
}
if(d>0)
printf("0\n");
else
{printf("%d\n",num);}
}
void octaltodecimal(int num,char checker[])//conversion of octal to decimal
{int d=0,c=0,i,length;
length=strlen(checker);
for(i=0;i<=(length-1);i++)
{
if(checker[i]>='0'&&checker[i]<='7')
c++;
else
d++;
}
if(d>0)
printf("0\n");
else
{long int decimal=0;
    int i=0,j=1;
while(num!=0)
{decimal=decimal+(num%10)*j;
 num=num/10;
 j=j*8;}
 printf("%ld\n",decimal);}
}
void octaltobinary(int num,char checker[])//conversion of octal to binary
{int d=0,c=0,i,length;
int k=0,binaryNumber[100],p=0;
int decimal=0;
length=strlen(checker);
for(i=0;i<=(length-1);i++)
{
if(checker[i]>='0'&&checker[i]<='7')
c++;
else
d++;
}
if(d>0)
printf("0\n");
else
{int j=1;
while(num!=0)
{decimal=decimal+(num%10)*j;
 num=num/10;
 j=j*8;}
 }
int q=decimal;
while(q!=0)
{binaryNumber[k]=q%2;
 q=q/2;
 k++;}
for(p=k-1;p>=0;p--)
{if(p==0)
printf("%d\n",binaryNumber[p]);
else
printf("%d",binaryNumber[p]);}
}
void octaltohexa(int num,char checker[])//octal to hexadecimal conversion
{int d=0,c=0,i,length;
length=strlen(checker);
for(i=0;i<=(length-1);i++)
{
if(checker[i]>='0'&&checker[i]<='7')
c++;
else
d++;
}
if(d>0)
printf("0\n");
else
{long int decimal=0;
    int i=0,j=1,p=0;
while(num!=0)
{decimal=decimal+(num%10)*j;
 num=num/10;
 j=j*8;}
int k=0,temp;
char hexadecimalNumber[100];
while(decimal!=0){
         temp=decimal%16;
      if(temp<10)
       temp=temp+48;
      else
         temp=temp+55;
      hexadecimalNumber[k]=temp;
      decimal=decimal/16;
k++;
  }
for(p=k-1;p>=0;p--)
{if(p==0)
printf("%c\n",hexadecimalNumber[p]);
else
printf("%c",hexadecimalNumber[p]);}
}
}
void octaltooctal(int num,char checker[])//conversion of octal to octal
{int d=0,c=0,i,length;
length=strlen(checker);
for(i=0;i<=(length-1);i++)
{
if(checker[i]>='0'&&checker[i]<='7')
c++;
else
d++;
}
if(d>0)
printf("0\n");
else
{printf("%d\n",num);}
}
void decimaltooctal(int num,char checker[])//conversion of decimaltooctal
{int d=0,c=0,i,length;
length=strlen(checker);
for(i=0;i<=(length-1);i++)
{
if(checker[i]>='0'&&checker[i]<='9')
c++;
else
d++;
}
if(d>0)
printf("0\n");
else
{int i=0,rem,p=0;
int octal[100];
while(num!=0)
{rem=num%8;
octal[i]=rem;
num=num/8;
i++;}
for(p=i-1;p>=0;p--)
{if(p==0)
printf("%d\n",octal[p]);
else
printf("%d",octal[p]);
}
}
}
void decimaltobinary(int num,char checker[])//conversion of decimal to binary
{int d=0,c=0,k=0,i,length,p=0;
int binaryNumber[100];
length=strlen(checker);
for(i=0;i<=(length-1);i++)
{
if(checker[i]>='0'&&checker[i]<='9')
c++;
else
d++;
}
if(d>0)
printf("0\n");
else
{while(num!=0)
{binaryNumber[k]=num%2;
 num=num/2;
 k++;}
for(p=k-1;p>=0;p--)
{if(p==0)
printf("%d\n",binaryNumber[p]);
else
printf("%d",binaryNumber[p]);}
}
}
void decimaltohexa(int num,char checker[])//conversion of decimal to hexadecimal
{int d=0,c=0,k=0,i,length,p=0;
length=strlen(checker);
for(i=0;i<=(length-1);i++)
{
if(checker[i]>='0'&&checker[i]<='9')
c++;
else
d++;
}
if(d>0)
printf("0\n");
else
{int temp;
char hexadecimalNumber[100];
while(num!=0){
         temp=num%16;
      if(temp<10)
       temp =temp+48;
      else
         temp=temp+55;
      hexadecimalNumber[k]= temp;
      num=num/16;
k++;
  }
for(p=k-1;p>=0;p--)
{if(p==0)
printf("%c\n",hexadecimalNumber[p]);
else
printf("%c",hexadecimalNumber[p]);}
}
}
void decimaltodecimal(int num,char checker[])//conversion of decimal to decimal
{int d=0,c=0,i,length;
length=strlen(checker);
for(i=0;i<=(length-1);i++)
{
if(checker[i]>='0'&&checker[i]<='9')
c++;
else
d++;
}
if(d>0)
printf("0\n");
else
{printf("%d\n",num);}
}
