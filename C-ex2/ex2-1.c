/*第2回演習課題1 11515009 池田将都*/
#include <stdio.h>
int main(void)
{

  int a,b,aa[]={1,12,23,34,45,56,67,78,89,90};

  printf("添字を入力してください:");
  scanf("%d",&a);
 
  printf("配列要素は%dです.\n",aa[a-1]);
}
