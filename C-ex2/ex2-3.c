/*��2�񉉏K�ۑ�3�@11515009 �r�c���s*/
include <stdio.h>
int main(void)
{
  int a,max,min,aa[15];
 
  printf("��������͂��Ă��������F");
  for(a=0; a<15; a++){
    scanf("%d",&aa[a]);
  }
   max=aa[0];
   min=aa[0];
  for(a=0; a<15; a++){
     if(max<aa[a+1]){
        max=aa[a+1];
     }
     else if(aa[a+1]<min){
          min=aa[a+1];
        }
  }  
     printf("�ő�l��%d�A�ŏ��l��%d",max,min);
}
