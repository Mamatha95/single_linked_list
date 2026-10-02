#include"header.h"
#include<stdio.h>
#include<string.h>
int c=0;
void modify(sll **head)
{
        sll *ptr=*head;
        int op,n,new;
        float m,mnew;
        int op1;
        char s[10],d[20];
        printf("1)modify rollno 2)modify name 3)modify marks\n");
        scanf("%d",&op);
        switch(op)
        {
                case 1: printf("enter rollno u want to change\n");
                        scanf("%d",&n);
                        while(ptr!=0)
                        {
                                if(ptr->rollno==n)
                                {
                                printf("RECORD FOUND\n %d %s %f",ptr->rollno,ptr->name,ptr->marks);
                                        ptr->rollno=new;
                                        return;
                                }
                                ptr=ptr->next;
                        }
                        break;
                case 2:printf("enter name you want to change\n");
                         scanf("%s",s);
                         printf("enter the name which should be replaced with\n");
                         scanf("%s",d);
                         while(ptr!=0)
                         {
                                 if(strcmp(ptr->name,s)==0)
                                 {
                                        printf("RECORD FOUND\n %d %s %f",ptr->rollno,ptr->name,ptr->marks);
                                        strcpy(ptr->name,d);
                                        return;
                                 }
                                printf("NO RECORDS FOUND\n");
                                ptr=ptr->next;
                         }
                         break;
                case 3:printf("enter marks you want to change\n");
                         scanf("%f",&m);
                         printf("enter the marks which should be replaced with\n");
                         scanf("%f",&mnew);
                         while(ptr!=0)
                         {
                                if(m==ptr->marks)
                                {
                                        printf("RECORD FOUND\n %d %s %f",ptr->rollno,ptr->name,ptr->marks);
                                        ptr->marks=mnew;
                                        return;
                                }
                                printf("NO RECORDS FOUND\n");
                                ptr=ptr->next;
                                break;
                         }
                         default:printf("ENTER VALID OPTION\n");
                         break;
        }

}