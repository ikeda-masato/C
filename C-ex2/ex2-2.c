/*第2回演習課題2 11515009 池田将都*/
include <stdio.h>
int main(void)
{
 
  float a[5],sum;
  int s;
  printf("5つの数字を入力してください：");
    for(s=0; s<5; s++){
    scanf("%f",&a[s]);
    sum+=a[s];
    }
  printf("5つの数の合計は%3.1fです\n",sum);
}
