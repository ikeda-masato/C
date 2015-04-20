/*第9回演習課題3 11515009 池田将都*/
/*奇数を入力するとその数字の縦横の行列が生成され、縦横対角線の和が同値の
プログラム*/
#include<stdio.h>
    
void main(void)
{
     int mg[16][16],ii=1,jj,nn,kk;
    
    printf("15以下の奇数を入力してください:");
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
