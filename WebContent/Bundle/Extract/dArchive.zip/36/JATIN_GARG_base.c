#include<stdio.h>

int main(int argc,char* argv[]){

int b1,b2,decimal,power,j,dividend;
int a[100];
char output[100];

//putting the number to be converted in str(character array)
char str[100];
int i = 0;
while(argv[3][i] != '\0' ){
    str[i] = argv[3][i];
    i++;
}
str[i] = '\0';
i=0;

//getting input for b1
if(argv[1][0] == '2' && argv[1][1] == '\0')
    b1 = 2;
else if(argv[1][0] == '8' && argv[1][1] == '\0')
    b1 = 8;
else if(argv[1][0] == '1' && argv[1][1]=='0' && argv[1][2] == '\0')
    b1 = 10;
else if(argv[1][0] == '1' && argv[1][1]=='6' && argv[1][2] == '\0')
    b1 = 16;
else{
    printf("%d",0);
    return;
}
//end of input for b1

// getting input for b2
if(argv[2][0] == '2' && argv[2][1] == '\0')
    b2 = 2;
else if(argv[2][0] == '8' && argv[2][1] == '\0')
    b2 = 8;
else if(argv[2][0] == '1' && argv[2][1]=='0' && argv[2][2] == '\0')
    b2 = 10;
else if(argv[2][0] == '1' && argv[2][1]=='6' && argv[2][2] == '\0')
    b2 = 16;
else{
    printf("%d",0);
    return;
}
/////////////////start of checking/////////
if (b1 == 16){
    i = 0;
    while (str[i] != '\0'){
	
		if (str[i] >= '0' && str[i] <= '9'){
		
				a[i] = (int)str[i] - 48;
	
		}else if(str[i] >= 'A' && str[i] <= 'F'){
		
				a[i] = (int)str[i] - 55;		
			}else{
				printf("%d",0);
				return;
			}
	
	i++;
	}
a[i] = '\0';

power = 1;
i = i - 1;
decimal = 0;
while (i != -1){
	
	decimal = decimal + power*a[i];
	power = power*16;
	i = i - 1;
}
    
}
////////////////////end of checking///////////

/////////////////start of checking/////////
if (b1 == 2){
    i = 0;
    while (str[i] != '\0'){
	
		if (str[i] >= '0' && str[i] <= '1'){
		
				a[i] = (int)str[i] - 48;
			
			}else{
				printf("%d",0);
				return;
			}
	
	i++;
	}
a[i] = '\0';

power = 1;
i = i - 1;
decimal = 0;
while (i != -1){
	
	decimal = decimal + power*a[i];
	power = power*2;
	i = i - 1;
}
    
}
////////////////////end of checking///////////

/////////////////start of checking/////////
if (b1 == 8){
    i = 0;
    while (str[i] != '\0'){
	
		if (str[i] >= '0' && str[i] <= '7'){
		
				a[i] = (int)str[i] - 48;
			
			}else{
				printf("%d",0);
				return;
			}
	
	i++;
	}
a[i] = '\0';

power = 1;
i = i - 1;
decimal = 0;
while (i != -1){
	
	decimal = decimal + power*a[i];
	power = power*8;
	i = i - 1;
}
    
}
////////////////////end of checking///////////

/////////////////start of checking/////////
if (b1 == 10){
    i = 0;
    while (str[i] != '\0'){
	
		if (str[i] >= '0' && str[i] <= '9'){
		
				a[i] = (int)str[i] - 48;
			
			}else{
				printf("%d",0);
				return;
			}
	
	i++;
	}
a[i] = '\0';

power = 1;
i = i - 1;
decimal = 0;
while (i != -1){
	
	decimal = decimal + power*a[i];
	power = power*10;
	i = i - 1;
}
    
}
////////////////////end of checking///////////

if(b2 == 16){

dividend = decimal;

i=0;
int q;
while (dividend >= b2){
		
		q =  dividend%(b2) ;	
			if (q == 10){
			output[i] = 'A';
		}else if (q == 11){
			 output[i] = 'B';
	 		 }else if(q == 12){
	 		 	output[i] = 'C';
	 		 } else if (q == 13){
	 		 	output[i]= 'D';
	 		 } else if (q == 14){
	 		 	output[i]= 'E';
 		 	} else if (q == 15){
 		 		output[i] = 'F';
 		 	}else {
 		 		output[i] = q +48;
 		 	}
		
		i++;
		dividend = (dividend/(b2));	

}
	q =  dividend%(b2) ;
	   	 if (q == 10){
			output[i] = 'A';
			}else if (q == 11){
			 output[i] = 'B';
	 		 }else if(q == 12){
	 		 	output[i] = 'C';
	 		 } else if (q == 13){
	 		 	output[i]= 'D';
	 		 } else if (q == 14){
	 		 	output[i]= 'E';
 		 	} else if (q == 15){
 		 		output[i] = 'F';
 		 	}else {
 		 		output[i] = q + 48;
 		 	}
	
	for(j=i;j >=0; j--)
	printf("%c",output[j]);
	printf("\n");
}

if (b2 == 10){
printf("%d\n",decimal);
}

if (b2 == 2 || b2 == 8){
dividend = decimal;
i=0;
int q;
while (dividend >= b2){
q =  dividend%(b2);
output[i] = q +48;
i++;
dividend = (dividend/(b2));	
}
q=dividend%(b2);
output[i] = q +48;
for(j=i;j >=0; j--)
	printf("%c",output[j]);
	printf("\n");
}



}