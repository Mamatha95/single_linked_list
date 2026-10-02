typedef struct student
{

        int rollno;
        char name[30];
        float marks;
        struct student *next;
}sll;
void add_data(sll**);
void show(sll*);
void del(sll**);
void modify(sll**);
void sort(sll**);
void reverse_data(sll*);
void save(sll*);
void delall(sll**);
void rev(sll**);