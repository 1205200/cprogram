#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node*ptr;
};
struct node*head;
void enqueue();
void dequeue();
void display();
int main()
{
    int value;
    int option;
    while(1)
    {
        printf("1.Enqueue\n 2.Dequeue\n 3.Display");
        printf("Enter the option:");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            {
            printf("Enter the value:");
            scanf("%d",&value);
            enqueue(value);
            break;
            }
        case 2:
            {
                printf("Enter the value:");
                scanf("%d",&value);
                dequeue();
                break;
            }
        case 3:
            {
                display();
                break;
            }
    }
    void enqueue(int item)
    {
        struct node*ptr,*temp;
        ptr=(struct node*)malloc(sizeof(struct node));
        if (head==NULL)
        {
            printf("\nError");
        }
        else
            {
                ptr->data=item;
               if (head!=NULL)
               {
                   printf("\n No Error");
               }
            }
            void dequeue(int item)
            {
                struct node *p,*temp;
                p=(struct node*)malloc(sizeof(struct node));
                if (head==NULL)
                {
                    printf("\nDeque");
                }
                else
                    {
                     p->data=item;
                     if(head==NULL)
                     {
                         printf("Value");
                     }
                    }
                    void display()
                    {
                        printf("print values");
                    }
            }
    }
  }
}



