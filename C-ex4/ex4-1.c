/*‘æ4‰ñ‰‰K‰Û‘è1 11515009 ’r“c«“s*/
#include <stdio.h>
int comb(int,int);
int main(void)
{

  int n,r;
    printf("n‚Ær‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
    scanf("%d %d",&n,&r);
    printf("%d C %d = %d\n",n,r,comb(n,r));
}
int comb(int x,int y)
{
  if(y==1)
    return x;
  else return comb(x,y-1)*(x-y+1)/y;
}
