/*��5�񉉏K�ۑ�P 11515009 �r�c���s*/
#include <stdio.h>
int main(void)
{
  int a,b,c,d,z;
  for(;;){
    printf("�W��a,b,c����͂��Ă��������F");
    scanf("%d %d %d",&a,&b,&c);
    
    d=(b*b)-(4*a*c);
    if(d>0){
      printf("������\n");
    }  
     else if(d<0){
      printf("������\n");
    }
    else if(a==0&&b==0){
      printf("���Ȃ�\n");
    }
    else if(d==0){
      printf("�P�̉�\n");
    	}
	}
}
