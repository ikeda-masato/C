/*��11�񉉏K�ۑ�3�@11515009 �r�c���s*/
#include <stdio.h>
#include <string.h>
void sswap(char*,char*);
main(void)
{
 char str1[100],str2[100];
  printf("1 �ڂ̕��������͂��Ă��������F");
  fgets(str1,100,stdin);
  str1[strlen(str1)-1]=0;
  printf("2 �ڂ̕��������͂��Ă��������F");
  fgets(str2,100,stdin);
  str2[strlen(str2)-1]=0;
  printf("===�����O===");
  printf("1 �ڂ̕������%s �ŁC2 �ڂ̕������%s �ł�\n",str1,str2);
  sswap(str1,str2);
  printf("===������===");
  printf("1 �ڂ̕������%s �ŁC2 �ڂ̕������%s �ł�\n",str1,str2);
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