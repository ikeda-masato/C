/*‘æ13‰ñ‰‰K‰Û‘è1 11515009 ’r“c«“s*/
#include <stdio.h>
#define MAX_PERSON 100
#define MAX_ITEM 20
#define MAX_NAME 20
#define MAX_INAME 10

 int n_person;
 int n_item;
 char item_name[MAX_ITEM][MAX_INAME];
 struct data_table{
        int id;
        char name[MAX_NAME];
        float value[MAX_ITEM];
        }d_tbl[MAX_PERSON];

  void read_data(void);
  void write_data(void);
   main(void)
        {
         
         read_data();
         write_data();
         
        }

  void read_data()
    {
     int i,j;

      scanf("%d %d",&n_person,&n_item);
        for(i=0;i<n_item;i++){
            scanf("%s",item_name[i]);
             }
        for(i=0;i<n_person;i++){
            scanf("%d",&d_tbl[i].id);
            scanf("%s",d_tbl[i].name);

       for(j=0;j<n_item;j++){
           scanf("%f",&d_tbl[i].value[j]);
            }
      }
      
}

  void write_data()
  {
    int i,j;
    float sum[100];
     printf(" ID");
     printf("\t–¼‘O\t");
        for(i=0;i<n_item;i++){
           printf("\t%-6s",item_name[i]);
          }
        for(i=0;i<n_person;i++){
            printf("\n%5d\t%-13s",d_tbl[i].id,d_tbl[i].name);
        for(j=0;j<n_item;j++){
            printf("\t%5.1f",d_tbl[i].value[j]);
            }
            
         }
        printf("\n");
        printf(" ‡Œv\t\t");
        for(j=0;j<n_item;j++){
          sum[j]=0;
        for(i=0;i<n_person;i++){
          sum[j]+=d_tbl[i].value[j];
        }
                printf("\t%5.1f",sum[j]);
        }       
        printf("\n");
                printf(" •½‹Ï\t\t");
        for(j=0;j<n_item;j++){
                printf("\t%5.1f",sum[j]/5);
        }       
        printf("\n");
}
