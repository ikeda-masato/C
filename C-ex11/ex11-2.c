/*第11回演習課題2 11515009 池田将都*/
include <stdio.h>
void dswap(double*,double*);
main(void)
{
 double x,y;

   printf("２つの実数を入力してください：");
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
