/*‘æ5‰ñ‰‰K‰Û‘è‚Q 11515009 ’r“c«“s*/
#include <stdio.h>
int main(void)
{
  int a,b,c,a1,a2,a3,a4,a5;
  for(;;){
  printf("a,b,c‚Ì’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
  scanf("%d %d %d",&a,&b,&c);
  
  a1=a&b&c;
  a2=a|b|c;
  a3=a&b|c;
  a4=~a&b&~c;
  a5=a^b^c;
  printf(" a & b & c = %d\n a | b | c = %d\n a & b | c = %d\n ^a & b & ^c = %d\n a ^ b ^ c = %d\n",a1,a2,a3,a4,a5);
	}
}

