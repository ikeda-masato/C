/*��9�񉉏K�ۑ�3 11515009 �r�c���s*/
/*�����͂���Ƃ��̐����̏c���̍s�񂪐�������A�c���Ίp���̘a�����l��
�v���O����*/
#include<stdio.h>
    
void main(void)
{
     int mg[16][16],ii=1,jj,nn,kk;
    
    printf("15�ȉ��̊����͂��Ă�������:");
    scanf("%d",&nn);
    jj=(nn+1)/2;
    mg[1][jj]=1;
    for(kk=2;kk<=nn*nn;kk++){
        if(kk%nn==1)
            ii++;
        else if(ii==1){
            ii=nn;
            jj++;
        }
        else if(jj==nn){
            ii--;
            jj=1;
        }
        else  {
            ii--;
            jj++;
        }
        mg[ii][jj]=kk;
    }
    for(ii=1;ii<=nn;ii++){
        printf("\n");
        for(jj=1;jj<=nn;jj++)
            printf("%5d",mg[ii][jj]);
    }
    printf("\n");
} 
