#include"header.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void del(sll **head)
{
        int op,c,op1;
        sll *del=*head;
        sll *prev=NULL,*temp;
        int rollno,r1;
        char n[20];
        printf("1)based on rollno 2)based on name\n");
        scanf("%d",&op);
        switch(op)
        {
                case 1:printf("enter rollno\n");
                       scanf("%d",&rollno);
                       while(del)
                       {
                               if(del->rollno==rollno)
                               {        if(del==*head)
                                       {
                                               *head=del->next;
                                       }
                                       else
                                       {
                                               prev->next=del->next;

                                       }
                                       free(del);
                                       return;
                               }
                               prev=del;
                               del=del->next;
                       }
                       break;


                case 2:
        printf("enter name\n");
        scanf("%s",n);

        c = 0;
        del = *head;


        while(del)
        {
                if(strcmp(del->name,n)==0)
                {
                        c++;
                        printf("rollno:%d name:%s marks:%f\n",
                                del->rollno,
                                del->name,
                                del->marks);
                }
                del = del->next;
        }

        if(c==0)
        {
                printf("NO SUCH NAME AVAILABLE\n");
                return;
        }


        if(c>1)
        {
                printf("Enter rollno you want to del\n");
                scanf("%d",&r1);
        }
        else
        {
                del = *head;

                while(strcmp(del->name,n)!=0)
                {
                        del = del->next;
                }

                r1 = del->rollno;
        }


        del = *head;
        prev = NULL;

        while(del)
        {
                if(del->rollno == r1 && strcmp(del->name,n)==0)
                {
                        if(del == *head)
                        {
                                *head = del->next;
                        }
                        else
                        {
                                prev->next = del->next;
                        }

                        free(del);
                        break;
                }

                prev = del;
                del = del->next;
        }

        break;
        }
}