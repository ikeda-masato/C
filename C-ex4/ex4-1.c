/*第4回演習課題1 11515009 池田将都*/
#include <stdio.h>
int comb(int,int);
int main(void)
{

  int n,r;
    printf("nとrを入力してください：");
    scanf("%d %d",&n,&r);
    printf("%d C %d = %d\n",n,r,comb(n,r));
}
int comb(int x,int y)
{
  if(y==1)
    return x;
  else return comb(x,y-1)*(x-y+1)/y;
}
