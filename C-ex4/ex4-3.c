/*��4�񉉏K�ۑ�3 11515009 �r�c���s*/
/*3�l���̐g���Ƒ̏d����͂���BIM�w�������߂�*/
#include <stdio.h>
double bmi(double,double);
int main(void)
{
  int a,b;
  double c[3][3];  
  printf("3�l�̐g��(m) �̏d(kg)����́F\n");
  for(a=0;a<3;a++){
    scanf("%lf %lf",&c[a][0],&c[0][a]);
  }

  printf("���ꂼ���BMI��\n");
    for(a=0;a<3;a++){
      printf("%2.1f\n",bmi(c[a][0],c[0][a])); 
    }
}

double bmi(double x,double y){

    double bmi;
    bmi=y/(x*x);
      return bmi;
  }
