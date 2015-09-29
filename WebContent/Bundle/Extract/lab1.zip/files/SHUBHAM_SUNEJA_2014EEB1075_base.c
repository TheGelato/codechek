#include<stdio.h>  //Submission bY Shubham Suneja 2014EEB1075
#include<string.h>


int l,k;

int power(int a,int b)
	{ int zz=1,pw=1;
	  for (zz=1;zz<=b;zz++)
	  {pw=pw*a;
  	     	
	   }
		return pw;
	}

main(int argc,char* argv[])
	{//char *argv[]={"convert","16","2","F"};
	
		int a=0,al,bl,j=0,b=0,r,i=0,re=0,q,m,s=0,p=0,te[100];char c[100],d[100],strp[100];
		
		
		
	
		al=strlen(argv[1]);bl=strlen(argv[2]);
		long long int pow=1;
	
		for(i=al-1;i>=0;i--)
		{a+=(argv[1][i]-48)*pow;pow=pow*10;}
		pow=1;
		for(i=bl-1;i>=0;i--)
		{b+=(argv[2][i]-48)*pow;pow=pow*10;}
	
		q=strlen(argv[3]);
		
		
		for(i=0;i<q;i++)
		{c[i]=argv[3][i];
	
	}
		//c[i+1]=0;
		
		// check
		for(i=0;i<q;i++)
		{char chh=argv[3][i];
		 if (chh>='A' && chh<='F')
				chh-=55;
			else if(chh>='0' && chh<='9')
				chh-=48;
		
		
		if (chh>=a)
		{printf("0");goto here;}}
		i=0;

		p=q-1;
		//converting non decimal base to 10
		while(p>=0)	
		{ 
		  	if (c[p]>='A' && c[p]<='F')
				c[p]-=55;
			else if(c[p]>='0' && c[p]<='9')
				c[p]-=48;
		
		r=c[p];
		r*=power(a,i);
	
		s+=r;
		i++;
		p--;
		}
		//From Base 10 to next base
		i=0;
		while(s)
	{
		re=s%b;
		
			if (re>=10&&re<=15)
				re+=55;
			else if(re>=0&&re<=9)
				re+=48;
		te[i]=re;		
		
		s/=b;
		i++;
		
	}p=i;
	for(i=p-1;i>=0;i--)
	printf("%c",te[i]);
	
	//strp[i]=(char)te[i];

	here:
	
	return 0;
							
	}
