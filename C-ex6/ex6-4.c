/*‘æ6‰ñ‰‰K‰Û‘è4 11515009 ’r“c«“s*/
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
if(isalpha(c) != 0)
freq[c] ++;
}
for(c=65;c<=90;c++)
{
 freq[c]=freq[c]+freq[c+32];
  printf("%c ‚Ü‚½‚Í %c : %d \n",toupper(c),tolower(c),freq[c]);
}
}