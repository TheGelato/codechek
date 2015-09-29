#include<stdio.h>
#include<string.h>
int p(int a,int b)
	{
          int i,t;
           t=a;
            if(b!=0){
	   for(i=2;i<=b;i++)
	{
            a=a*t;   

	}
            return a;
	}
	    else
	{
	   return 1;
	}

	}
	   int cheak(char a[],int b1)
	{
	   if(b1!=16)	
	{
              int r,n,i,t=1,p=0;
                 r=strlen(a);
	         char binary[r];
	        strcpy(binary,a);
 	     n=strlen(binary);
	   for(i=0;i<n;i++)
	{
  if((binary[i]-48)>=0 && (binary[i]<(b1+48))){
    p=1;
} else{
t=2;
}
}
if(t==1){
 return 1;
}
else if(t==2){
 return 0;
}
 }else{
	 
	 int n,i,t=0,p=0;
	
	 n=strlen(a);
	 for(i=0;i<n;i++)
	{
         if((a[i]>=48 && a[i]<=58) || (a[i]>=65 && a[i]<=70)) 
	{
         t=1; 	
	}
	 else
	{
	 p=1;
	}
	}
	 if(p==1)
	{
	 return 0;
	}
	else
	{
         return 1;	
	}
	}
}
int convert(int b1,int b2,char num[])
	{
	int n,i,t=0,rem=0,l=0,de,j,dec=0;
	if(b2==10){
        char v;
	char bin[100];
	strcpy(bin,num);
	n=strlen(bin);
          t=n-1;
	for(i=0;i<n;i++)
	{
	if(bin[i]>=48 && bin[i]<=58)
         { v=(bin[i]-48);
           
          dec=dec+v*(p(b1,t));
           t=t-1;
         }
	else
	{
	 v=(bin[i]-55);
	dec=dec+v*(p(b1,t));
           t=t-1;
           
	}
}
	return dec;
}     else   {
	de=atoi(num);
	int bin[100];
        char a[100];
	for(j=0;j<100;j++)
	{
                rem=de%b2;
          if(rem<=9){
 		 a[j]=rem+48;
 		de=de/b2;
	}else{
               a[j]=rem+55;
	       de=de/b2;
	}		
                if(de==0)
	{break;
	}  	
	}n=j;
	for(i=n;i>=0;i--)
     	{ printf("%c",(a[i]));
	 
	  } 
	 l=atoi(a);
         
}
return l;
}
	
int main(int argc,char *argv[])
	{
	  int j,n,d,e,c,b1=atoi(argv[1]),b2=atoi(argv[2]),i;
	  char u[100];
	  c=cheak(argv[3],b1);
	  if(c==1)
	{
	if(b1==b2){
	printf("%s",argv[3]);
	}
    else if(b2==10){
	  e=convert(b1,b2,argv[3]);
	printf("%d",e);	
	 }
	  else if(b2!=10 && b1==10)
	{
	  e=convert(b1,b2,argv[3]);
	 
	}
	 else if(b2!=10 && b1!=10)
	{
           e=convert(b1,10,argv[3]);
	 for(i=0;e!=0;i++)
	{
	   u[i]=(e%10)+48;
           e=e/10;
          if(e==0){break;}
	}n=i;
char t[100];
	for(j=n;j>=0;j--)
	{
          t[j]=u[n-j] 	;
	}
	  
	   d=convert(10,b2,t);
	
	}
	
}else if(c==0){
   printf("%d",c);
}
}
