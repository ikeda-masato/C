/*‘æ12‰ñ‰‰K‰Û‘è2 11515009 ’r“c«“s*/
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
    else printf("+A-AxA/‚Ì‚¢‚¸‚ê‚©‚ğ³‚µ‚­“ü—Í\n");{
    }
   printf("%f\n",sum);
      
}