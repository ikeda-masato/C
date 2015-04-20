/*第4回演習課題3 11515009 池田将都*/
/*3人分の身長と体重を入力してBIM指数を求める*/
#include <stdio.h>
double bmi(double,double);
int main(void)
{
  int a,b;
  double c[3][3];  
  printf("3人の身長(m) 体重(kg)を入力：\n");
  for(a=0;a<3;a++){
    scanf("%lf %lf",&c[a][0],&c[0][a]);
  }

  printf("それぞれのBMIは\n");
    for(a=0;a<3;a++){
      printf("%2.1f\n",bmi(c[a][0],c[0][a])); 
    }
}

double bmi(double x,double y){

    double bmi;
    bmi=y/(x*x);
      return bmi;
  }
