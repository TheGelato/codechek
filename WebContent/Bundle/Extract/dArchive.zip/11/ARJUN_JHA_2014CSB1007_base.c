# include <stdio.h>
# include <string.h>
int check(int,char *);
int b1210(int,char *);
void b12b2(int,long int);
int l;
int main(int argc,char *argv[])
{
int b1=atoi(argv[1]);
int b2=atoi(argv[2]);
char c[100];
strcpy(c,argv[3]);
l=strlen(c);
int o=check(b1,c);
if (o==0)
printf("%d\n",o);
else
    b12b2(b2,b1210(b1,c));
return 0;
}
int check(int n,char *ch)
{
int q=1;
while (*ch!='\0')
{
switch(n)
{
case 2:
if (!(*ch==48 || *ch==49))
q=0;
break;
case 8:
if (!(*ch>=48 && *ch<=55))
q=0;
break;
case 10:
if (!(*ch>=48 && *ch<=57))
q=0;
break;
case 16:
if (!((*ch>=48 && *ch<=57) || (*ch>=65 && *ch<=70)))
q=0;
break;
}
ch++;
}
return(q);
}
int b1210(int n,char *s)
{
long int sum=0;
int i,j;
for(i=0;i<=(l-1);i++){
   if (*(s+i)<58 )
    j=*(s+i)-48;
   else
    j=*(s+i)-55;
   sum=sum + (j*(power(n,l-1-i)));
}
return(sum);
}
void b12b2(int k,long int i)
{
char s[100];int r,j=0;
while(i>0)
 {
     r=i%k;
     i=i/k;
   if (r<10)
 s[j]=48+r;
 else
    s[j]=55+r;
 j++;
}
for(j=j-1;j>=0;j--)
    printf("%c",s[j]);
printf("\n");
}
int power(int i,int j)
{
long int k,p=1;
for(k=1;k<=j;k++)
p=p*i;
return(p);
}
