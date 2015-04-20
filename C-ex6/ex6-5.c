/*‘æ6‰ñ‰‰K‰Û‘è5 11515009 ’r“c«“s*/
#include <stdio.h>
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
  if(isprint(c)!=0)
freq[c] ++;
}
 a=freq[32]+freq[45];
  printf("’PŒê”‚Í %d ŒÂ\n",a);
}