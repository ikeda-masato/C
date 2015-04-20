/*‘æ‚P‰ñ‰‰K‰Û‘è‚R@11515009 ’r“c«“s*/
#include <stdio.h>
int main(void)
{
  int a;
  float b,c=1,d=1;
  
  printf("n‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
  scanf("%d",&a);
 
  for(b=1;b<=a;b++){
    d*=b;
    c+=1/d;
  }
  printf("n=%d Sum=%1.2f\n",a,c);
}


