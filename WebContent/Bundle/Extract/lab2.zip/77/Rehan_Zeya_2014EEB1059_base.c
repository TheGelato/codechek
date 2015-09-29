#include<stdio.h>
#include<stdlib.h>
int power(int base, int mantissa){
	int result=1;
	while(mantissa){
		result=result*base;
		mantissa-=1;
	}
	return result;
}
int changeToDecimal(int base1, char str[]){
	int c, temp, i=0, result=0;
	while(str[i]!='\0'){
		c=str[i];
		i+=1;
		if(c>=48 && c<=57)
			temp=(c-48);
		else if(c>=65 && c<=70)
			temp=c-65+10;
		else if(c>=97 && c<=102)
			temp=c-97+10;
		else
			return -1;
		if (temp>=base1)
			return -1;
		result=result*base1+temp;
	}
	return result;
}
void convert(int base2, int number);
int main(int argc, char *argv[])
{
	if (argc!=4){
		printf("Usage: %s [base1 base2 number]. Example: %s 2 10 1101 \n\n", argv[0], argv[0]);
		return -2;
	}
	int base1, base2, number;
	base1=atoi(argv[1]);
	base2=atoi(argv[2]);
	if (!(base1==2||base1==8||base1==10||base1==16)){
		printf("Base not acceptable!!!\n");
		return -3;
	}
	number=changeToDecimal(base1, argv[3]);
	if (number==-1){
		printf("Output: 0\n");
		return -1;
	}
	convert(base2, number);
	return 0;
}
void convert(int base2, int decimal_number){
	int temp=0, i=0;
	char new_number[1000];
	while(decimal_number){
		temp=decimal_number%base2;
		if (temp>=10)
			temp=temp-10+65;
		else
			temp=temp+48;
		new_number[i]=temp;
		i+=1;
		decimal_number=decimal_number/base2;
	}
	i-=1;
	printf("Output: ");
	while(i>=0){
		printf("%c", new_number[i]);
		i-=1;
	}
	printf("\n");
	return;
}
