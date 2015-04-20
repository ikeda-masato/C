/*第13回演習課題2 11515009 池田将都*/
/*課題１のプログラムに最大値、最小値を加えたプログラム*/
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
    float sum[n_item],max[n_item],min[n_item];
     printf(" ID");
     printf("\t名前\t");
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
        printf(" 合計\t\t");
        for(j=0;j<n_item;j++){
          sum[j]=0;
          for(i=0;i<n_person;i++){
          sum[j]+=d_tbl[i].value[j];
        }
                printf("\t%5.1f",sum[j]);
                }       
        printf("\n");
                printf(" 平均\t\t");
        for(j=0;j<n_item;j++){
                printf("\t%5.1f",sum[j]/5);
        }       
        printf("\n");
  
       printf(" 最大\t\t");
       for(i=0;i<n_item;i++){
         max[i]=0;
         for(j=0;j<n_person;j++){ 
           if (max[i]<d_tbl[j].value[i])
                  max[i]=d_tbl[j].value[i];
                }
       }
       for(i=0;i<n_item;i++){
         printf("\t%5.1f",max[i]);
       }
       printf("\n");


       printf(" 最小\t\t");
       for(i=0;i<n_item;i++){
         min[i]=max[i];
         for(j=0;j<n_person;j++){ 
           if(min[i]>d_tbl[j].value[i])
             min[i] = d_tbl[j].value[i];
         }
       }
       for(i=0;i<n_item;i++){
         printf("\t%5.1f",min[i]);
       }
       printf("\n");
  }
