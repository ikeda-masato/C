/*‘æ6‰ñ‰‰K‰Û‘è3 11515009 ’r“c«“s*/
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
 printf("‘å•¶š‚Æ¬•¶š‚Ì‡Œv‚Í%d‚Å‚·\n",a);
}
