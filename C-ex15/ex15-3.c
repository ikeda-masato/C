/*��15�񉉏K�ۑ�3 11515009 �r�c���s*/
/*�\�[�X�v���O����*/
/*�P���}���@(�~��)*/
#include <stdio.h>
#include <stdlib.h>
#define LENGTH 50000

main(void){
  
  int i,j,p,tmp;
  int a[LENGTH];

  /*�����l�̐���*/
  for(i=0; i<LENGTH; i++){
    a[i]=rand()%LENGTH;
  }

  /*�����l�̕\��*/
  printf("==  before ==\n");
  for(i=0; i<LENGTH; i++){
    printf("%d ",a[i]);
  }

  /*���ёւ�*/
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

  /*���ʂ̕\��*/
  printf("\n\n== after  ==\n");
  for(i=0; i<LENGTH; i++){
    printf("%d ",a[i]);
  }
  printf("\n");
}
