#include <stdio.h>
#include <string.h>

int power(int a, int b)
{
int p = 1;
int i;
if (b > 0)
 {
for(i = 1; i <= b; i++)
p = p*a;
 }
else p = 1;
return(p);
}

main(int argc, char* argv[])
{
int i, j, u, arg, s[1000], t;
char k[1000];
int n1 = atoi(argv[1]);
int n2 = atoi(argv[2]);
if(n1 == 10 && (n2 == 2 || 8 || 16))
{
int n3 = atoi(argv[3]);
for(i = 0; n3 != 0; i++)
{
t = n3 % n2;
if(t >= 0 && t <=9)
s[i] = t + 48;
else
s[i] = t + 55;
n3 = n3/n2;
}

for(j = 0; j <= i; j++)
k[j] = s[i-j-1];

for(u = 0; u < i; u++)
printf("%c", k[u]);

}

else if(n1 == 16 || 8 || 2)
{
int sum=0;
int w = strlen(argv[3]);
if(n2 == 10)
{
for(i = 0; i <= w-1; i++)
{
s[i] = argv[3][i];
if(s[i] >= 48 && s[i] <= 57)
s[i] = s[i] - 48;
else
s[i] = s[i] - 55;
if(s[i]>=n1)
{
printf("%d",0);
return 0;
}
}
for(j = 0; j <= w-1; j++)
sum = sum + s[j]*power(n1, w-1-j);
printf("%d", sum);
}

else if(n2 == 16 || 8 || 2)
{
for(i = 0; i <= w-1; i++)
{
s[i] = argv[3][i];
if(s[i] >= 48 && s[i] <= 57)
s[i] = s[i] - 48;
else
s[i] = s[i] - 55;
if(s[i]>=n1)
{
printf("%d",0);
return 0;
}
}
for(j = 0; j <= w-1; j++)
sum = sum + s[j]*power(n1, w-1-j);
int n3 = sum;
for(i = 0; n3 != 0; i++)
{
t = n3 % n2;
if(t >= 0 && t <=9)
s[i] = t + 48;
else
s[i] = t + 55;
n3 = n3/n2;
}

for(j = 0; j <= i; j++)
k[j] = s[i-j-1];

for(u = 0; u < i; u++)
printf("%c", k[u]);

}
}


return 0;
}
