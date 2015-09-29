#include "stdio.h"
#include "math.h"
int main(int argc,char *argv[]){
char b1[20];
char b3[20];
char b2[20];
char c,d[40];
int j=0;
for(;j<=39;j++)d[j]=' ';
strcpy(b1,argv[1]);
strcpy(b2,argv[2]);
strcpy(b3,argv[3]);

int k=0,i=0,f=0,num=0;
if(b1[0]=='2'){
while(b3[i]!=NULL){
        k=b3[i]-'0';
        i++;
        if(k==0||k==1){f=1;}
        else {f=0;break;}
        }}
else if(b1[0]=='8'){
    while(b3[i]!=NULL){
        k=b3[i]-'0';
        i++;
        if(k==0||k==1||k==2||k==3||k==4||k==5||k==6||k==7)f=2;
        else{f=0;break;}
}}
else if(b1[1]=='0'){
    while(b3[i]!=NULL){
        char k=b3[i];
        i++;
        if(k=='0'||k=='1'||k=='2'||k=='3'||k=='4'||k=='5'||k=='6'||k=='7'||k=='8'||k=='9')f=3;
        else {f=0;break;}
}}
else{
        while(b3[i]!=NULL){
        char k=b3[i];
        i++;
        if(k=='0'||k=='1'||k=='2'||k=='3'||k=='4'||k=='5'||k=='6'||k=='7'||k=='8'||k=='9'||k=='A'||k=='B'||k=='C'||k=='D'||k=='E'||k=='F')f=4;
        else{f=0;break;}}}
        if(f==0){printf("%d",f);}
        else if(f==1){
            k=0;
        while(b3[k]!=NULL){
            num=num*2+(b3[k]-'0');k=k+1;}
            k=0;
            if(b2[0]=='8'){
                while(num%8!=0){
                            j=num%8;
                c='0'+j;
                d[k]=c;
                k++;num=num/8;}}
        else if(b2[0]=='2')printf("%s",b3);
           else if(b2[1]=='0'){
                printf("%d",num);
            }
              else {
                    j=0;
                    while(num%16!=0){
                    k=num%16;
                    if(k<=9){
                      char  c='0'+k;
                        d[j]=c;}
                        else if(k==10){
                            d[j]='A';
                        }
                        else if(k==11){
                            d[j]='B';
                        }
                        else if(k==12){
                            d[j]='C';
                        }
                        else if(k==13){
                            d[j]='D';
                        }
                        else if(k==14){
                            d[j]='E';
                        }
                        else d[j]='F';
                      num=num/16;
              j++;
                }}}
                else if(f==2){
            k=0;
        while(b3[k]!=NULL){
            num=num*8+(b3[k]-'0');k=k+1;}
           printf("num is%d\n",num); k=0;
            if(b2[0]=='2'){
                while(num%2!=0){
                            j=num%2;
                c='0'+j;
                d[k]=c;
                k++;num=num/2;}}
        else if(b2[0]=='8')printf("%s",b3);
           else if(b2[1]=='0'){
                printf("%d",num);
            }
              else {
                    j=0;
                    while(num%16!=0){
                    k=num%16;
                    if(k<=9){
                      char  c='0'+k;
                        d[j]=c;}
                        else if(k==10){
                            d[j]='A';
                        }
                        else if(k==11){
                            d[j]='B';
                        }
                        else if(k==12){
                            d[j]='C';
                        }
                        else if(k==13){
                            d[j]='D';
                        }
                        else if(k==14){
                            d[j]='E';
                        }
                        else d[j]='F';
                      num=num/16;
              j++;
                }}}
                else if(f==3){
            k=0;
        while(b3[k]!=NULL){
            num=num*10+(b3[k]-'0');k=k+1;}
           printf("num is%d\n",num); k=0;
            if(b2[0]=='8'){
                while(num%8!=0){
                            j=num%8;
                c='0'+j;
                d[k]=c;
                k++;num=num/8;}}
        else if(b2[0]=='2'){
            while(num%2!=0){
                j=num%2;
                c='0'+j;
                d[k]=c;
                k++;num=num/2;}
        }
           else if(b2[1]=='0'){
                printf("%d",num);
            }
              else {
                    j=0;
                    while(num%16!=0){
                    k=num%16;
                    if(k<=9){
                      char  c='0'+k;
                        d[j]=c;}
                        else if(k==10){
                            d[j]='A';
                        }
                        else if(k==11){
                            d[j]='B';
                        }
                        else if(k==12){
                            d[j]='C';
                        }
                        else if(k==13){
                            d[j]='D';
                        }
                        else if(k==14){
                            d[j]='E';
                        }
                        else d[j]='F';
                      num=num/16;
              j++;
            }}}
            else if(f==4){
            k=0;i=0;
        while(b3[k]!=NULL){
            c=b3[k];
                if(c=='0'||c=='1'||c=='2'||c=='3'||c=='4'||c=='5'||c=='6'||c=='7'||c=='8'||c=='9'){
            num=num*16+(b3[k]-'0');}
            else if(c=='A') num=num*16+10;
            else if(c=='B') num=num*16+11;
            else if(c=='C') num=num*16+12;
            else if(c=='D') num=num*16+13;
            else if(c=='E') num=num*16+14;
            else if(c=='F') num=num*16+15;
            k=k+1;}
           printf("num is%d\n",num); k=0;
            if(b2[0]=='8'){
                while(num%8!=0){
                        j=num%8;
                c='0'+j;
                d[k]=c;
                k++;num=num/8;
                    }}
        else if(b2[0]=='2'){
            while(num%2!=0){
                        j=num%2;
                c='0'+j;
                d[k]=c;
                k++;num=num/2;}
        }
           else if(b2[1]=='0'){
                printf("%d",num);
            }
              else {
                    j=0;
                    while(num%16!=0){
                    k=num%16;
                    if(k<=9){
                      char  c='0'+k;
                        d[j]=c;}
                        else if(k==10){
                            d[j]='A';
                        }
                        else if(k==11){
                            d[j]='B';
                        }
                        else if(k==12){
                            d[j]='C';
                        }
                        else if(k==13){
                            d[j]='D';
                        }
                        else if(k==14){
                            d[j]='E';
                        }
                        else d[j]='F';
                      num=num/16;
              j++;
                }}}
                k=0;
                while(d[k]!=' '){k++;}
                i=k-1;j=0;
                for(;i>=0;i--){
                    printf("%c",d[i]);
                }
}
