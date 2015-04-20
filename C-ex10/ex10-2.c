/*‘æ10‰ñ‰‰K‰Û‘è2 11515009 ’r“c«“s*/
#include <stdio.h>
#include <string.h>
#define LINE_LEN 80
void strcopy(char *,char *);
main(void)
{
 char buff[LINE_LEN];
 char str1[LINE_LEN],str2[LINE_LEN];
 
   while(fgets(buff,256,stdin)!=NULL){
       buff[strlen(buff)-1]=0;
       strcpy(str1,buff);
       strcopy(str2,str1);
       printf("%s\n",str2);
     }
}

void strcopy(char *s1,char *s2){
 
  while(*s1++=*s2++);
}