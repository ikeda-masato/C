/*第15回演習課題1 11515009 池田将都*/
/*ソースプログラム*/
/*単純選択法(昇順)*/
#include <stdio.h>
#include <stdlib.h>
#define LENGTH 50000

main(void){
  
  int i,j,p,tmp;
  int a[LENGTH];

  /*初期値の生成 */
  for(i=0; i<LENGTH; i++){
    a[i]=rand()%LENGTH;
  }

  /*初期値の表示*/
  printf("==  before ==\n");
  for(i=0; i<LENGTH; i++){
    printf("%d ",a[i]);
  }

  /*並び替え*/
  for(i=0; i<LENGTH; i++){
    p=i;
    tmp=a[p];
    for(j=i+1; j<LENGTH; j++)
      if(a[j]<tmp){
        p=j;
        tmp=a[p];
      }
    a[p]=a[i];
    a[i]=tmp;
  }

  /*結果の表示*/
  printf("\n\n== after  ==\n");
  for(i=0; i<LENGTH; i++){
    printf("%d ",a[i]);
  }
  printf("\n");
}
