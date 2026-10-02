#include<stdio.h>
#include "header.h"

void rev(sll **head)
{
    sll *ptr = *head;
    sll *prev = NULL;
    sll *temp;

    if(ptr == NULL)
    {
        printf("NO RECORDS FOUND\n");
        return;
    }

    while(ptr)
    {
        temp = ptr->next;
        ptr->next = prev;
        prev = ptr;
        ptr = temp;
    }

    *head = prev;
    /*if(ptr->rollno>ptr->next->rollno)
    while(ptr)
    {
            if(ptr->rollno!=ptr->next->rollno+1)
            {
                ptr->rollno=ptr->next->rollno+1;
            }
            ptr=ptr->next;
    }*/
}