/*第11回演習課題3　11515009 池田将都*/
#include <stdio.h>
#include <string.h>
void sswap(char*,char*);
main(void)
{
 char str1[100],str2[100];
  printf("1 つ目の文字列を入力してください：");
  fgets(str1,100,stdin);
  str1[strlen(str1)-1]=0;
  printf("2 つ目の文字列を入力してください：");
  fgets(str2,100,stdin);
  str2[strlen(str2)-1]=0;
  printf("===交換前===");
  printf("1 つ目の文字列は%s で，2 つ目の文字列は%s です\n",str1,str2);
  sswap(str1,str2);
  printf("===交換後===");
  printf("1 つ目の文字列は%s で，2 つ目の文字列は%s です\n",str1,str2);
}

void sswap(char *p,char *q)
{
  char tmp[50],i;

  for(i=0;i<50;i++){
  tmp[i]=*p;
  *p=*q;
  *q=tmp[i];

  p++;
  q++;
  }
}