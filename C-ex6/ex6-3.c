/*第6回演習課題3 11515009 池田将都*/
include <stdio.h>
#include <ctype.h>
#define N_CHAR 127
main (void)
{

  int freq[N_CHAR],i,a=0;
char c;
for(i=0;i<N_CHAR;i++)
freq[i]=0;
while((c=getchar()) != EOF)
{
if(isprint(c))
freq[c] ++;
if(isalpha(c)!=0)
a++;
}
for(c=32;c<N_CHAR;c++)
{
  printf("%c : %d \n",c,freq[c]);
}
 printf("大文字と小文字の合計は%dです\n",a);
}
