/*第5回演習課題２ 11515009 池田将都*/
#include <stdio.h>
int main(void)
{
  int a,b,c,a1,a2,a3,a4,a5;
  for(;;){
  printf("a,b,cの値を入力してください：");
  scanf("%d %d %d",&a,&b,&c);
  
  a1=a&b&c;
  a2=a|b|c;
  a3=a&b|c;
  a4=~a&b&~c;
  a5=a^b^c;
  printf(" a & b & c = %d\n a | b | c = %d\n a & b | c = %d\n ^a & b & ^c = %d\n a ^ b ^ c = %d\n",a1,a2,a3,a4,a5);
	}
}

