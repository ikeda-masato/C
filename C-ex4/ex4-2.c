/*��S�񉉏K�ۑ�2 11515009 �r�c���s*/
include <stdio.h>
int d_name(int);
int main(void)
{
  int a;
  printf("���O��\��������񐔂���͂��Ă��������F");
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
