/*第14回演習課題1 11515009 池田将都*/
AbCdEfG12345678/*fooのファイル内容*/
HijkLnmOPQR0123456789/*barのファイル内容*/
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
  fp2=fopen(argv[2],"r");
  if(fp==NULL){
    printf("Can't open %s\n",argv[1]);
    exit(1);
  }
  while((c=fgetc(fp))!=EOF){
    putchar(c);
  }
  while((c=fgetc(fp2))!=EOF){
    putchar(c);
  }
  fclose(fp);
  fclose(fp2);
}