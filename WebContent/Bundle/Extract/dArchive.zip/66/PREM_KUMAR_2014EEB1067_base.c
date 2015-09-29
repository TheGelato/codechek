#include<stdio.h>
int power(int p,int q){
int w=1,i=0;
for(i=0;i<q;i++)
w=w*p;
if(q==0)
w=1;
return w;
}
int main(int argc, char *argv[])
{int i=0,l=0;
unsigned long long int m=0,n=0;
while(argv[3][l]!='\0')
l++;
if(argv[1][0]=='2'&&argv[1][1]=='\0')
for(i=0;i<l;i++)
if(argv[3][i]=='1'||argv[3][i]=='0')
n=n+(argv[3][i]-48)*power(2,l-i-1);
else{printf("0");
return 0;
}
else if(argv[1][0]=='8'&&argv[1][1]=='\0')
for(i=0;i<l;i++)
if(argv[3][i]<56&&argv[3][i]>47)
n=n+(argv[3][i]-48)*power(8,l-i-1);
else{printf("0");
return 0;
}
else if(argv[1][0]=='1'&&argv[1][1]=='6'&&argv[1][2]=='\0')
for(i=0;i<l;i++)
if(argv[3][i]<58&&argv[3][i]>47)
n=n+(argv[3][i]-48)*power(16,l-i-1);
else if(argv[3][i]<71&&argv[3][i]>64)
n=n+(argv[3][i]-55)*power(16,l-i-1);
else{printf("0");
return 0;
}	
else if(argv[1][0]=='1'&&argv[1][1]=='0'&&argv[1][2]=='\0')
for(i=0;i<l;i++)
if(argv[3][i]<58&&argv[3][i]>47)
n=10*n+(argv[3][i]-48);
else{printf("0");
return 0;
}
else{printf("0");
return 0;
}
if(argv[2][0]=='1'&&argv[2][1]=='0'&&argv[2][2]=='\0')
printf("%llu",n);
else if(argv[2][0]=='8'&&argv[2][1]=='\0'){
m=n;
for(l=0;m>0;m=m/8,l++);
m=0;
for(i=0;i<l;i++){
m=m+(n%8)*power(10,l-i-1);
n=n/8;
}
printf("%llu",m);
}
else if(argv[2][0]=='1'&&argv[2][1]=='6'&&argv[2][2]=='\0'){
m=n;
l=0;
while(n>0){l++;
n=n/16;
}
char K[l-1];
for(i=0;m>0;i++,m=m/16){if((m%16)<10)
K[i]=(m%16)+48;
else
K[i]=(m%16)+55;
}
for(l=0;l<i;l++)
putchar(K[i-l-1]);
}
else if(argv[2][0]=='2'&&argv[2][1]=='\0'){m=n;
l=0;
while(n>0){l++;
n=n/2;
}
char K[l-1];
for(i=0;m>0;i++,m=m/2)
K[i]=(m%2)+48;
for(l=0;l<i;l++)
putchar(K[i-l-1]);
}
else
printf("0");
return 0;
}
