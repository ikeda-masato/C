/*��10�񉉏K�ۑ�1 11515009 �r�c���s*/
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
             printf("������̒�����%d �ł��D\n",strlength(buff));
             printf("�A�h���X\t ����\n");
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