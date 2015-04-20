/*‘æ10‰ñ‰‰K‰Û‘è3@11515009 ’r“c«“s*/
#include <stdio.h>
#include <string.h>
#define LINE_LEN 80
void strcopy(char *,char *);
void strcatenate(char *,char *);
main(void)
{
    char str1[LINE_LEN],str2[LINE_LEN];

         while(fgets(str1,256,stdin)!=NULL){
              str1[strlen(str1)-1]=0;
               strcopy(str2,str1);
                strcatenate(str2," ");
                  strcatenate(str2,str1);
                    printf("%s\n",str2);
          }
}

void strcopy(char *s1,char *s2){
  while(*s1++=*s2++);
}

void strcatenate(char *s1,char *s2){

   while(*s1!='\0'){
   s1++;
  }
   while(*s2!='\0'){
    *s1++=*s2++;
 }
   *s1='\0'; 
}