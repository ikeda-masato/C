/*��11�񉉏K�ۑ�2 11515009 �r�c���s*/
include <stdio.h>
void dswap(double*,double*);
main(void)
{
 double x,y;

   printf("�Q�̎�������͂��Ă��������F");
   scanf("%lf %lf",&x,&y);
   dswap(&x,&y);
   printf("x=%f,y=%f\n",x,y);
}

void dswap(double *a,double *b){

  double i;
  i=*a;
  *a=*b;
  *b=i;
}
