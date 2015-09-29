#include <stdio.h>
#include <string.h>

int main(int argc,char *argv[]){

int b1=atoi(argv[1]);
int b2=atoi(argv[2]);
int k=0;
char numc[100];
strcpy(numc,argv[3]);
char def='m';
long int sum=0;
long int bnum=0,onum=0,denum=0;
long int bin=0,hex=0;

if (b1==2){
      char *p;
         for(p = numc;*p;++p){
  	 if(!strchr("01", *p)){k=1;}
	 else{def='b';}
	 }
}else if(b1==8){
      char *p;
         for(p = numc;*p;++p){
  	 if(!strchr("01234567", *p)){k=2;}
	 else{def='o';}
	 }
}
else if(b1==10){
      char *p;
         for(p = numc;*p;++p){
  	 if(!strchr("0123456789", *p)){k=3;}
	 else{def='d';}
	 }}

else if(b1==16){
      char *p;
         for(p = numc;*p;++p){
  	 if(!strchr("0123456789ABCDEF", *p)){k=4;}
	 else{def='h';}
	 }

}

if(k==1 || k==2 || k==3 || k==4){printf("%d\n",0);}
else{if(b1==b2){printf("%s\n",numc);}else{
if(def!='m'){
	if(def=='h'){
		int i,len=0,mun,hex=1;
		len=strlen(numc);
		for(i=len-1;i>=0;i--){
		if(numc[i]>='0' && numc[i]<='9'){
		 mun=numc[i]-'0';}
		if(numc[i]>='A' && numc[i]<='F'){
		 mun=numc[i]-55;
		}
		sum=sum+hex*mun;
		hex=hex*16;}

	}else{  int num=atoi(argv[3]);
	        if(def=='b'){int rem,k=1;
		while(num>=1){
		rem=num%10;
		bnum+=rem*k;
		k=k*2;
		num=num/10;}
		}
		else if(def=='o'){
		int num1=atoi(argv[3]);
		int remo,ko=1;
		while(num1>0){
		remo=num1%10;
		onum+=remo*ko;
		ko=ko*8;
		num1=num1/10;}
		}
		else if(def=='d'){denum=atoi(argv[3]);}
	}}

if(b2==2 || b2==8){ switch(def){
		case 'o': bin=onum;
			  break;
		case 'd': bin=denum;
			  break;
		case 'h': bin=sum;
			  break;}
	   int ocnum[100],i=1,j;
	   while(bin>0){
	   ocnum[i]=bin%b2;
	   bin=bin/b2;
	   i++;}
	   for(j=i-1;j>0;j--){printf("%d",ocnum[j]);}
	   printf("\n");}

if(b2==10){ switch(def){
		case 'b': printf("%ld",bnum);
			  printf("\n");
			  break;
		case 'o': printf("%ld",onum);
			  printf("\n");
			  break;
		case 'h': printf("%ld",sum);
			  printf("\n");
			  break;}}

if(b2==16){ switch(def){
		case 'o': hex=onum;
			  break;
		case 'd': hex=denum;
			  break;
		case 'b': hex=bnum;
			  break;}

	   int tot,henum[100],i=1,j;
	   while(hex>0){
		tot=hex%16;
		if(tot<10) tot=tot+48;
		else tot+=55;
		henum[i]=tot;
		hex/=16;
		i++;}
		for(j=i-1;j>0;j--){printf("%c",henum[j]);}
		printf("\n");}
}}
return 0;
}
