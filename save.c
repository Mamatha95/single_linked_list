#include"header.h"
#include<stdlib.h>
#include<stdio.h>
void save(sll *head)
{
        FILE *fp=fopen("student.dat","w");
        sll *ptr=head;
        int op;
        printf("enter 1)for save and exit 2)exit\n");
        scanf("%d",&op);
        if(ptr==NULL)
        {
                printf("USAGE:NO DATA AVAILABLE\n");
                return;
        }
        switch(op)
        {
                case 1:while(ptr!=NULL)
                       {
                               fprintf(fp,"rollno:%d name:%s marks:%f\n",ptr->rollno,ptr->name,ptr->marks);
                               printf("rollno:%d name:%s marks:%f\n",ptr->rollno,ptr->name,ptr->marks);
                               ptr=ptr->next;
                       }
                       fclose(fp);
                       break;

                   case 2: exit(0);

        }
}