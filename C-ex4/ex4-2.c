/*第４回演習課題2 11515009 池田将都*/
include <stdio.h>
int d_name(int);
int main(void)
{
  int a;
  printf("名前を表示させる回数を入力してください：");
  scanf("%d",&a);
  d_name(a);
}
d_name(int x)
{
  if(x<=0){
    return 1;
 }   
  else{
    printf("Ikeda Msato\n"); 
    return d_name(x-1);
  }              
}
