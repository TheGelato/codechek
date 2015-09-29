# include <stdio.h>
main(int argc, char *argv[])
{
	int b1,b2,A=10,B=11,C=12,D=13,E=14,F=15,hexadecimal,count=0,temp,m[10];
	long int c=0,f,i,a1=0,ans=0,a2,a4,a5,a6,a7=1,a8;
	long int bN[100],dN,hN=0,j=1,r,a3=1;
	int e[50],h[100];
	char *d,g[100];
	if(argv[1][0] == '2')
		b1 = 2;
	else if(argv[1][0] == '8')
		b1 = 8;
	else if(argv[1][0] == '1' && argv[1][1] == '0')
		b1 = 10;
	else if(argv[1][0] == '1' && argv[1][1] == '6')
		b1 = 16;
	if(argv[2][0] == '2')
		b2 = 2;
	else if(argv[2][0] == '8')
		b2 = 8;
	else if(argv[2][0] == '1' && argv[2][1] == '0')
		b2 = 10;
	else if(argv[2][0] == '1' && argv[2][1] == '6')
		b2 = 16;
	d = argv[3];
	while(2)
	{
		if(d[c]=='\0')
		{
			d[c] = argv[3][c];
			f = c;
			break;
		}
		c++;
	}
	for (a1=0;a1<f;a1++)
	{
		e[a1]=(int)(d[a1])-48;
	}




if(b1==2)
{
	int fl = 1;
	int kkl = 0;
	for(kkl = 0; kkl<f; kkl++)
	{
	if(d[kkl]!= '1' && d[kkl]!= '0')		{fl = 0; break;}
	}
	if(fl == 1)
	{
	if(b2==2)
{printf("%s\n",d);}
	else if(b2==8)
	{
		ans=e[c-1];
		a2=2;
		for(a6=c-2;a6>=0;a6--)
		{
			ans=ans+e[a6]*a2;
			a2=a2*2;
		}
		a4=0;
		
		while(ans>=8)
		{
			h[a4]=ans%8;
			ans=ans/8;
			a4++;
		}
		h[a4]=ans;
		for(a5=a4;a5>=0;a5--)
		{
			printf("%i",h[a5]);
		}
		printf("\n");
	}
		else if(b2==10)
		{
			ans=e[c-1];
		a2=2;
		for(a6=c-2;a6>=0;a6--)
		{
			ans=ans+e[a6]*a2;
			a2=a2*2;
		}
		a4=0;
		
		while(ans>0)
		{
			h[a4]=ans%10;
			ans=ans/10;
			a4++;
		}
		h[a4]=ans;
		for(a5=a4-1;a5>=0;a5--)
		{
			printf("%i",h[a5]);
		}
		printf("\n");
		}
			else if(b2==16)
			{
				a2=1;
		a3=0;
		for(a4=c-1;a4>=0;a4--)
		{
			a3=a3+e[a4]*a2;
			a2=a2*10;
		}
    a8=a3;
    while(a8!=0){
    r=a8%10;
    hN=hN+r*j;
        j=j*2;
        a8=a8/10;
      }
    printf("%lX",hN);
    printf("\n");
			}
}
else printf("0\n");}



else if(b1==8)
{
	int fl = 1;
	int kkl = 0;
	for(kkl = 0; kkl<f; kkl++)
	{
		if(d[i] != '1' && d[i] != '2' && d[i] != '3' && d[i] != '4' && d[i] != '5' && d[i] != '6' && d[i] != '7' && d[i] != '0')
		{fl = 0; break;}
	}
	if(fl == 1){
		if(b2==2)
{
	ans=e[c-1];
		a2=8;
		for(a5=c-2;a5>=0;a5--)
		{
			ans=ans+e[a5]*a2;
			a2=a2*8;
		}
		a6=0;
		while(ans>0)
		{
			g[a6]=ans%2;
			ans=ans/2;
			a6++;
		}
		
		for(a7=a6-1;a7>=0;a7--)
		{
			printf("%i",g[a7]);
		}
		printf("\n");
}
	else if(b2==8)
	{printf("%s\n",d);}
		else if(b2==10)
		{
			ans=e[c-1];
		a2=8;
		for(a5=c-2;a5>=0;a5--)
		{
			ans=ans+e[a5]*a2;
			a2=a2*8;
		}
		printf("%i\n",ans);
		}
			else if(b2==16)
			{
				ans=e[c-1];
		a2=8;
		for(a5=c-2;a5>=0;a5--)
		{
			ans=ans+e[a5]*a2;
			a2=a2*8;
		}

		while(ans>0)
 {

       m[count]=ans%16;

       ans=ans/16;

       count++;

  }
 for(i=count-1;i>=0;i--)
 {

       if(m[i]>9)
      {

     printf("%c",m[i]+55);

       }
      else
      {

      printf("%d\n",m[i]);

       }
 }
			}
}
else printf("0\n");}


else if(b1==10)
{
	int fl = 1;
	int kkl = 0;
	for(kkl = 0; kkl<f; kkl++)
	{
		if(d[kkl] != '1' && d[kkl] != '2' && d[kkl] != '3' && d[kkl] != '4' && d[kkl] != '5' && d[kkl] != '6' && d[kkl] != '7' && d[kkl] != '8' && d[kkl] != '9' && d[kkl] != '0')
		{fl = 0; break;}
	}
	if(fl == 1){
	if(b2==2)
{
	a2=1;
		a3=0;
		for(a4=c-1;a4>=0;a4--)
		{
			a3=a3+e[a4]*a2;
			a2=a2*10;
		}
    r= a3;
    while(r!=0){
         bN[i++]= r % 2;
         r= r/ 2;
    }
    for(j=i-1;j>=0;j--)

         printf("%d",bN[j]);
     printf("\n");
}
	else if(b2==8)
	{
		a2=1;
		a3=0;
		for(a4=c-1;a4>=0;a4--)
		{
			a3=a3+e[a4]*a2;
			a2=a2*10;
		}
		a6=0;
		while(a3>0)
		{
			g[a6]=a3%8;
			a3=a3/8;
			a6++;
		}
		a7=a6-1;
		for(a7=a6;a7>=0;a7--)
		{
			printf("%i",g[a7]);
		}
		printf("\n");
	}
		else if(b2==10)
		{printf("%s\n",d);}
			else if(b2==16)
			{
				a2=1;
		a3=0;
		for(a4=c-1;a4>=0;a4--)
		{
			a3=a3+e[a4]*a2;
			a2=a2*10;
		}
		temp=a3;

  while(temp>0)
 {

       m[count]=temp%16;

       temp=temp/16;

       count++;

  }
 for(i=count-1;i>=0;i--)
 {

       if(m[i]>9)
      {

     printf("%c",m[i]+55);

       }
      else
      {

      printf("%d",m[i]);

       }
 }printf("\n");
			}
}
else printf("0\n");}
else if(b1==16)
{
	int fl = 1;
	int kkl = 0;
	for(kkl = 0; kkl<f; kkl++)
	{
		if(d[kkl] != '1' && d[kkl] != '2' && d[kkl] != '3' && d[kkl] != '4' && d[kkl] != '5' && d[kkl] != '6' && d[kkl] != '7' && d[kkl] != '8' && d[kkl] != '9' && d[kkl] != '0' && d[kkl] != 'F' && d[kkl] != 'E' && d[kkl] != 'D' && d[kkl] != 'C' && d[kkl] != 'B' && d[kkl] != 'A')
		{fl = 0; break;}
	}
	if(fl == 1){
	if(b2==2)
{
	   a2=1;
        a3=0;
        for(a4=c-1;a4>=0;a4--)
        {
            a3=a3+e[a4]*a2;
            a2=a2*10;
        }
  a6 = 0;
 i =f;
 j=0;
 while(i!=0)
 {
  a5 = d[j];
  if(('0'<=a5&&a5<='9'))
  {
   a6=a6*16;
   a6=a6+(a5-'0');
   }
  if(('A'<=a5&&a5&&a5<='Z'))
  {
   a6=a6*16;
   a6=a6+(a5-'7');
  }
  i--;
  j++;
 }
    r= a6;
    while(r!=0){
         bN[i++]= r % 2;
         r= r/ 2;
    }
    for(j=i-1;j>=0;j--)

         printf("%d",bN[j]);
     printf("\n");
}
	else if(b2==8)
	{
		a2=1;
		a3=0;
		for(a4=c-1;a4>=0;a4--)
		{
			a3=a3+e[a4]*a2;
			a2=a2*10;
		}
  a6 = 0;
 i =f;
 j=0;
 while(i!=0)
 {
  a5 = d[j];
  if(('0'<=a5&&a5<='9'))
  {
   a6=a6*16;
   a6=a6+(a5-'0');
   }
  if(('A'<=a5&&a5&&a5<='Z'))
  {
   a6=a6*16;
   a6=a6+(a5-'7');
  }
  i--;
  j++;
 }
    a8=0;
    while(a6>0)
    {
      g[a8]=a6%8;
      a6=a6/8;
      a8++;
    }
    for(a7=a8-1;a7>=0;a7--)
    {
      printf("%i",g[a7]);
    }
    printf("\n");
	}
		else if(b2==10)
		{
				a2=1;
		a3=0;
		for(a4=c-1;a4>=0;a4--)
		{
			a3=a3+e[a4]*a2;
			a2=a2*10;
		}
  a6 = 0;
 i =f;
 j=0;
 while(i!=0)
 {
  a5 = d[j];
  if(('0'<=a5&&a5<='9'))
  {
   a6=a6*16;
   a6=a6+(a5-'0');
   }
  if(('A'<=a5&&a5&&a5<='Z'))
  {
   a6=a6*16;
   a6=a6+(a5-'7');
  }
  i--;
  j++;
 }
 printf("%d\n",a6);
		}
			else if(b2==16)
			{printf("%s\n",d);}
}else printf("0\n");}
} // end of main