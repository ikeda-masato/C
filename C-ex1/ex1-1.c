/*��P�񉉏K�ۑ�P 11515009 �r�c���s*/
#include <stdio.h>

int main(void)
{
  int a;
  float b,c;

  printf("n����͂��Ă�������:");
  scanf("%d",&a);
  c=0;
  for(b=1;b<=a;b++){
    c+=1/b;
  }
  printf("n=%d Sum=%1.2f\n",a,c);
}   
