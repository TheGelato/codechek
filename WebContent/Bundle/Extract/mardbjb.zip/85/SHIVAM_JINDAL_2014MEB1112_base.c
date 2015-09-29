#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int powe(int xx,int yy)
{int qq,pp=1;
for(qq=0;qq<yy;qq++)
pp=pp*xx;
return pp;
}
int main(int argc,char *argv[])
{
    int b1,b2,i,j,l,k;
    char *num[1];
    char num_str[20];
    int num_deci=0;
    b1=atoi(argv[1]);
    b2=atoi(argv[2]);
    num[0]=argv[3];
    
    l=strlen(num[0]);
    
    
  
    if(b1==2){
       for(i=0;i<l;i++){
           if(num[0][i]!=49&&num[0][i]!=48){
               printf("0");
               exit(1);
           }}
        
        for(i=0;i<l;i++){
            num_deci=num_deci+((num[0][i]-48)*powe(2,l-1-i));
        }
    }
    else if(b1==16){
        for(i=0;i<l;i++){
           if((num[0][i]>=48 && num[0][i]<=57) || (num[0][i]>=65 && num[0][i]<=70))
{}
else
{printf("0");
return 0;
}
         }  
        
        for(i=0;i<l;i++){
            if(num[0][i]>57){
                num_deci=num_deci+((num[0][i]-55)*powe(16,l-1-i));;
            }
             else{num_deci=num_deci+((num[0][i]-48)*powe(16,l-1-i));}
        }
    }
    else if(b1==8){
        for(i=0;i<l;i++){
           for(j=48;j<=55;j++){
             if(num[0][i]==j){
               break;
             }
           }
         if(j==56){
             printf("0");
             exit(3);}
         } 
        for(i=0;i<l;i++){
            num_deci=num_deci+((num[0][i]-48)*powe(8,l-1-i));
        }
    }
    else{
         for(i=0;i<l;i++){
           for(j=48;j<=57;j++){
             if(num[0][i]==j){
               break;
             }
           }
         if(j==58){
             printf("0");
             exit(1);}
         } 
        
        for(i=0;i<l;i++){
            num_deci=num_deci+((num[0][i]-48)*powe(10,l-1-i));
        }
    }
   //printf("%d",num_deci);

    if(b2==10){
        printf("%d",num_deci);
    }
    else if(b2==2){
        i=0;
        num_str[0]=num_deci%2+48;
        i++;
        while(num_deci>=2){
            num_deci=num_deci/2;
            num_str[i]=num_deci%2+48;
            
            i++;
        }
        for(j=i-1;j>=0;j--){
            printf("%c",num_str[j]);
        }

    }
    
    
    
    else if(b2==8){
        num_str[0]=num_deci%8+48;
        i=1;
        while(1){

            num_deci=num_deci/8;
            num_str[i]=num_deci%8+48;
            if(num_deci<8){
                break;
            }
            i++;

            }
        for(j=i;j>=0;j--){
            printf("%c",num_str[j]);
        }
    }
    else{
        num_str[0]=num_deci%16+48;
        if(num_str[0]>57){
                num_str[0]=num_str[0]+7;
        }
        i=1;
        while(1){

            num_deci=num_deci/16;
            num_str[i]=num_deci%16+48;
            if(num_str[i]>57){
                num_str[i]=num_str[i]+7;
        }
            if(num_deci<16){
                break;
            }
            i++;

            }
        for(j=i;j>=0;j--){
            printf("%c",num_str[j]);
        }
    }


    return 0;
}

