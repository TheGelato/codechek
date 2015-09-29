#include<stdio.h>
#include<string.h>
#include<math.h>
int main(int argc,char *argv[])
{   
	int flag=0,bascheck,length,i,basmake,ntp,mtp,j;
	int number=0;
	char temp;
	basmake=atoi(argv[2]);
	bascheck=atoi(argv[1]);
    length=strlen(argv[3]);
    for(i=0;i<length;i++)
    { 
		mtp=1;
		//////////////////////////////////// ///////////////////////////////////////////////////////////////
       if (bascheck==2||bascheck==8||bascheck==10)
       		{
       			if (*(argv[3]+i)>=48+bascheck||*(argv[3]+i)<'0')
       	  			{
       					flag=-1;
       					printf("%d",0);
       					return 0;
       				}
       			
       			ntp=*(argv[3]+i)-48;
       			//printf("%d\n",ntp);/////TEST
       			for(j=0;j<length-i-1;j++)
       			mtp=mtp*bascheck;
       			//printf("%d\n",mtp);/////TEST
       			number=number+(mtp*ntp);
                //printf("%d\n",number);/////TEST
       		}
     ////////////////////////////////////////////////////////////////////////////////////////////////////// 
       	if (bascheck==16)
       		{
       			if (!((*(argv[3]+i)<='9'&&*(argv[3]+i)>='0')||(*(argv[3]+i)>='A'&&*(argv[3]+i)<='F')))
       		
       				{
       					flag=-1;
       					printf("%d",0);
       					return 0;
        			}  
                if(*(argv[3]+i)<='9')
                	{
                		ntp=*(argv[3]+i)-48;
       					//printf("%d\n",ntp);/////TEST
       					for(j=0;j<length-i-1;j++)
       					mtp=mtp*bascheck;
       					//printf("%d\n",mtp);/////TEST
       					number=number+(mtp*ntp);
                		//printf("%d\n",number);/////TEST   
                   }             
                else
                	 {
                	 	ntp=*(argv[3]+i)-55;
       					//printf("%d\n",ntp);/////TEST
       					for(j=0;j<length-i-1;j++)
       					mtp=mtp*bascheck;
       					//printf("%d\n",mtp);/////TEST
       					number=number+(mtp*ntp);
                		//printf("%d\n",number);/////TEST   
                	 }
            } 
           

    }       
             i=6;
            char a[7];
   			while(i>=0)
           {
           		temp=number%basmake;
           		if (temp>9)
           			a[i]=temp+55;
           	    else
           			a[i]=(char)temp+48;

           		
                 number=number/basmake;
           		if (number==0)
           		{
           			argv[3]=&a[i];
           			break;
           		}
           		i--;
           	}	
          	 ////////////////////////////////////////////////////////////////////////////////////////////       	   
            printf("%s\n",argv[3]); 
        return 0;

}