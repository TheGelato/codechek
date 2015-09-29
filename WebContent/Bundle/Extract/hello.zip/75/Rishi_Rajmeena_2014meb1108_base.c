#include<stdio.h>

int main(int argc,char *argv[]){
char a[20];
char b[20];
char e[20];
char c,g[40];
int j=0,l=0;

strcpy(b1,argv[1]);
strcpy(b2,argv[2]);
strcpy(b3,argv[3]);
for(;j<=39;j++)g[j]='   ';
int k=0,i=0,f=0,num=0;
if(a[0]=='2'){
while(e[i]!=NULL){
        k=e[i]-'0';
        i++;
        if(k==0||k==1){f=1;}
        else {f=0;break;}
        }
        if(f==1){
            k=0;
        while(e[k]!=NULL){
            num=num*2+(e[k]-'0');k++;}
            k=0;
            if(b[0]=='8'){
                while(num%8!=0){
                            j=num%8;
                c='0'+j;
                g[k]=c;
                k++;num=num/8;}}
        else if(b[0]=='2')printf("%s",argv[3]);
           else if(b[1]=='0'){
                printf("%d",num);
            }
              else {
                    j=0;
                    while(num%16!=0){
                    k=num%16;
                    if(k<=9){
                      char  c='0'+k;
                        g[j]=c;}
                        else if(k==10){
                            g[j]='A';
                        }
                        else if(k==11){
                            g[j]='B';
                        }
                        else if(k==12){
                            g[j]='C';
                        }
                        else if(k==13){
                            g[j]='D';
                        }
                        else if(k==14){
                            g[j]='E';
                        }
                        else g[j]='F';
                      num=num/16;
              j++;
                }}}
                   k=0;
                while(g[k]!=' '){k++;}
                i=k-1;j=0;
                for(;i>=0;i--){
                    printf("%c",g[i]);
}
else if(b1[0]=='8'){
    while(b3[i]!=NULL){
        k=b3[i]-'0';
        i++;
        if(k==0||k==1||k==2||k==3||k==4||k==5||k==6||k==7)f=2;
        else{f=0;break;}
}
if(f==2){
            k=0;
        while(e[k]!=NULL){
            num=num*8+(e[k]-'0');k++;}
            k=0;
            if(b[0]=='2'){
                while(num%2!=0){
                            j=num%2;
                c='0'+j;
                g[k]=c;
                k++;num=num/2;}}
        else if(b[0]=='8')printf("%s",argv[3]);
           else if(b[1]=='0'){
                printf("%d",num);
            }
              else {
                    j=0;
                    while(num%16!=0){
                    k=num%16;
                    if(k<=9){
                      char  c='0'+k;
                        g[j]=c;}
                        else if(k==10){
                            g[j]='A';
                        }
                        else if(k==11){
                            g[j]='B';
                        }
                        else if(k==12){
                            g[j]='C';
                        }
                        else if(k==13){
                            g[j]='D';
                        }
                        else if(k==14){
                            g[j]='E';
                        }
                        else g[j]='F';
                      num=num/16;
              j++;
                }}}
                   k=0;
                while(g[k]!='   '){k++;}
                i=k-1;j=0;
                for(;i>=0;i--){
                    printf("%c",g[i]);}
else if(b1[1]=='0'){
    while(b3[i]!=NULL){
        char k=b3[i];
        i++;
        if(k=='0'||k=='1'||k=='2'||k=='3'||k=='4'||k=='5'||k=='6'||k=='7'||k=='8'||k=='9')f=3;
        else {f=0;break;}
}
if(f==3){
            k=0;
        while(e[k]!=NULL){
            num=num*10+(e[k]-'0');k++;}
            k=0;
            if(b[0]=='8'){
                while(num%8!=0){
                            j=num%8;
                c='0'+j;
                g[k]=c;
                k++;num=num/8;}}
        else if(b[0]=='2'){
                while(num%2!=0){
                        j=num%2;
                c='0'+j;
                g[k]=c;
                k++;num=num/2;
        }}
           else if(b[1]=='0'){
                printf("%d",num);
            }
              else {
                    j=0;
                    while(num%16!=0){
                    k=num%16;
                    if(k<=9){
                      char  c='0'+k;
                        g[j]=c;}
                        else if(k==10){
                            g[j]='A';
                        }
                        else if(k==11){
                            g[j]='B';
                        }
                        else if(k==12){
                            g[j]='C';
                        }
                        else if(k==13){
                            g[j]='D';
                        }
                        else if(k==14){
                            g[j]='E';
                        }
                        else g[j]='F';
                      num=num/16;
              j++;
                }}}
                   k=0;
                while(g[k]!='   '){k++;}
                i=k-1;j=0;
                for(;i>=0;i--){
                    printf("%c",g[i]);}
else{
        while(e[i]!=NULL){
        char k=e[i];
        i++;
        if(k=='0'||k=='1'||k=='2'||k=='3'||k=='4'||k=='5'||k=='6'||k=='7'||k=='8'||k=='9'||k=='A'||k=='B'||k=='C'||k=='D'||k=='E'||k=='F')f=4;
        else{f=0;break;}}

            else if(f==4){
            k=0;i=0;
        while(e[k]!=NULL){
            c=e[k];
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
            if(b[0]=='8'){
                while(num%8!=0){
                        j=num%8;
                c='0'+j;
                g[k]=c;
                k++;num=num/8;
                    }}
        else if(b[0]=='2'){
            while(num%2!=0){
                        j=num%2;
                c='0'+j;
                g[k]=c;
                k++;num=num/2;}
        }
           else if(b[1]=='0'){
                printf("%d",num);
            }
              else {
                    j=0;
                    while(num%16!=0){
                    k=num%16;
                    if(k<=9){
                      char  c='0'+k;
                        g[j]=c;}
                        else if(k==10){
                            g[j]='A';
                        }
                        else if(k==11){
                            g[j]='B';
                        }
                        else if(k==12){
                            g[j]='C';
                        }
                        else if(k==13){
                            g[j]='D';
                        }
                        else if(k==14){
                            g[j]='E';
                        }
                        else g[j]='F';
                      num=num/16;
              j++;
                }}}}
                l=0;
                while(g[l]!='   '){k++;}
                i=k-1;j=0;
                for(;i>=0;i--){
                    printf("%c",g[i]);
                }
}

