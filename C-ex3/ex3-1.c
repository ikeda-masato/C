/*��3�񉉏K�ۑ�1 11515009 �r�c���s*/
#include <stdio.h>
int kaijo(int);
int main(void)
{
 
  int a;

  printf("n����͂��Ă��������F");
  scanf("%d",&a);
  printf("%d! -----> %d\n",a,kaijo(a));
}
int kaijo(int x)
{
  int y,z=1;
  
  for(y=1;y<=x;y++){
    z*=y;
  }
  return z;
}
