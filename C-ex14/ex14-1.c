/*��14�񉉏K�ۑ�1 11515009 �r�c���s*/
AbCdEfG12345678/*foo�̃t�@�C�����e*/
HijkLnmOPQR0123456789/*bar�̃t�@�C�����e*/
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