#include"header.h"
#include<stdlib.h>
#include<stdio.h>
int count=1;
void add_data(sll **head)
{
        int flag=1;
        sll *new=malloc(sizeof(sll));
        sll *last,*temp;
        int high;
        printf("enter students rollno name and percentage\n");
        scanf("%s%f",new->name,&new->marks);
        new->next=0;
        if(*head==0)
        {

                *head=new;
                new->rollno=count;

        }
                else if(flag == 1)
        {

                last = *head;

                while(last->next)
                {
                        if(last->rollno + 1 != last->next->rollno)
                        {
                                new->rollno = last->rollno + 1;
                                new->next = last->next;
                                last->next = new;
                                return;
                        }

                        last = last->next;
                }


                new->rollno = last->rollno + 1;
                last->next = new;
                new->next = NULL;
        }
        else
        {
                last = *head;
                high = last->rollno;

                while(last)
                {
                        if(last->rollno > high)
                                high = last->rollno;

                        last = last->next;
                }

                new->rollno = high + 1;


                last = *head;
                while(last->next)
                        last = last->next;

                last->next = new;
                new->next = NULL;
        }
}