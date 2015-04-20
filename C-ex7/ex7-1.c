/*第7回演習課題1 11515009 池田将都*/
#include <stdio.h>
#include <math.h>
int main(void)
{
  int a,b=0,c[100],d=0;
  double e=0,f=0;
  
  printf("人数を入力してください＞");
  scanf("%d",&b);
 
  for(a=0;a<b;a++){
    printf("＃%d:",a+1);
    scanf("%d",&c[a]);
    d+=c[a];
  }
  d=d/b;
 printf("平均点:%d\n",d);
  for(a=0;a<b;a++){
    e=c[a]-d;
  }
  e=sqrt(e);
  e=e/d;
  printf("偏差値:\n");
  for(a=0;a<b;a++){
    f=(c[a]-d)/(e*10)+50;
    printf("＃%d:%3.1f\n",a+1,f);
  }
} 