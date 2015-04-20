/*‘æ14‰ñ‰‰K‰Û‘è2 11515009 ’r“c«“s*/
#include<stdio.h>
#include<stdlib.h>
main(int argc,char *argv[])
{
  FILE *fp,*fp2;
  char c;
  if(argc<3){
    printf("Usage: %s filename\n",argv[0]);
    exit(1);
  }
  fp=fopen(argv[1],"r");
  fp2=fopen(argv[2],"w");
  if(fp==NULL){
    printf("Can't open %s\n",argv[1]);
    exit(1);
  }
  while((c=fgetc(fp))!=EOF){
    putchar(c);
    fputc(c,fp2);
  }
  fclose(fp);
  fclose(fp2);
}