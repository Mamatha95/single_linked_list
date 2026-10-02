#include"header.h"
#include<stdlib.h>
#include<stdio.h>
sll *head=0;
int main()
{
        char op;
        while(1)
        {
printf("\n+--------------------------------+\n");
printf("|          STUDENT MENU          |\n");
printf("+--------------------------------+\n");
printf("| a/A | Add new record           |\n");
printf("| d/D | Delete a node            |\n");
printf("| s/S | Show list                |\n");
printf("| m/M | Modify data              |\n");
printf("| v/V | Save and exit            |\n");
printf("| r/R | Reverse the list         |\n");
printf("| t/T | Sort the list            |\n");
printf("| i/I | Delete all records       |\n");
printf("| e/E | Exit                     |\n");
printf("+--------------------------------+\n");
                printf("enter your option\n");
                scanf(" %c",&op);
                switch(op)
                {
                        case 'a':add_data(&head);break;
                        case 'A':add_data(&head);break;
                        case 's':show(head);break;
                        case 'S':show(head);break;
                        case 'd':del(&head);break;
                        case 'D':del(&head);break;
                        case 'm':modify(&head);break;
                        case 'M':modify(&head);break;
                        case 't':sort(&head);break;
                        case 'T':sort(&head);break;
                        case 'e':exit(0);break;
                        case 'E':exit(0);break;
                        case 'v':save(head);break;
                        case 'V':save(head);break;
                        case 'r':rev(&head);break;
                        case 'R':rev(&head);break;
                        case 'i':delall(&head);break;
                        case 'I':delall(&head);break;
                        default:printf("ENTER VALID OPTION");break;

                }
        }
}