#include"header.h"
#include<stdio.h>
#include<stdlib.h>
void delall(sll **head)
{
        sll *temp;
        while(*head)
        {
                temp=*head;
                *head=(*head)->next;
                free(temp);
                //ptr=ptr->next;
        }
}