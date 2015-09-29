#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{unsigned long int i,j,a,b,c,d,n=strlen(argv[3]);

if(argv[1][0]=='2' && argv[1][1]=='\0')
{
  c=1;

  for (i=0;i<strlen(argv[3]);i++)
  {
    if(argv[3][i]<48||argv[3][i]>49)
     {
      c=0;
      break;
     }
  }

    if(c==1)
    {  a=0;
      for (i=0;i<n;i++)
       { int k=(argv[3][n-1-i]-48);
         for (j=0;j<i;j++)
           {k=k*2;
            }
        a=a+k;
        }
        if(argv[2][0]=='2' && argv[2][1]=='\0')
        {printf("%s\n",argv[3]);
         }

        else if (argv[2][0]=='8' && argv[2][1]=='\0')
        {int e=a;i=0;
           while(e!=0)
           {e=e/8;
            i++;
            } 
           b=i;
            char z[b];
            z[b]='\0';
           for(i=0;i<b;i++)
           {
            z[b-i-1]=48+a%8;
            a=a/8;
            }
            printf("%s\n",z);
           }         
          else if(argv[2][0]=='1' && argv[2][1]=='0' && argv[2][2]=='\0')
           {{int e=a;i=0;
           while(e!=0)
           {e=e/10;
            i++;
            } 
           b=i;
            char z[b];
            z[b]='\0';
           for(i=0;i<b;i++)
           {
            z[b-i-1]=48+a%10;
            a=a/10;
            }
            printf("%s\n",z);
           }         
            }
           else if(argv[2][0]=='1' && argv[2][1]=='6' && argv[2][2]=='\0')
          {int e=a;i=0;
           while(e!=0)
           {e=e/16;
            i++;
            } 
           b=i;
            char z[b];
            z[b]='\0';
           for(i=0;i<b;i++)
           {if(a%16<10)
            z[b-i-1]=48+a%16;
            else if(a%16>9)
            z[b-1-i]=55+a%16;
            a=a/16;
            }
            printf("%s\n",z);
           } 
      else
           { printf("0\n");
           }        


      }
      else
      { printf("0\n");
      }



 
}
else if(argv[1][0]=='8' && argv[1][1]=='\0')
{
  c=1;
  for (i=0;i<strlen(argv[3]);i++)
  {
    if(argv[3][i]<48||argv[3][i]>55)
     {
      c=0;
      break;
     }
  }

    if(c==1)
    {  a=0;
      for (i=0;i<n;i++)
       { int k=(argv[3][n-1-i]-48);
         for (j=0;j<i;j++)
           {k=k*8;
            }
        a=a+k;
        }
        if(argv[2][0]=='8' && argv[2][1]=='\0')
        {printf("%s\n",argv[3]);
         }

        else if (argv[2][0]=='2' && argv[2][1]=='\0')
        {int e=a;i=0;
           while(e!=0)
           {e=e/2;
            i++;
            } 
           b=i;
            char z[b];
            z[b]='\0';
           for(i=0;i<b;i++)
           {
            z[b-i-1]=48+a%2;
            a=a/2;
            }
            printf("%s\n",z);
           }         
          else if(argv[2][0]=='1' && argv[2][1]=='0' && argv[2][2]=='\0')
           {int e=a;i=0;
           while(e!=0)
           {e=e/10;
            i++;
            } 
           b=i;
            char z[b];
            z[b]='\0';
           for(i=0;i<b;i++)
           {
            z[b-i-1]=48+a%10;
            a=a/10;
            }
            printf("%s\n",z);
           }         
           else if(argv[2][0]=='1' && argv[2][1]=='6' && argv[2][2]=='\0')
          { int e=a;i=0;
           while(e!=0)
           {e=e/16;
            i++;
            } 
            b=i;
            char z[b];
            z[b]='\0';
           for(i=0;i<b;i++)
           {if(a%16<10)
            z[b-i-1]=48+a%16;
            else if(a%16>9)
            z[b-1-i]=55+a%16;
            a=a/16;
            }
            printf("%s\n",z);
           }         
        else
           { printf("0\n");
           }

      }
      else
      { printf("0\n");
      }



 
}
else if(argv[1][0]=='1'&&argv[1][1]=='0'&& argv[1][2]=='\0')
{
  c=1;

  for (i=0;i<strlen(argv[3]);i++)
  {
    if(argv[3][i]<48||argv[3][i]>57)
     {
      c=0;
      break;
     }
  }

    if(c==1)
    {  a=0;
      for (i=0;i<n;i++)
       { int k=(argv[3][n-1-i]-48);
         for (j=0;j<i;j++)
           {k=k*10;
            }
        a=a+k;
        }
        if(argv[2][0]=='1'&& argv[2][1]=='0' && argv[2][2]=='\0')
        {printf("%s\n",argv[3]);
         }

        else if (argv[2][0]=='2' && argv[2][1]=='\0')
        {int e=a;i=0;
           while(e!=0)
           {e=e/2;
            i++;
            } 
           b=i;
            char z[b];
            z[b]='\0';
           for(i=0;i<b;i++)
           {
            z[b-i-1]=48+a%2;
            a=a/2;
            }
            printf("%s\n",z);
           }         
          else if(argv[2][0]=='8' && argv[2][1]=='\0')
          {int e=a;i=0;
           while(e!=0)
           {e=e/8;
            i++;
            } 
           b=i;
            char z[b];
            z[b]='\0';
           for(i=0;i<b;i++)
           {
            z[b-i-1]=48+a%8;
            a=a/8;
            }
            printf("%s\n",z);
           }         
          else if(argv[2][0]=='1' && argv[2][1]=='6' && argv[2][2]=='\0')
          {int e=a;i=0;
           while(e!=0)
           {e=e/16;
            i++;
            } 
           b=i;
            char z[b];
            z[b]='\0';
           for(i=0;i<b;i++)
           {if(a%16<10)
            z[b-i-1]=48+a%16;
            else if(a%16>9)
            z[b-1-i]=55+a%16;
            a=a/16;
            }
            printf("%s\n",z);
           }         
             
       else
           { printf("0\n");
           }

      }
      else
      { printf("0\n");
      }



 
}
else if(argv[1][0]=='1'&&argv[1][1]=='6' && argv[1][2]=='\0')
{
  c=1;

  for (i=0;i<strlen(argv[3]);i++)
  {
    if(argv[3][i]<48||(argv[3][i]>57 && argv[3][i]<65)||argv[3][i]>70)
     {
      c=0;
      break;
     }
  }

    if(c==1)
    {  a=0;
      for (i=0;i<n;i++)
       { if(argv[3][n-1-i]>47 && argv[3][n-1-i]<58)
         {int k=(argv[3][n-1-i]-48);
         for (j=0;j<i;j++)
           {k=k*16;
            }
           a=a+k;
          }
         else if(argv[3][n-1-i]>64 && argv[3][n-1-i]<71)
         {int k=(argv[3][n-1-i]-55);
         for (j=0;j<i;j++)
           {k=k*16;
            }
           a=a+k;
          }
         
        
         
        }
        if(argv[2][0]=='1'&& argv[2][1]=='0' && argv[2][2]=='\0')
        {int e=a;i=0;
           while(e!=0)
           {e=e/10;
            i++;
            } 
           b=i;
            char z[b];
            z[b]='\0';
           for(i=0;i<b;i++)
           {
            z[b-i-1]=48+a%10;
            a=a/10;
            }
            printf("%s\n",z);
           }         
         

        else if (argv[2][0]=='2'&& argv[2][1]=='\0')
        {int e=a;i=0;
           while(e!=0)
           {e=e/2;
            i++;
            } 
           b=i;
            char z[b];
            z[b]='\0';
           for(i=0;i<b;i++)
           {
            z[b-i-1]=48+a%2;
            a=a/2;
            }
            printf("%s\n",z);
           }         
          else if(argv[2][0]=='8' && argv[2][1]=='\0')
          {int e=a;i=0;
           while(e!=0)
           {e=e/8;
            i++;
            } 
           b=i;
            char z[b];
            z[b]='\0';
           for(i=0;i<b;i++)
           {
            z[b-i-1]=48+a%8;
            a=a/8;
            }
            printf("%s\n",z);
           }         
          else if (argv[2][0]=='1'&& argv[2][1]=='6' && argv[2][2]=='\0')
          { printf("%s\n",argv[3]);
           }
             
          else
           { printf("0\n");
           }
      }
      else
      { printf("0\n");
      }



 
}
else
{printf("0\n");
}
return 0;
}
