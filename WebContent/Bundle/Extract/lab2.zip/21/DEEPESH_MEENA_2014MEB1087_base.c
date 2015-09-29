#include<stdio.h>
#include<string.h>
int checkb1(char c[],int size,int b1);
int alltodec(char ch[],int size,int b2);
void dectobin(int num);
void dectoct(int num);
void dectohex(int num);
void main(int argc,char *argv[])
{
	//printf("\nconvert %s %s %s \n",argv[1],argv[2],argv[3]);
	int b1=atoi(argv[1]),b2=atoi(argv[2]),i,size,m,n,check,dec,num;	
	size=strlen(argv[3]);
	char s[size];
	strcpy(s,argv[3]);
	check=checkb1(s,size,b1);
	if(check==1)
	{       
		
		if(b1==b2)
		{
		printf("%s",argv[3]);
		}
	 	else
		if((b1==16||b1==2||b1==8)&&b2==10) // all to decimal
		{
                 dec=alltodec(s,size,b1);
		 printf("%d",dec);
		}
		else 
		if(b1==10 && b2==2)   // decimal to binary
		{ 
		    num=atoi(s);
	           dectobin(num);
		}
		else if((b1==16||b1==8)&&b2==2)// rest to binary
			{
				num=alltodec(s,size,b1);
				dectobin(num);
			}	
         	else  
		if(b1==10&& b2==8)      //decimal to octal
			{
				num=atoi(s);
				dectoct(num);
			}
			else
			if((b1==16||b1==2)&&b2==8)  //rest to octal
			{
			num=alltodec(s,size,b1);
			dectoct(num);
			}	
		
		else 
		if(b1==10 && b2==16)// decimal to hexa
		{
			num=atoi(s);
			dectohex(num);
		}
		else
		if((b1==2||b1==8)&&b2==16)  // rest to hexa
		{
		num=alltodec(s,size,b1);
		dectohex(num);
		}	
	}
}
                        			
 


int checkb1(char c[],int size,int b1)   // to check the condition for b1
{	

	int i,check=1;	
     switch(b1)
     {
	case 2:	
       {
        
	for(i=0;i<size;i++)
		{
			if (c[i]=='1'||c[i]=='0')
				check=1;
			else
			{
		 		check=0;
				break;
			}
		}
			if(check==0)
			printf("%d",check);
		
		break;
        }
         case 8:
	
		for(i=0;i<size;i++)
		{       
			if(c[i]>=48&&c[i]<=55)
			check=1;
			else
			{
			check=0;
			break;
			}
		}
		
         	if(check==0)
			printf("%d",check);
		break;
	
	case (10):

		for(i=0;i<size;i++)
		{       
			if(c[i]>=48&&c[i]<=57)
			check=1;
			else
			{
				check=0;break;
			}
		}
			if(check==0)
			printf("%d",check);
		break;
		
	case 16:
	
		for(i=0;i<size;i++)
		{
			if((c[i]>=48&&c[i]<=57)||(c[i]>=65&&c[i]<=70))
			check=1;
			else
			{
				check=0;break;
			}
		
		}	
			if(check==0)
			printf("%d",check);
		break;
	
}
return check;	
}

int power(int x,int y)  // function to claculate power
{
 	int i,a=1;
	if(y==0)
	return 1;
	else
	{
		for(i=0;i<y;i++)
		{
			a=a*x;
                } 
	return a;
	}
}       

int alltodec(char ch[],int size,int b1)// function to convert all to decimal
{
	int i,n=size,dec=0,p;
	for(i=0;i<n;i++)
	{
	   if(ch[i]>=65&&ch[i]<=70)
	    {
               p=ch[i]-55;
		dec=dec+p*power(b1,n-(i+1));
	    }
	  else
	    {        
		p=ch[i]-48;
		dec=dec+p*power(b1,n-(i+1));
	    }
	}
	return dec;

}

void dectobin(int num)// function to convert decimal to binary
{       
	int i,r,count=0,k;;
	k=num;
	if(num==0)
	{
	printf("%d",k);
	}
else
{				
	for(i=0;k!=0;i++)
	{       
		r=k%2;
		k=k/2;
	count++;
	}
	int out[count];
        for(i=0;num!=0;i++)
	{
		r=num%2;
		out[i]=r;
		num=num/2;
	}
	for(i=count-1;i>=0;i--)
	printf("%d",out[i]);
}
}


void dectoct(int num)// function to convert decimal to octal
{       
	int i,r,count=0,k;;
	k=num;
        if(num==0)
	{
	printf("%d",k);
	}
else
{

	for(i=0;k!=0;i++)
	{       
		r=k%8;
		k=k/8;
	count++;
	}
	int out[count];
        for(i=0;num!=0;i++)
	{
		r=num%8;
		out[i]=r;
		num=num/8;
	}
	for(i=count-1;i>=0;i--)
	printf("%d",out[i]);
}
}

void dectohex(int num)// function to convert decimal to hexa
{       
	
        int i,r,count=0,k;
	k=num;
	if(num==0)
	{
	printf("%d",k);
	}
else
{
	for(i=0;k!=0;i++)
	{       
		r=k%16;
		k=k/16;
	count++;
	}
	char out[count];
        for(i=0;num!=0;i++)
	{       
                r=num%16;
		if(r<10)
		out[i]=r+48;
		else
		{
		r=r+55;
		out[i]=r;
		}
		num=num/16;
	}

	
	for(i=count-1;i>=0;i--)
	printf("%c",out[i]);
}
}	
	


		
