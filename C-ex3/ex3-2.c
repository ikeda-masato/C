/*第3回演習課題2 11515009 池田将都*/
#include <stdio.h>
float kaijo(float);
int main(void)
{
 
  int a;
  float b,c=1;

  printf("ループ回数を入力：");
  scanf("%d",&a);
    for(b=1;b<=a;b++){
      c+=1/kaijo(b);
    }
  printf("e = %f\n",c);
}
float kaijo(float x)
{
  float y,z=1;
  
  for(y=1;y<=x;y++){
    z*=y;
  }
  return z;
}
