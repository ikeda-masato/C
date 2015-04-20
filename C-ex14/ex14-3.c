/*‘æ14‰ñ‰‰K‰Û‘è3 11515009 ’r“c«“s*/
#include<stdio.h>
#include<stdlib.h>
main(int argc,char *argv[])
{
  FILE *fp,*fp2;
  char c,c2;
  if(argc<3){
    printf("Usage: %s filename\n",argv[0]);
    exit(1);
  }
  fp=fopen(argv[1],"r");
  fp2=fopen(argv[2],"r");
  if(fp==NULL){
    printf("Can't open %s\n",argv[1]);
    exit(1);
  }
  while(1) {
    c=fgetc(fp);
    c2=fgetc(fp2);
    if(c!=c2){
      printf("differ\n");
      break;
    }
    if(c==EOF){
      printf("same\n");
      break;
    }
  }
}