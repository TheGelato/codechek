#include<stdio.h>
#include<string.h>
#include<unistd.h>
 int main(int argc,char *argv[]){
 int i,l,reminder,decimal=0,reminder1,octal=0,j=1,k=1,m,n=0,s=0,h=0,t=1,u,v,m1,m2,m3,m4,m5,s1=0,m6,e=1,g=1,q=1,t1=1,n1,n2=0,n3,j1=1,j2=1,
decimal2=0,decimal3=0,decimal4=0,decimal5=0,decimal1=0,reminder2,reminder3,reminder4,reminder5,p1,s2,t2,m7,t3=0;
char A[20];
int B[60],C[60];
int b1=atoi(argv[1]);
int b2=atoi(argv[2]);
int num1=atoi(argv[3]);int p=1;
int num=num1;
strcpy(A,argv[3]);
l=strlen(A);int D[l];
for (i=0;i<l;i++)
{
	int p=A[i];
	if (p>=48 && p<=57)
  {
		p=p-48;
  }
else if (p>=65 && p<=70)
	{
	p=p-55;
	}
	D[i]=p;
}
for (i=0;i<l;i++)
{
	if (D[i]>=0 && D[i]<=b1-1)
	{
	continue;
	}
    else{
      h=1;
     printf("0");
      break;
	}
}


if (h==0)
{


     num=num1;

     if(b1==2&&b2==10){
		  for(i=0;i<l;i++){
				   reminder=num%10;
	    			  decimal=decimal+reminder*j;
				  j=j*b1;
				  num=num/10;
				  }
		printf("%d",decimal);
		}

else if(b1==2&&b2==8){ num=num1;
		for(i=0;i<l;i++){
				reminder1=num%10;
				decimal1=decimal1+(reminder1)*e;
				e=e*2;
				num=num/10;
				}
      		while((decimal1)!=0){
      	        B[n]=(decimal1)%8;
                decimal1=(decimal1)/8;
		n++;
				}
       for(m=n-1;m>=0;m--)
        printf("%d",B[m]);
		}

//2t0 16 

else if(b1==2&&b2==16){  num=num1;
	//for(i=0;i<l;i++){
for(i=0;num!=0;i++){
	reminder2=num%10;
	decimal2=decimal2+(reminder2)*g;
	g=g*2;
	num=num/10;
		}
		//printf("%d",decimal2);
                num=decimal2;
		while(num!=0){
	        if((num%16)<10){
		B[p++]=(num%16)+48;
		num/=16;}
	         else
		{B[p++]=(num%16)+55;
		num/=16;
                }}
	        for(u=p-1;u>0;u--)
   		{putchar(B[u]);}
}
//8 to 2
else if(b1==8&&b2==2){  num=num1;
		for(i=0;i<l;i++){
		reminder3=num%10;
		decimal3=decimal3+(reminder3)*q;
		q=q*8;
		num=num/10;}
		
while((decimal3)!=0){
   		B[v]=(decimal3)%2;
		decimal3=(decimal3)/2;
		v++;
		}
         for(m1=v-1;m1>=0;m1--)
 	printf("%d",B[m1]);}
//8to10
else if(b1==8&&b2==10){  num=num1;
		for(i=0;i<l;i++){
		reminder4=num%10;
		decimal4=decimal4+(reminder4)*(j1);
		(j1)=(j1)*8;
		num=num/10;}
		printf("%d",decimal4);}
//8 t0 16
else if(b1==8&&b2==16){ num=num1;
		for(i=0;i<l;i++){
		reminder5=num%10;
		decimal5=decimal5+(reminder5)*(j2);
		(j2)=(j2)*8;
		num=num/10;}
		//printf("%d\n",decimal);}
		i=0;
		while((decimal5)!=0)
                {
	           if(((decimal5)%16)<10)
		B[i++]=((decimal5)%16)+48;
	         else
		B[i++]=((decimal5)%16)+55;
		(decimal5)/=16;
                }
	        for(m2=0;m2<i;m2++)
   		printf("%c",B[i-m2-1]);}
//10 to 2

else if(b1==10&&b2==2){ num=num1;
		while(num!=0){
   		B[n1]=num%2;
		num=num/2;
		n1++;
		}
         for(m3=n1-1;m3>=0;m3--)
 	printf("%d",B[m3]);}

//10 to 8
else if(b1==10&&b2==8){ num=num1;
		while(num!=0){
          	B[n2]=num%8;
          	num=num/8;
		n2++;
                           }
         for(m4=n2-1;m4>=0;m4--)
 	printf("%d",B[m4]);}
//10 t0 16

else if(b1==10&&b2==16){ num=num1;
		while(num!=0)
                {
	        if((num%16)<10)
		B[p1++]=(num%16)+48;
	         else
		B[p1++]=(num%16)+55;
		num/=16;
                }
	        for(m5=p1-1;m5>0;m5--)
   		putchar(B[m5]);
                      }
//hexa to 10
 else if(b1==16&&b2==10)
                      {int a[l];
		for(i=l-1;i>=0;i--)
                          {
			if (A[i]>='0'&&A[i]<='9')
			a[i]=(A[i]-'0');
	                else if(A[i]>='A'&&A[i]<='F')
			a[i]=(A[i]-55);
                           s=s+a[i]*t;
			   t=t*16;
                        

                        }
                    printf("%d",s);
                   }
//hexa to binary
else if(b1==16&&b2==2)
                      {int a[l];
		for(i=l-1;i>=0;i--)
                          {
			if (A[i]>='0'&&A[i]<='9')
			a[i]=(A[i]-'0');
	                else if(A[i]>='A'&&A[i]<='F')
			a[i]=(A[i]-55);
                           s1=s1+a[i]*t1;
			   t1=(t1)*16;}
		t1=1;
                //printf("%d\n",s1);
                while(s1!=0){
   		int z=(s1)%2;
		s1=s1/2;
                n2=z*(t1)+n2;
                t1=t1*10;
		}
         
 	printf("%d",n2);}

//HEXA TO OCTAL
else if(b1==16&&b2==8)
      		{int a[l];
		for(i=l-1;i>=0;i--)
                          {
			if (A[i]>='0'&&A[i]<='9')
			a[i]=(A[i]-'0');
	                else if(A[i]>='A'&&A[i]<='F')
			a[i]=(A[i]-55);
                           s2=s2+a[i]*t2;
			   t2=(t2)*16;}
			m7=1;
			while(s2!=0){
          		int z1=(s2%8);
			s2=s2/8;
			t3=z1*(m7)+t3;
			m7=m7*10;}
			printf("%d",t3);
			
			
}}

}
