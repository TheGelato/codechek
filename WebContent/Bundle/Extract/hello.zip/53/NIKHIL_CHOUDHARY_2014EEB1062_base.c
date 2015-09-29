#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int pwr(int i,int j);
int check_dec(char s[])
{
	int i;
	int b=strlen(s);
	for(i=0; i<b; i++)
	{
		if(s[i]>='0' && s[i]<='9')
			;
		else
			return 0;
	}
	return 1;
}

int check_bin(char s[])
{
	int i;
	int b=strlen(s);
	for(i=0; i<b; i++)
	{
		if(s[i]=='0' || s[i]=='1')
			;
		else
			return 0;
	}
	return 1;
}

int check_oct(char s[])
{
	int i;
	int b=strlen(s);
	for(i=0; i<b; i++)
	{
		if(s[i]>='0' && s[i]<='7')
			;
		else
			return 0;
	}
	return 1;
}

int check_hex(char s[])
{
	int i;
	int b=strlen(s);
	for(i=0; i<b; i++)
	{
		if((s[i]>='0' && s[i]<='9') || ((int)s[i]>=65 && (int)s[i]<=70))
			;
		else
			return 0;
	}
	return 1;
}

long long int dec_to_bin(int n)
{
	int rem;
	long long int i=1;
	long long int bin=0;
	while(n != 0)
	{
		rem = n%2;
		n /= 2;
		bin += rem*i;
		i *= 10;
	}
	return bin;
}

int bin_to_dec(int n)
{
	int rem, dec=0, i=0;
	while(n != 0)
	{
		rem = n%10;
		if(rem == 0)
		{
			n /= 10;
			i++;
		}
		else if(rem == 1)
		{
			dec += pwr(2,i);
			n /= 10;
			i++;
		}
	}
	return dec;
}

int dec_to_oct(int n)
{
	int rem, i=1, oct=0;
	while(n != 0)
	{
		rem = n%8;
		n /= 8;
		oct += rem*i;
		i *= 10;
	}
	return oct;
}

int oct_to_dec(int n)
{
	int rem, dec=0, i=0;
	while(n != 0)
	{
		rem = n%10;
		n /= 10;
		dec += (rem*pwr(8,i));
		i++;
	}
	return dec;
}

int bin_to_oct(int n)
{
	return (dec_to_oct(bin_to_dec(n)));
}

long long int oct_to_bin(int n)
{
	return (dec_to_bin(oct_to_dec(n)));
}

void dec_to_hex(int n)
{
	int i, hex[100000];
	for(i=0; n>0; i++)
	{
		hex[i] = n%16;
		n /= 16;
	}

	i--;
	for( ; i>=n; i--)
	{
		if(hex[i] == 10)
			printf("A");
		else if(hex[i] == 11)
			printf("B");
		else if(hex[i] == 12)
			printf("C");
		else if(hex[i] == 13)
			printf("D");
		else if(hex[i] == 14)
			printf("E");
		else if(hex[i] == 15)
			printf("F");
		else
			printf("%d", hex[i]);
	}
	printf("\n");
}

int hex_to_dec(char s[])
{
	int i, dec=0;
	int b=strlen(s);
	for(i=b-1; i>=0; i--)
	{
		if(s[i] == 'A')
			dec += (10*pwr(16,b-i-1));
		else if(s[i] == 'B')
			dec += (11*pwr(16,b-i-1));
		else if(s[i] == 'C')
			dec += (12*pwr(16,b-i-1));
		else if(s[i] == 'D')
			dec += (13*pwr(16,b-i-1));
		else if(s[i] == 'E')
			dec += (14*pwr(16,b-i-1));
		else if(s[i] == 'F')
			dec += (15*pwr(16,b-i-1));
		else
			dec += (s[i]*pwr(16,b-i-1));
	}
	return dec;
}

void bin_to_hex(int n)
{
	dec_to_hex(bin_to_dec(n));
}

void oct_to_hex(int n)
{
	dec_to_hex(oct_to_dec(n));
}

int hex_to_oct(char s[])
{
	return (dec_to_oct(hex_to_dec(s)));
}

long long int hex_to_bin(char s[])
{
	return (dec_to_bin(hex_to_dec(s)));
}

int main(int argc, char *argv[])
{
	if(atoi(argv[1])==10 && check_dec(argv[3])==1)
	{
		if(atoi(argv[2]) == 2)
			printf("%lld\n", dec_to_bin(atoi(argv[3])));
		else if(atoi(argv[2]) == 8)
			printf("%d\n", dec_to_oct(atoi(argv[3])));
		else if(atoi(argv[2]) == 16)
			dec_to_hex(atoi(argv[3]));
	}
	else if(atoi(argv[1])==10 && check_dec(argv[3])==0)
		printf("0\n");

	else if(atoi(argv[1])==2 && check_bin(argv[3])==1)
	{
		if(atoi(argv[2]) == 8)
			printf("%d\n", bin_to_oct(atoi(argv[3])));
		else if(atoi(argv[2]) == 10)
			printf("%d\n", bin_to_dec(atoi(argv[3])));
		else if(atoi(argv[2]) == 16)
			bin_to_hex(atoi(argv[3]));
	}
	else if(atoi(argv[1])==2 && check_bin(argv[3])==0)
		printf("0\n");

	else if(atoi(argv[1])==8 && check_oct(argv[3])==1)
	{
		if(atoi(argv[2]) == 2)
			printf("%lld\n", oct_to_bin(atoi(argv[3])));
		else if(atoi(argv[2]) == 10)
			printf("%d\n", oct_to_dec(atoi(argv[3])));
		else if(atoi(argv[2]) == 16)
			oct_to_hex(atoi(argv[3]));
	}
	else if(atoi(argv[1])==8 && check_oct(argv[3])==0)
		printf("0\n");

	else if(atoi(argv[1])==16 && check_hex(argv[3])==1)
	{
		if(atoi(argv[2]) == 2)
			printf("%lld\n", hex_to_bin(argv[3]));
		else if(atoi(argv[2]) == 8)
			printf("%d\n", hex_to_oct(argv[3]));
		else if(atoi(argv[2]) == 10)
			printf("%d\n", hex_to_dec(argv[3]));
	}
	else if(atoi(argv[1])==16 && check_hex(argv[3])==0)
		printf("0\n");

	else if(atoi(argv[1]) == atoi(argv[2]))
	{
		if(atoi(argv[1]) == 2)
		{
			if(check_bin(argv[3]) == 0)
				printf("0\n");
			else
				puts(argv[3]);
		}

		else if(atoi(argv[1]) == 8)
		{
			if(check_oct(argv[3]) == 0)
				printf("0\n");
			else
				puts(argv[3]);
		}

		else if(atoi(argv[1]) == 10)
		{
			if(check_dec(argv[3]) == 0)
				printf("0\n");
			else
				puts(argv[3]);
		}

		else if(atoi(argv[1]) == 16)
		{
			if(check_hex(argv[3]) == 0)
				printf("0\n");
			else
				puts(argv[3]);
		}
	}
if(atoi(argv[1])==atoi(argv[2]))
{
printf("%s",argv[3]);
}
	return 0;
}
int pwr(int i,int j)
{
    int p,q=1;
    for (q=1;q<=j;q++)
        p=p*i;
    return p;
}

