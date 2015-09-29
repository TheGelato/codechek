# include <stdio.h>
# include <string.h>

int main(int argc , char *argv[])
{
char b,d,z,c;
int l,i,a,count=0;
b = atoi(argv[1]);
d = atoi(argv[2]);
l=strlen(argv[3]);
for (i=0;i<l;i++){
c=argv[3][i];
z=c/'b';
if (z<1)
count++;
else if (z>=1)
printf("0\n");}
if (count==l)
printf("number belongs to given system\n");


}

