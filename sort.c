#include"header.h"
#include<stdio.h>
#include<string.h>
void sort(sll **head)
{
        sll *ptr=*head,*ptr1;
        int temp;
        char op;
        char name[20];
        float marks;
        int i,j,k;
        printf("select a)for sorting according to rollno\n b)sort according to name\n c)sort according to marks\n");
        scanf(" %c",&op);
        switch(op)
        {
                case 'a':for(ptr;ptr!=NULL;ptr=ptr->next)
                                 {
                                         for(ptr1=ptr->next;ptr1!=NULL;ptr1=ptr1->next)
                                         {
                                                 if(ptr->rollno > ptr1->rollno)
                                                 {
                                                         temp=ptr->rollno;
                                                         ptr->rollno=ptr1->rollno;
                                                         ptr1->rollno=temp;

                                                         strcpy(name,ptr->name);
                                                         strcpy(ptr->name,ptr1->name);
                                                         strcpy(ptr1->name,name);

                                                         marks=ptr->marks;
                                                         ptr->marks=ptr1->marks;
                                                         ptr1->marks=marks;
                                                 }

                                         }
                                 }

                         break;
                case 'b':for(ptr;ptr!=NULL;ptr=ptr->next)
                         {
                                 for(ptr1=ptr->next;ptr1!=NULL;ptr1=ptr1->next)
                                 {
                                         if(strcmp(ptr->name,ptr1->name)>0)
                                         {
                                                 temp=ptr->rollno;
                                                 ptr->rollno=ptr1->rollno;
                                                 ptr1->rollno=temp;

                                                 strcpy(name,ptr->name);
                                                 strcpy(ptr->name,ptr1->name);
                                                 strcpy(ptr1->name,name);   

                                                 marks=ptr->marks;          
                                                 ptr->marks=ptr1->marks;    
                                                 ptr1->marks=marks;
                                         }

                                 }
                         }

                         break;
                case 'c':for(ptr;ptr!=NULL;ptr=ptr->next)
                         {
                                 for(ptr1=ptr->next;ptr1!=NULL;ptr1=ptr1->next)
                                 {
                                         if(ptr->marks>ptr1->marks)
                                         {
                                                 temp=ptr->rollno;
                                                 ptr->rollno=ptr1->rollno;
                                                 ptr1->rollno=temp;

                                                 strcpy(name,ptr->name);    
                                                 strcpy(ptr->name,ptr1->name);
                                                 strcpy(ptr1->name,name);   

                                                 marks=ptr->marks;          
                                                 ptr->marks=ptr1->marks;    
                                                 ptr1->marks=marks;
                                         }

                                 }
                                 break;
                         }
        }
}