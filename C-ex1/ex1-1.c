/*第１回演習課題１ 11515009 池田将都*/
#include <stdio.h>

int main(void)
{
  int a;
  float b,c;

  printf("nを入力してください:");
  scanf("%d",&a);
  c=0;
  for(b=1;b<=a;b++){
    c+=1/b;
  }
  printf("n=%d Sum=%1.2f\n",a,c);
}   
