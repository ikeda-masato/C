/*‘æ9‰ñ‰‰K‰Û‘è2 11515009 ’r“c«“s*/
#include <stdio.h>
#define MAX_PERSON 100
#define MAX_KOMOKU 20
#define MAX_NAME 21
#define MAX_KNAME 21

char k_nam[MAX_KOMOKU][MAX_KNAME];
char nam[MAX_PERSON][MAX_NAME];
float val[MAX_PERSON][MAX_KOMOKU];
main(void)
{
int a,b;
int i,j;
 double sum,bmi,bmi_sum;

 scanf("\t%d \t%d",&a,&b);
 for(i=0;i<b;i++){
   scanf("%s",k_nam[i]);
 }
 for(i=0;i<a;i++){
   scanf("%s",nam[i]);
   for(j=0;j<b;j++){
     scanf("%f",&val[i][j]);
 }
 }
  for(i=0;i<b;i++){
    printf("\t\t%s",k_nam[i]);
  }
  printf("\t\tBMI\n");

  for(i=0;i<a;i++){
    printf("%-16s",nam[i]);
   for(j=0;j<b;j++){
     printf("%5.1f\t\t",val[i][j]);
       }
   bmi=(val[i][1]*10000)/((val[i][0])*(val[i][0]));
   bmi_sum+=bmi;
   printf("%5.1f\n",bmi);
  } 
  printf("\n");

  printf("•½‹Ï");
   
   for(i=0;i<b;i++){
   sum=0;
   for(j=0;j<a;j++){
     sum+=val[j][i];
   }
   printf("\t\t%5.1f",sum/a);
  }
   printf("\t\t%5.1f\n",bmi_sum);
}
