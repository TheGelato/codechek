#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int decimal_to(int n,int b1);
int decimal_hexa(int j);
int to_deci(char hex[],int b1);
long po(int num,int p)
{
    long prod=1;
    int i;
    for(i=1;i<=p;i++)
    prod=prod*num;
    return prod;
}
int main(int argc, char *argv[])
{
	int b1=atoi(argv[1]),b2=atoi(argv[2]),i,len,l,ne,num,t=0;  
        len=strlen(argv[3]);
        num=atoi(argv[3]);
	if (b1==2)
	{   for(i=0;i<len;i++)
	    {
		   if(argv[3][i]!='0'&&argv[3][i]!='1')
		   {t=1;}
	    }
	if(t==0)
	{
        ne=to_deci(argv[3],b1);
		if (b2==8)
		{
			printf("%d",decimal_to(ne,b2));
		}
		else
                if(b2==2)
                {printf("%s",argv[3]);
                }
                else
		if(b2==10)
		{int l;
			l=decimal_to(ne,b2);
			if(l!=-1){
			printf("%d",to_deci(argv[3],b1));}
		}
		else
		if(b2==16)
		{
		decimal_hexa(ne);
		}
		else
		{
			printf("0");
		}	}
	else{
			printf("0");
		}	} else
	if(b1==8)
	{
		for(i=0;i<len;i++)
	    {
		   if(argv[3][i]<'0'||argv[3][i]>'7')
		   {t=1;}
	    }
	    if(t==0)
	{
		ne=to_deci(argv[3],b1);
		if (b2==2)
		{
			printf("%d",decimal_to(ne,b2));
		}
		else
                if(b2==8)
                {printf("%s",argv[3]);
                }
                else
		if(b2==10)
		{
			printf("%d",to_deci(argv[3],b1));
		}
		else
		if(b2==16)
		{
			decimal_hexa(ne);
		}
		else{
			printf("0");
		}
	}else{
		printf("0");
	}}else
	if(b1==10)
	{   for(i=0;i<len;i++)
	    {
		   if(argv[3][i]<'0'||argv[3][i]>'9')
		   {t=1;}
	    }
	    if(t==0)
	{
		if(b2==2||b2==8)
		{
		    printf("%d",decimal_to(num,b2));
		}
		else
                if(b2==10)
                {printf("%s",argv[3]);
                }
                else
		if(b2==16)
		{
			decimal_hexa(num);
		}
		else{
			printf("0");
		}}else{
			printf("0");
		}
	}else
	if (b1==16)
	{
        ne=to_deci(argv[3],b1);
		if (b2==8||b2==2)
		{   int l;
			l=decimal_to(ne,b2);
			if(l!=-1){
			printf("%d",decimal_to(ne,b2));}
		}
		else
                if(b2==16)
                {printf("%s",argv[3]);
                }
                else
		if(b2==10)
		{
			printf("%d",to_deci(argv[3],b1));
		}
		else{
			printf("0");
		}
	} 
	else{
			printf("0");
		}
	return 0;
}

int decimal_to(int n,int b2)  /* Function to convert decimal to binary.*/
{
     int rem, i=1, binary=0;
    while (n!=0)
    {
        rem=n%b2;
        n/=b2;
        binary+=rem*i;
        i*=10;
    }
    return binary;
}

int decimal_hexa(int j)
{ int i=0,bin[100];
    for(i=0;j>0;i++)
    {
        bin[i]=j%16;
        j=j/16;
    }

    i--;
    for(;i>=j;i--)
    {
        if(bin[i]==10)
                printf("A");
        else if(bin[i]==11)
                printf("B");
        else if(bin[i]==12)
                printf("C");
        else if(bin[i]==13)
                printf("D");
        else if(bin[i]==14)
                printf("E");
        else if(bin[i]==15)
                printf("F");
        else
            printf("%d",bin[i]);
    }
}
int to_deci(char hex[],int b1)
{
     int sum=0,i,j,p=0,len,numo,counter=0;
	len=strlen(hex);
    for(i=len-1;i>=0;i--)
    {
       if(hex[i]>='0'&&hex[i]<='9')
          numo=hex[i]-'0';     //the character is number in between 0 to 9
       else
       {
          if(hex[i]>='A'&&hex[i]<='F')
          numo=hex[i]-55;   //the character is either a,b,c,d,e or f 
          else
          {
              printf("0");
              return -1;
          }
       }
       sum=sum+po(b1,counter)*numo;  //according to formula given by the link
       counter++;
    } 
    return sum;
}

