/*��3�񉉏K�ۑ�3 11515009 �r�c���s*/
#include <stdio.h>
int kaijo(int);
double powint(double,int);
double my_cosine(double,int);
int main(void)
{
  double a;
  int b;

  printf("���[�v�̉񐔂���͂��Ă��������F");
    scanf("%d",&b); 
printf("x����͂��Ă��������F");
  scanf("%lf",&a);

  printf("cos x = %f\n",my_cosine(a,b));

}
int kaijo(int y)
{
  int a,b=1;
  
  for(a=1;b<=y;a++){
    b*=a;
  }
  return b;
}
double powint(double x,int y)
{
  int a;
  double b=1;

    if(y==0)
      return 1;
    else 
      {
        for(a=0;a<y;a++)
          {
            b*=x;
          }
        return b;
      }
}


double my_cosine(double x,int z)
{  
  int b;
  double c,d,e;
  for(b=1;b<=z;b++){
    c+=powint(x,4*b-2)/kaijo(4*b-2);
    d+=powint(x,4*b)/kaijo(4*b);
  }
 
  e=1-c+d;
  
  return e;
 }
