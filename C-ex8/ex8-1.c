/*‘æ8‰ñ‰‰K‰Û‘è1 11515009 ’r“c«“s*/
#include <stdio.h>
#include <string.h>
#define AA 256
int main()
{
  char str[AA];
  int a;
 
   if((fgets(str,256,stdin)) != '\0'){
      str[strlen(str)-1]=0;
      }
   fgets(str,256,stdin);   
    for(a=0;str[a]!='\0';a++)
        printf("%c",str[a]);
   for(a=strlen(str)-1;a>=0;a--) {
     putchar(str[a]);
   }
    putchar('\n');
   }
