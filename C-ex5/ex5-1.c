/*第5回演習課題１ 11515009 池田将都*/
#include <stdio.h>
int main(void)
{
  int a,b,c,d,z;
  for(;;){
    printf("係数a,b,cを入力してください：");
    scanf("%d %d %d",&a,&b,&c);
    
    d=(b*b)-(4*a*c);
    if(d>0){
      printf("実数解\n");
    }  
     else if(d<0){
      printf("虚数解\n");
    }
    else if(a==0&&b==0){
      printf("解なし\n");
    }
    else if(d==0){
      printf("１つの解\n");
    	}
	}
}
