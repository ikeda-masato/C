/*第10回演習課題1 11515009 池田将都*/
#include <stdio.h>
#include <string.h>
#define LINE_LEN 80
int strlength(char *);
main(void)
{
  int i=0;
  char buff[LINE_LEN];
 
    while(fgets(buff,256,stdin)!=NULL){
             buff[strlen(buff)-1]=0;
             printf("文字列の長さは%d です．\n",strlength(buff));
             printf("アドレス\t 文字\n");
             for(i=0;i<strlength(buff);i++){
             printf("%p\t %c\n",&buff[i],buff[i]);                    
             }
              }
}
int strlength(char *s)
{
int len=0;
while(*s!=0){
s++;
len++;
}
return len;
}