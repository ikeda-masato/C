/*��11�񉉏K�ۑ�1 11515009 �r�c���s*/
#include <stdio.h>
#include <values.h>
#define DATA_SIZE 100
void max_max2(int *,int,int *,int *);
main(void)
{
int x[DATA_SIZE],n,max1,max2;

for(n=0;n<DATA_SIZE;n++){
if(scanf("%d",&x[n])==EOF) break;
}
max_max2(x,n,&max1,&max2);
printf("�ő�l��%d��,2�Ԗڂɑ傫���l��%d�ł��B\n",max1,max2);
}

void max_max2(int *data,int size,int *max1,int *max2){

  int i,j,tmp,max;
   
  *max1=*data;
  *max2=-999;
 
  for(i=0;i<size;i++){

    if(*(data+i)>=*max1){
      *max1=*(data+i);
    }
    else if (*(data+i)>*max2){
      *max2 = *(data+i);
    }
  }
}