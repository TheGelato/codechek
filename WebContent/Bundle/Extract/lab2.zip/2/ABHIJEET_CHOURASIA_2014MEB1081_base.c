#include<stdio.h>

int po(int b, int e){
    int ans = 1;
    while(e--)ans*=b;
    return ans;
}

int main(int argc, char *argv[]){
    char ans[20];
    int num,b1,b2,i,temp;
    char base[] = "0123456789ABCDEFG";
    if(*argv[1] == '1'){
                if(*(argv[1]+1) == '6')
                             b1 = 16;
                else
                             b1 = 10;            
    }
    else{
                if(*argv[1] == '8')
                            b1 = 8;
                else{
                            if(*argv[1] == '2')
                                        b1 = 2;
                            else
                                        return 0;     
                }
    }
    //b2
    if(*argv[2] == '1'){
                if(*(argv[2]+1) == '6')
                             b2 = 16;
                else
                             b2 = 10;            
    }
    else{
                if(*argv[2] == '8')
                            b2 = 8;
                else{
                            if(*argv[2] == '2')
                                        b2 = 2;
                            else
                                        return 0;     
                }
    }
    i=0;
    while(*argv[3] != '\0'){
                   if((*argv[3] >= '0' && *argv[3] <= '9') || (*argv[3] >= 'A' && *argv[3] <= 'F')){
                                if(*argv[3] >= base[b1]){printf("0");return 0;}
                                argv[3]++;i++;                  
                   }                                                                                                                                           
                  else
                       return 0;
                      
    }
 num = 0;temp = i-1;
    while(i != 0){
            i--;argv[3]--;
            if(*argv[3] >= '0' && *argv[3] <= '9')
                   num = num + ((*argv[3] - '0')*po(b1,temp-i));              
            else
                   num = num + ((10 + (*argv[3] - 'A'))*po(b1,temp-i));
    }
i = 0;
    do{
          ans[i] = base[num % b2];
          num/=b2;i++;          
    }while(num != 0);
  i--;
while(i>=0){printf("%c",ans[i]);i--;}
return 0;
}
