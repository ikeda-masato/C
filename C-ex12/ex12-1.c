/*‘æ12‰ñ‰‰K‰Û‘è1 11515009 ’r“c«“s*/
#include<stdio.h>
#include<string.h>
#define MAX_STR 1024

main(int argc,char *argv[])
{
  int i,sum=0;
 
    for(i=1;i<argc;i++)
     {
       sum+=atoi(argv[i]);
     }
   printf("%d\n",sum);
}