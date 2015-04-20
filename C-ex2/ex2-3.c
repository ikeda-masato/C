/*第2回演習課題3　11515009 池田将都*/
include <stdio.h>
int main(void)
{
  int a,max,min,aa[15];
 
  printf("数字を入力してください：");
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
     printf("最大値は%d、最小値は%d",max,min);
}
