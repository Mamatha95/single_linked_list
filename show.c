#include"header.h"
#include<stdio.h>
void show(sll *head)
{
        sll *p=head;
        if(head==0)
        {
                printf("NO RECORDS FOUND\n");
                return;
        }
        else
        {
                while(p!=NULL)
                {
                        printf("rollno:%d name:%s marks:%f\n",p->rollno,p->name,p->marks);
                        p=p->next;
                }
        }
}