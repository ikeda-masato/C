/*第3回演習課題1 11515009 池田将都*/
#include <stdio.h>
int kaijo(int);
int main(void)
{
 
  int a;

  printf("nを入力してください：");
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
