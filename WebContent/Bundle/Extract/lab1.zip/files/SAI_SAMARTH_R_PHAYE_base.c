#include<stdio.h>
int num(char N[], int s, int base)
{
	int i = 0, j = 0, d = 0, number = 0;
	for(i = 0; i < s; i++)
	{
		if((int)N[i]>64)
			d = (int)(N[i]) - (int)('0') - 7;
		else
			d = (int)(N[i]) - (int)('0');
		for(j = i; j < s-1; j++)
			d = d*base;
		number = number + d;
	}
	return number;
}
void out(int n, int base)
{
	int rem = 0, size=0, N = n, i = 0;
	char outt[30];
	while(N>0)
	{
		rem = N%base;
		N = N/base;
		size++;
	}
	for(i = size-1; i>=0; i--)
	{
		rem = n%base;
		if(rem < 10)
			outt[i] = (char)(48 + rem);
		else
			outt[i] = (char)(55 + rem);
		n = n/base;
	}
	printf("Output: ");for(i = 0; i < size; i++)
		printf("%c",outt[i]);
	printf("\n");
}
int main(int argc, char *argv[])
{
	/* 16 2 AC25 */
	int size = 0, base = 0;
	int flag = 0, i = 0;
	while(argv[3][size] != '\0')
		size++;
	if(argv[1][0] == '1' && argv[1][1] == '6')
	{
		base = 16;
		for(i = 0; i < size; i++)
		{
			if(argv[3][i] != 'F' && argv[3][i] != 'E' && argv[3][i] != 'D' && argv[3][i] != 'C' && argv[3][i] != 'B' && argv[3][i] != 'A' && argv[3][i] != '9' && argv[3][i] != '8' && argv[3][i] != '7' && argv[3][i] != '6' && argv[3][i] != '5' && argv[3][i] != '4' && argv[3][i] != '3' && argv[3][i] != '2' && argv[3][i] != '1' && argv[3][i] != '0')
			{
				flag = 1;
				break;
			}
		}
	}
	else if(argv[1][0] == '2')
	{
		base = 2;
		for(i = 0; i < size; i++)
		{
			if(argv[3][i] != '1' && argv[3][i] != '0')
			{
				flag = 1;
				break;
			}
		}
	}
	else if(argv[1][0] == '1' && argv[1][1] == '0')
	{
		base = 10;
		for(i = 0; i < size; i++)
		{
			if(argv[3][i] != '9' && argv[3][i] != '8' && argv[3][i] != '7' && argv[3][i] != '6' && argv[3][i] != '5' && argv[3][i] != '4' && argv[3][i] != '3' && argv[3][i] != '2' && argv[3][i] != '1' && argv[3][i] != '0')
			{
				flag = 1;
				break;
			}
		}
	}
	else if(argv[1][0] == '8')
	{
		base = 8;
		for(i = 0; i < size; i++)
		{
			if(argv[3][i] != '7' && argv[3][i] != '6' && argv[3][i] != '5' && argv[3][i] != '4' && argv[3][i] != '3' && argv[3][i] != '2' && argv[3][i] != '1' && argv[3][i] != '0')
			{
				flag = 1;
				break;
			}
		}
	}
	if(flag == 1)
	{
		printf("Output: 0\n");
	}
	else
	{
		int dec = num(argv[3], size, base);
		if(argv[2][0] == '1' && argv[2][1] == '6')
		{
			base = 16;
		}
		else if(argv[2][0] == '8')
		{
			base = 8;
		}
		else if(argv[2][0] == '2')
		{
			base = 2;
		}
		else if(argv[2][0] == '1' && argv[2][1] == '0')
		{
			base = 10;
		}
		out(dec, base);
		return 0;
	}
}
