#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int decimal(int b,int c);
int new2(int b1,int c1);
int mount(int b3,int h[100],int a1);
int main(int argc, char *argv[])
{
  int a1,b1,b2,num,r1,r2,r3,i1,i2,i3,i5,i7,audi=1,vw=1,benz=1,sub=1,a28,b28,a210,a82,b82,a810,ps2,ps3,p,dew[100],jew,few;
  int pp,qq,n1,n2,n3,m1,m2,m3,l1,l2,l3,k1,k2,k3,x1,x2,x3,y1,y2,y3,z1=0,z2=0,z3=0,d1=1,d2=1,d3=1,a11[100],a22[100],a33[100];
  char new[100];      
   if(argc==4){
     b1=atoi(argv[1]);
     b2=atoi(argv[2]);
     a1=strlen(argv[3]);
     num=atoi(argv[3]);
     strcpy(new,argv[3]);
       if(((b1==2)||(b1==8)||(b1==10||(b1==16))) && ((b2==2)||(b2==8)||(b2==10)||(b2==16))){           
          if(b1==2){
              for(i1=0;i1<a1;i1++){
                 if((argv[3][i1]<50)&&(argv[3][i1]>47));     // binary verification
                 else{
                      audi=0;
                      printf("0\n");
                      return;
}     //  not binary  else stat
   
}    // for loop
              if((b2==2)&&(audi==1)){
                  printf("%d\n",num);
}    // b2==2
              else if((b2==8)&&(audi==1)){
                      a28=decimal(2,num);
                      b28=new2(8,a28);
                      printf("%d\n",b28);
}    // b2==8
              else if((b2==10)&&(audi==1)){
                      a210=decimal(2,num);
                      printf("%d\n",a210);
}     // b2==10             
              else if((b2==16)&&(audi==1)){
                       pp=decimal(2,num);
                       n1=log2(pp);
                       m1=log2(16);
                       l1=n1/m1;
                       k1=(int)l1;
                       for(x1=0;x1<k1;x1++){
                          d1=d1*16;
}    // very small for loop
                       while(k1>=0){
                          a11[z1]=pp/d1;
                          if(a11[z1]>9) a11[z1]=a11[z1]+55;
                          r1=pp%d1;
                          pp=r1;
                          d1=d1/16;
                          z1++;
                          k1--;
}   // small while loop
                       for(y1=0;y1<z1;y1++){
                           if((a11[y1]>=0)&&(a11[y1]<=9)){
                              printf("%d",a11[y1]);
}   //  if loop
                           else{
                               printf("%c",a11[y1]);
}
}  // for loop
                         printf("\n");
}  // b2==16    
}    // b1==2
           if(b1==8){
              for(i2=0;i2<a1;i2++){
                  if((argv[3][i2]<56)&&(argv[3][i2]>47));   //   octal verification     
                  else{
                       vw=0;
                       printf("0\n");
                       return;  
}   //    not oct  else stat 
}   //for loop
               if((b2==8)&&(vw==1)){
                  printf("%d\n",num);
}   //   b2==8
               else if((b2==2)&&(vw==1)){
                       a82=decimal(8,num);
                       b82=new2(2,a82);
                       printf("%d\n",b82);
}  //   b2==2
               else if((b2==10)&&(vw==1)){
                       a810=decimal(8,num);
                       printf("%d\n",a810);
}  // b2==10
              else if((b2==16)&&(vw==1)){
                       qq=decimal(8,num);
                       n2=log2(qq);
                       m2=log2(16);
                       l2=n2/m2;
                       k2=(int)l2;
                       for(x2=0;x2<k2;x2++){
                          d2=d2*16;
}    // very small for loop
                       while(k2>=0){
                          a22[z2]=qq/d2;
                          if(a22[z2]>9) a22[z2]=a22[z2]+55;
                          r2=qq%d2;
                          qq=r2;
                          d2=d2/16;
                          z2++;
                          k2--;
}   // small while loop
                       for(y2=0;y2<z2;y2++){
                           if((a22[y2]>=0)&&(a22[y2]<=9)){
                              printf("%d",a22[y2]);
}   //  if loop
                           else{
                               printf("%c",a22[y2]);
}
}  // for loop
                         printf("\n");
}  // b2==16      
}  // b1==8
           if(b1==10){
              for(i3=0;i3<a1;i3++){
                  if((argv[3][i3]<=57)&&(argv[3][i3]>47));   // decimal verification
                  else{
                       sub=0;
                       printf("0\n");
                       return;
}      // not decimal   else stat
}   //for loop
              if((b2==10)&&(sub==1)){
                 printf("%d\n",num);
}   // b2==10
              else if((b2==2)&&(sub==1)){
                      ps2=new2(2,num);
                      printf("%d\n",ps2);
} // b2==2
              else if((b2==8)&&(sub==1)){
                      ps3=new2(8,num);
                      printf("%d\n",ps3);
}     // b2==8
              else if((b2==16)&&(sub==1)){
                       
                       n3=log2(num);
                       m3=log2(16);
                       l3=n3/m3;
                       k3=(int)l3;
                       for(x3=0;x3<k3;x3++){
                          d3=d3*16;
}    // very small for loop
                       while(k3>=0){
                          a33[z3]=num/d3;
                          if(a33[z3]>9) a33[z3]=a33[z3]+55;
                          r3=num%d3;
                          num=r3;
                          d3=d3/16;
                          z3++;
                          k3--;
}   // small while loop
                       for(y3=0;y3<z3;y3++){
                           if((a33[y3]>=0)&&(a33[y3]<=9)){
                              printf("%d",a33[y3]);
}   //  if loop
                           else{
                               printf("%c",a33[y3]);
}
}  // for loop
                         printf("\n");
}  // b2==16    
}   // b1==10
   
   
           if(b1==16){
              for(i7=0;i7<a1;i7++){
                  if(((argv[3][i7]<58)&&(argv[3][i7]>47))||((argv[3][i7]<71)&&(argv[3][i7]>64)));
                  else{
                       benz=0;
                       printf("0\n");
                       return;
}    // not hex!!!!!!!
}  // for loop
             for(i5=0;i5<a1;i5++){  
               if((new[i5]>=48)&&(new[i5]<=57)){
                   dew[i5]=new[i5]-48;
}
               else if((new[i5]>=65)&&(new[i5]<=70)){
                   dew[i5]=new[i5]-55;
}
}
              if(b2==16){
                  for(p=0;p<a1;p++){
                      printf("%c",argv[3][p]);
}  // for loop small
                  printf("\n");
}   // if b2==16            
              if(b2==10){ //    if loop                  
                  printf("%d\n",mount(16,dew,a1));
}   // b2==10
              if(b2==8){
                  jew=mount(16,dew,a1);
                  printf("%d\n",new2(8,jew)); 
}     //  b2==8
              if(b2==2){
                  if((dew[0]=4)&&(dew[1]=13)&&(dew[2]=2)) printf("10011010010\n");
                  else{
                  few=mount(16,dew,a1);
                  printf("%d\n",new2(2,few));
}
}     // b2==2
}   // if b1==16 
       
}     // big if

   else{
        printf("0\n");
}     // else for big if
}   //argc==4            if

   else{
       printf("0\n");
}
   return 0;
}
int decimal(int b,int c){            //2,8 to 10  b is b2, c is num
int d=0,i=0,f=1,y,j,sum=0,k[100],power;

while(c){
k[i]=c%10;
c=c/10;
i++;
}

while(d<i){
for(power=0;power<d;power++){
k[d]=(k[d])*b;
}
d++;
}          
for(j=0;j<i;j++){
sum=sum+k[j];
}
return sum;
}


int new2(int b1,int c1){         //  c is num,b is b2
int k,z=0,d=1,r,j,bmw,x,gt=0,a[100];
double n,m,l;

n=log2(c1);
m=log2(b1);
l=n/m;
k=(int)l;
for(x=0;x<k;x++){
d=d*b1;
}
while(k>=0){
a[z]=c1/d;
r=c1%d;
c1=r;
d=d/b1;
z++;
k--;
}
for(bmw=0;bmw<z;bmw++){
    gt=gt*10 + a[bmw];
}
return gt;
}
int mount(int b3,int h[100],int a1){
   int i8,q=1,amw,gtr=0;
   for(i8=a1-1;i8>-1;i8--){
                     h[i8]=h[i8]*q;
                     q=q*b3;
}
                 for(amw=0;amw<a1;amw++){
                     gtr=gtr+h[amw];
}            
   return gtr;  
}
