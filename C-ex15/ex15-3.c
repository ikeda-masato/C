/*第15回演習課題3 11515009 池田将都*/
/*ソースプログラム*/
/*単純挿入法(降順)*/
#include <stdio.h>
#include <stdlib.h>
#define LENGTH 50000

main(void){
  
  int i,j,p,tmp;
  int a[LENGTH];

  /*初期値の生成*/
  for(i=0; i<LENGTH; i++){
    a[i]=rand()%LENGTH;
  }

  /*初期値の表示*/
  printf("==  before ==\n");
  for(i=0; i<LENGTH; i++){
    printf("%d ",a[i]);
  }

  /*並び替え*/
  for(i=1; i<LENGTH; i++){
    p=i;
    tmp=a[p];
    for(j=i-1;j>=0; j--){
      if(a[j]<tmp)
        a[j+1]=a[j];
          
      else
        break;
            
      }
    a[j+1]=tmp;
  }

  /*結果の表示*/
  printf("\n\n== after  ==\n");
  for(i=0; i<LENGTH; i++){
    printf("%d ",a[i]);
  }
  printf("\n");
}
