/*第12回演習課題2 11515009 池田将都*/
#include<stdio.h>
#include<stdlib.h>

main(int argc,char *argv[])
{
  float sum;
     if(strcmp(argv[2],"+")==0){
       sum=atof(argv[1])+atof(argv[3]);
      }
    else  if(strcmp(argv[2],"-")==0){
      sum=atof(argv[1])-atof(argv[3]);
    }
    else  if(strncmp(argv[2],"x",1)==0){
      sum=atof(argv[1])*atof(argv[3]);
    }
    else  if(strncmp(argv[2],"/",1)==0){
      sum=atof(argv[1])/atof(argv[3]);
    }
    else printf("+、-、x、/のいずれかを正しく入力\n");{
    }
   printf("%f\n",sum);
      
}