#include<stdio.h>
#include<unistd.h>
#include<string.h>
int main(int argc, char *argv[]) /*binary to octal*/
{
int b1=atoi(argv[1]);
int b2=atoi(argv[2]);
int num=atoi(argv[3]);

if(b1==2 && b2==8)
 {int l,g=0,ls=2,a=1,s=0,k=1,bin=0,i=1;
   while((num/10)!=0)
   {
     k= num % 10;
     l= num/10;
     if(k<-1 || k>1)
     {
      printf("%d",0);ls=0;
       break;
     }
    s= s+(a*k);
    a = a*2;
   
     if(l==(0||1) || l==-1)
     s= s+(a*l);
     
     num=l;
   
   
   }
   while(s!=0 && ls==2)
   {
       bin += (s%8)*i;
        s /=8;
        i *=10;
   }if (ls==2)
     printf("%d",bin); 

}

else if(b1==8 && b2==2)              /*octal to binary*/
 {int l1,g1=0,ls1=2,a1=1,s1=0,k1=1;
    
   while((num/10)!=0)
   {
     k1= num % 10;
     l1= num/10;
     if(k1<-7 || k1>7)
     {
      printf("%d",0);ls1=0;
       break;
     }
    
    s1= s1+(a1*k1);
    a1 = a1*8;
    
     if(l1<8 && l1>-8) 
     s1= s1+(a1*l1);
     
     num=l1;
    // printf("%d\n",s1);
    }
  
  int oct[30],i1=0,sum6;
       while(s1!=0)
   {
       oct[i1] = (s1%2);
        s1 /=2;
        ++i1;
      
   }
      if(ls1==2){
     for(sum6=i1-1;sum6>=0;sum6--)
     printf("%d",oct[sum6]);}     


}

else if(b1==8 && b2==10)   /*octa to hexa*/
 {
    char a2[20];int s2=0,n2,q2=0,z2=0,k2=1;int ls2 = 2;
   strcpy(a2,argv[3]);
    n2 = strlen(a2);
  
    while(q2<n2)
     {
     if (a2[q2]<48 || a2[q2]>55){
        printf("%d",0);ls2=0;
          break;}
       q2++;
     }
        while(n2>0 && ls2==2)
       {
       if(a2[n2-1]>47 && a2[n2-1]<56)
         s2 += (a2[n2-1]-48)*(k2);
              
          // printf("%d\n",s2);
             --n2;       
          k2*=8;
       }
int hex6[20],i2=0,j6;
   while(s2!=0 && ls2==2)
   {
    hex6[i2] = (s2%10);
        s2 /=10;
    ++i2;
   } 
   for(j6=i2-1;j6>=0;j6--){
        if(hex6[j6]>9)
            printf("%c",hex6[j6]+55);
        else
            printf("%d",hex6[j6]);}

}

else if(b1==2 && b2==10)   /*hexadecimal to binary*/
 {
    char a3[20];int s3=0,n3,q3=0,z3=0,k3=1;int ls3 = 2;
   strcpy(a3,argv[3]);
    n3 = strlen(a3);
  
    while(q3<n3)
     {
     if (a3[q3]<48 || a3[q3]>49){
        printf("%d",0);ls3=0;
          break;}
       q3++;
     }
        while(n3>0 && ls3==2)
       {
       if(a3[n3-1]>47 && a3[n3-1]<56)
         s3 += (a3[n3-1]-48)*(k3);
              
    //       printf("%d\n",s3);
             --n3;       
          k3*=2;
       }
int hex7[20],i3=0,j7;
   while(s3!=0 && ls3==2)
   {
    hex7[i3] = (s3%10);
        s3 /=10;
    ++i3;
   } 
   for(j7=i3-1;j7>=0;j7--){
        if(hex7[j7]>9)
            printf("%c",hex7[j7]+55);
        else
            printf("%d",hex7[j7]);}

}


else if(b1==10 && b2==2)              /*decimal to binary*/
 {int l4,g4=0,ls4=2,a4=1,s4=0,k4=1;
    
   while((num/10)!=0)
   {
     k4= num % 10;
     l4= num/10;
     if(k4<-9 || k4>9)
     {
      printf("%d",0);ls4=0;
       break;
     }
    
    s4= s4+(a4*k4);
    a4 = a4*10;
    
     if(l4<10 && 10>-8) 
     s4= s4+(a4*l4);
     
     num=l4;
//    printf("%d\n",s4);
   
   }
  
  int dec_bin[20];int i4=0,sum3;
       while(s4!=0)
   {
       dec_bin[i4] = (s4%2);
        s4 /=2;
         ++i4;
   }
    if (ls4==2){
      for (sum3 = i4-1;sum3>=0;sum3--)
       printf("%d",dec_bin[sum3]);}

}

else if(b1==2 && b2==16)   /*binary to hexadecimal*/
 {
    char a5[20];int s5=0,n5,q5=0,z5=0,k5=1;int ls5 = 2;
   strcpy(a5,argv[3]);
    n5 = strlen(a5);
  
    while(q5<n5)
     {
     if (a5[q5]<48 || a5[q5]>49){
        printf("%d",0);ls5=0;
          break;}
       q5++;
     }
        while(n5>0 && ls5==2)
       {
       if(a5[n5-1]>47 && a5[n5-1]<50)
         s5 += (a5[n5-1]-48)*(k5);
              
         //  printf("%d\n",s5);
             --n5;       
          k5*=2;
       }
int hex1[20],i5=0,j5;
   while(s5!=0 && ls5==2)
   {
    hex1[i5] = (s5%16);
        s5 /=16;
    ++i5;
   } 
   for(j5=i5-1;j5>=0;j5--){
        if(hex1[j5]>9)
            printf("%c",hex1[j5]+55);
        else
            printf("%d",hex1[j5]);}

}

else if(b1==8 && b2==16)   /*octal to hexa*/
 {
    char a7[20];int s7=0,n7,q7=0,z7=0,k7=1;int ls7 = 2;
   strcpy(a7,argv[3]);
    n7 = strlen(a7);
  
    while(q7<n7)
     {
     if (a7[q7]<48 || a7[q7]>55){
        printf("%d",0);ls7=0;
          break;}
       q7++;
     }
        while(n7>0 && ls7==2)
       {
       if(a7[n7-1]>47 && a7[n7-1]<56)
         s7 += (a7[n7-1]-48)*(k7);
              
  //         printf("%d\n",s7);
             --n7;       
          k7*=8;
       }
int hex3[20],i7=0,j2;
   while(s7!=0 && ls7==2)
   {
    hex3[i7] = (s7%16);
        s7 /=16;
    ++i7;
   } 
   for(j2=i7-1;j2>=0;j2--){
        if(hex3[j2]>9)
            printf("%c",hex3[j2]+55);
        else
            printf("%d",hex3[j2]);}

}

else if(b1==10 && b2==16)   /*hexadecimal to binary*/
 {
    char a6[20];int s6=0,n6,q6=0,z6=0,k6=1;int ls6 = 2;
   strcpy(a6,argv[3]);
    n6 = strlen(a6);
  
    while(q6<n6)
     {
     if (a6[q6]<48 || a6[q6]>57){
        printf("%d",0);ls6=0;
          break;}
       q6++;
     }
        while(n6>0 && ls6==2)
       {
       if(a6[n6-1]>47 && a6[n6-1]<58)
         s6 += (a6[n6-1]-48)*(k6);
              
//           printf("%d\n",s6);
             --n6;       
          k6*=8;
       }
int hex2[20],i6=0,j3;
   while(s6!=0 && ls6==2)
   {
    hex2[i6] = (s6%16);
        s6 /=16;
    ++i6;
   } 
   for(j3=i6-1;j3>=0;j3--){
        if(hex2[j3]>9)
            printf("%c",hex2[j3]+55);
        else
            printf("%d",hex2[j3]);}

}

else if(b1==10 && b2==8)   /*hexadecimal to binary*/
 {
    char a8[20];int s8=0,n8,q8=0,z8=0,k8=1;int ls8 = 2;
   strcpy(a8,argv[3]);
    n8 = strlen(a8);
  
    while(q8<n8)
     {
     if (a8[q8]<48 || a8[q8]>57){
        printf("%d",0);ls8=0;
          break;}
       q8++;
     }
        while(n8>0 && ls8==2)
       {
       if(a8[n8-1]>47 && a8[n8-1]<58)
         s8 += (a8[n8-1]-48)*(k8);
              
          // printf("%d\n",s8);
             --n8;       
          k8*=10;
       }
int hex5[20],i8=0,j4;
   while(s8!=0 && ls8==2)
   {
    hex5[i8] = (s8%8);
        s8 /=8;
    ++i8;
   } 
   for(j4=i8-1;j4>=0;j4--){
        if(hex5[j4]>9)
            printf("%c",hex5[j4]+55);
        else
            printf("%d",hex5[j4]);}

}

else if(b1==16 && b2==2)   /*hexadecimal to binary*/
 {
    char a[20];int s9=0,n,q=0,z=0,k9=1;int ls9 = 2;
   strcpy(a,argv[3]);
    n = strlen(a);
  
    while(q<n)
     {
     if (a[q]<48 || a[q]>70 || (a[q]<65 && a[q]>57)){
        printf("%d",0);ls9=0;
          break;}
       q++;
     }
        while(n>0 && ls9==2)
       {
       if(a[n-1]>47 && a[n-1]<58)
         s9 += (a[n-1]-48)*(k9);

       else if (a[n-1]>64 && a[n-1]<71)
          s9+= (a[n-1]-55)*k9;
              
//           printf("%d\n",s9);
             --n;       
          k9*=16;
       }
        int hexdec_bin[20];int i9=0,sum;
       while(s9!=0)
   {
       hexdec_bin[i9] = (s9%2);
        s9 /=2;
         ++i9;
   }
    if (ls9==2){
      for (sum = i9-1;sum>=0;sum--)
       printf("%d",hexdec_bin[sum]);}
  }


else if(b1==16 && b2==8) /*hexadecimal to octal*/
 {
    char a1[20];int s10=0,n1,q1=0,z1=0,k10=1;int ls10 = 2;
   strcpy(a1,argv[3]);
    n1 = strlen(a1);
  
    while(q1<n1)
     {
     if (a1[q1]<48 || a1[q1]>70 || (a1[q1]<65 && a1[q1]>57)){
        printf("%d",0);ls10=0;
          break;}
       q1++;
     }
        while(n1>0 && ls10==2)
       {
       if(a1[n1-1]>47 && a1[n1-1]<58)
         s10 += (a1[n1-1]-48)*(k10);

       else if (a1[n1-1]>64 && a1[n1-1]<71)
          s10+= (a1[n1-1]-55)*k10;
              
  //         printf("%d\n",s10);
             --n1;       
          k10*=16;
       }
        int hexdec_oct[20];int i10=0,sum1;
       while(s10!=0)
   {
       hexdec_oct[i10] = (s10%8);
        s10 /=8;
         ++i10;
   }
    if (ls10==2){
      for (sum1 = i10-1;sum1>=0;sum1--)
       printf("%d",hexdec_oct[sum1]);}
  }


 else if(b1==16 && b2==10)  /*hexa to decimal*/
 {
    char a2[20];int s11=0,n2,q2=0,z2=0,k11=1;int ls11 = 2;
   strcpy(a2,argv[3]);
    n2 = strlen(a2);
  
    while(q2<n2)
     {
     if (a2[q2]<48 || a2[q2]>70 || (a2[q2]<65 && a2[q2]>57)){
        printf("%d",0);ls11=0;
          break;}
       q2++;
     }
        while(n2>0 && ls11==2)
       {
       if(a2[n2-1]>47 && a2[n2-1]<58)
         s11 += (a2[n2-1]-48)*(k11);

       else if (a2[n2-1]>64 && a2[n2-1]<71)
          s11+= (a2[n2-1]-55)*k11;
              
    //       printf("%d\n",s11);
             --n2;       
          k11*=16;
       }
        int hexdec_dec[20];int i11=0,sum2;
       while(s11!=0)
   {
       hexdec_dec[i11] = (s11%10);
        s11 /=10;
         ++i11;
   }
    if (ls11==2){
      for (sum2 = i11-1;sum2>=0;sum2--)
       printf("%d",hexdec_dec[sum2]);}
  }


else if(b1==2 && b2==2)   /*when both base is same*/
{int k12,l12,ls12=2;
    while(num!=0)
   {
     k12= num % 10;
     num /=10;
     if(k12<-1 || k12>1)
     {
      printf("%d",0);ls12=0;
       break;
     }
     }
    if(ls12==2)
    printf("%s",argv[3]);
}

else if(b1==8 && b2==8)
{int k13,l13,ls13=2;
    while(num!=0)
   {
     k13= num % 10;
     num /=10;
     if(k13<-7 || k13>7)
     {
      printf("%d",0);ls13=0;
       break;
     }
     }
    if(ls13==2)
    printf("%s",argv[3]);
}

else if(b1==10 && b2==10)
{int k13,l13,ls13=2;
    while(num!=0)
   {
     k13= num % 10;
     num /=10;
     if(k13<-10 || k13>10)
     {
      printf("%d",0);ls13=0;
       break;
     }
     }
    if(ls13==2)
    printf("%s",argv[3]);
}
else if(b1==16 && b2==16)/*when both base are hexa*/
{char a3[20];int n3,q3=0;int ls14 = 2;
  strcpy(a3,argv[3]);
    n3 = strlen(a3);
  
    while(q3<n3)
     {
     if (a3[q3]<48 || a3[q3]>70 || (a3[q3]<65 && a3[q3]>57)){
        printf("%d",0);ls14=0;
          break;}
       q3++;
     }
     if(ls14==2 )
     printf("%s",argv[3]);
}
}
