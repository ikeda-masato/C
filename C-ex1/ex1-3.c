/*第１回演習課題３　11515009 池田将都*/
#include <stdio.h>
int main(void)
{
  int a;
  float b,c=1,d=1;
  
  printf("nを入力してください：");
  scanf("%d",&a);
 
  for(b=1;b<=a;b++){
    d*=b;
    c+=1/d;
  }
  printf("n=%d Sum=%1.2f\n",a,c);
}


