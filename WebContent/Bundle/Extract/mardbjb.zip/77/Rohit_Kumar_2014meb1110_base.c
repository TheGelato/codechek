#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int equi(char x)
{
	if (x - '0' >=0 && x - '0' <= 9)
	{
		return x-'0';
	}
	else if (x - 'A' >=0 && x - 'A' <= 5)
	{
		return 10 + (x-'A');
	}
	else
	{
		return -1;
	}
}

char revEqui(int x)
{
	char t;

	if (x <= 9)
	{
		t = '0' + x;
	}
	else
	{
		t = 'A' + (x-10);
	}
	return t;
}

char * prepend(char *str, char c)
{
    char * new_string = (char *)malloc(strlen(str)+2);
    new_string[0] = c;
    strcpy(new_string + 1, str);
    return new_string;
}

void conversion(int b1, int b2, char* num)
{
	int actual = 0;
	int i,j;
	for (i = strlen(num)-1, j=0; i >= 0; i--,j++)
	{	
		actual += equi(num[i])*pow(b1, j);
	}

	char* result = (char *)malloc(1);
	result[0] = '\0';

	while(actual > 0)
	{
		char remainder = revEqui(actual%b2);
		result = prepend(result, remainder);
		actual /= b2; 
	}
	
	printf("%s\n", result);
}


int main(int argc, char const *argv[])
{
	int b1, b2;
	char* num;

	if (argc != 4){

        printf("invalid input");

    } else {

    	b1 = atoi(argv[1]);
    	b2 = atoi(argv[2]);
        num = (char*)argv[3];
        int i;

        for (i = 0; i < strlen(num); i++)
        {
            if (equi(num[i]) == -1 || equi(num[i]) >= b1 )
            {
            	printf("0\n");
            	return 0;
            }
        }

        conversion(b1, b2, num);

    }


	return 0;
}