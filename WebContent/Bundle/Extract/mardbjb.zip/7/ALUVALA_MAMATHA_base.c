#include <stdio.h>
#include <string.h>


int main(int argc,char* argv[]){
	char *n;
	int A,B,i;
	long int base10=0;
	int j;
	int k=1;
	
	char B_digits[16] =
	 {'0', '1', '2', '3', '4', '5', '6', '7',
	  '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    int result[64];
 
    int t=0;
	
	
	n=argv[3];
	
	A=atoi(argv[1]);
	
	B=atoi(argv[2]);
	
	for(i=0;i<strlen(n);i++){
		for(k=1,j=strlen(n)-i-1;j>0;j--){
			k*=A;
		}
		  if((n[i])>='A'){
			 if(n[i]>=A+'A'-10){
				  printf("0\n");
					  return 0;
					
			  } 
		     base10+=(n[i]-'A'+10)* k; 
		   }
		  else{
			  if(n[i]>=A+'0'){
				 printf("0\n");
					  return 0;
					
			  }
		
			 base10+=(n[i]-'0')*k;
		   }
	}
	
	
	
	
	while (base10 != 0)
   {
	 result[t] = base10 % B;
	 base10 /= B;
	 t++;
   }


   t--;  
   
   
   for(; t>=0; t--)
   {
	 printf("%c", B_digits[result[t]]);
   }
   printf("\n");
	return 0;
}
