/*��15�񉉏K�ۑ�1 11515009 �r�c���s*/
/*�\�[�X�v���O����*/
/*�P���I��@(����)*/
#include <stdio.h>
#include <stdlib.h>
#define LENGTH 50000

main(void){
  
  int i,j,p,tmp;
  int a[LENGTH];

  /*�����l�̐��� */
  for(i=0; i<LENGTH; i++){
    a[i]=rand()%LENGTH;
  }

  /*�����l�̕\��*/
  printf("==  before ==\n");
  for(i=0; i<LENGTH; i++){
    printf("%d ",a[i]);
  }

  /*���ёւ�*/
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

  /*���ʂ̕\��*/
  printf("\n\n== after  ==\n");
  for(i=0; i<LENGTH; i++){
    printf("%d ",a[i]);
  }
  printf("\n");
}
