/*‘æ6‰ñ‰‰K‰Û‘è1 11515009 ’r“c«“s*/
#include <stdio.h>
#include <ctype.h>
#define N_CHAR 127
main (void)
{

  int b=0,freq[N_CHAR],i,a=0;
char c;
for(i=0;i<N_CHAR;i++)
freq[i]=0;
while((c=getchar()) != EOF)
{
if(isprint(c))
freq[c] ++;
 a++;
 if(isprint(c) != 0)
   b++;
}
for(c=32;c<N_CHAR;c++)
{
  printf("%c : %d \n",c,freq[c]);
}
 printf("‘S‘Ì‚Ì•¶š”‚Í%d‚Å‚·\nˆóš‰Â”\‚È•¶š”‚Í%d‚Å‚·\n",a,b);
}
