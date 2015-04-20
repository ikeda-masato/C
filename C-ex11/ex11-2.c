/*‘æ11‰ñ‰‰K‰Û‘è2 11515009 ’r“c«“s*/
include <stdio.h>
void dswap(double*,double*);
main(void)
{
 double x,y;

   printf("‚Q‚Â‚ÌÀ”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
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
