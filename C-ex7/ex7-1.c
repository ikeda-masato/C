/*��7�񉉏K�ۑ�1 11515009 �r�c���s*/
#include <stdio.h>
#include <math.h>
int main(void)
{
  int a,b=0,c[100],d=0;
  double e=0,f=0;
  
  printf("�l������͂��Ă���������");
  scanf("%d",&b);
 
  for(a=0;a<b;a++){
    printf("��%d:",a+1);
    scanf("%d",&c[a]);
    d+=c[a];
  }
  d=d/b;
 printf("���ϓ_:%d\n",d);
  for(a=0;a<b;a++){
    e=c[a]-d;
  }
  e=sqrt(e);
  e=e/d;
  printf("�΍��l:\n");
  for(a=0;a<b;a++){
    f=(c[a]-d)/(e*10)+50;
    printf("��%d:%3.1f\n",a+1,f);
  }
} 