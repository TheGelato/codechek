#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
	int i=0,w=0,p=0,base1=0,base2=0,Z=1,o=0;	
	w=strlen(argv[3]);
        base1=atoi(argv[1]);
        base2=atoi(argv[2]);
	unsigned long long int x=0,y=0;

	if(base1==2)
	{
		for(i=0;i<w;i++)
			if(argv[3][i]=='1'||argv[3][i]=='0')
			{
				Z=1;
				for(o=0;o<w-i-1;o++)
					Z=Z*base1;
				x=x+(argv[3][i]-48)*Z;
			}
			else
			{	printf("\n0\n");		
				return 0;	
			}
	}
	
	else if(base1==8)
	{
		for(i=0;i<w;i++)
			if(argv[3][i]<56&&argv[3][i]>47)
			{
				Z=1;
				for(o=0;o<w-i-1;o++)
					Z=Z*base1;
				x=x+(argv[3][i]-48)*Z;
			}
			else
			{	printf("\n0\n");		
				return 0;	
			}		
	}

	else if(base1==16)
	{
		for(i=0;i<w;i++)
			if(argv[3][i]<58&&argv[3][i]>47)
			{
				Z=1;
				for(o=0;o<w-i-1;o++)
					Z=Z*base1;
				x=x+(argv[3][i]-48)*Z;
			}

			else if(argv[3][i]<71&&argv[3][i]>64)
			{
				Z=1;
				for(o=0;o<w-i-1;o++)
					Z=Z*base1;
				x=x+(argv[3][i]-55)*Z;
			}
			else
			{	printf("\n0\n");		
				return 0;	
	                }
	}

	else if(base1==10)
	{
		for(i=0;i<w;i++)
			if(argv[3][i]<58&&argv[3][i]>47)	
			{
				Z=1;
				for(o=0;o<w-i-1;o++)
					Z=Z*base1;
				x=x+(argv[3][i]-48)*Z;
			}
			else
			{	printf("\n0\n");		
				return 0;	
			}
	}

	else
	{
		printf("\n0\n");
		return 0;
	}

	if(base2==10)
	{
		printf("\n%llu\n",x);
	}

	else if(base2==2)
	{
		y=x;
		for(w=0;x>0;w++,x=x/2);
		char D[w-1];
		for(i=0;i<w;i++)
		{
			p=y%2;
			D[w-i-1]=p+48;
			y=y/2;
		}
		for(i=0;i<w;i++)
			putchar(D[i]);
			printf("\n\n");
		return 0;
	}

	else if(base2==8)
	{
		y=x;
		for(w=0;x>0;w++,x=x/8);
		char D[w-1];
		for(i=0;i<w;i++)
		{
			p=y%8;
			D[w-i-1]=p+48;
			y=y/8;
		}
		for(i=0;i<w;i++)
			putchar(D[i]);
			printf("\n\n");
		return 0;
	}

	else if(base2==16)
	{
		y=x;
		for(w=0;x>0;w++,x=x/16);
		char D[w-1];
		for(i=0;i<w;i++)
		{
			p=y%16;
			if(p<10)
				D[w-i-1]=p+48;
			else
				D[w-i-1]=p+55;
			y=y/16;
		}
		for(i=0;i<w;i++)
			putchar(D[i]);
			printf("\n\n");
		return 0;
	}
	
	else
	{	
		printf("\n0\n");		
		return 0;	
	}
}
