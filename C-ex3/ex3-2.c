/*��3�񉉏K�ۑ�2 11515009 �r�c���s*/
#include <stdio.h>
float kaijo(float);
int main(void)
{
 
  int a;
  float b,c=1;

  printf("���[�v�񐔂���́F");
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
