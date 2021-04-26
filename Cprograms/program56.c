//  Stack  implementation


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    int data;
    struct node *link;
};

void push(struct node **q,int item)
{
    struct node *temp;
    temp = malloc(sizeof(struct node));
    temp->data = item;
    temp->link = *q;
    *q = temp;
}

int  pop(struct node **q)
{
    struct node *temp;
    int item;

    if(*q==NULL)
        printf("\n Stack is empte .");
    else
    {
        temp = *q;

        item = temp->data;
        *q = temp->link;
        return (item);
    }
    
}

void stack_display(struct node *q)
{
    while(q!=NULL)
    {
        printf(" %d ",q->data);
        q = q->link;
    }
    printf("\n");

}

int count(struct node *q)
{
    int c = 0;
    while(q!=NULL)
    {
        q = q->link;
        c++;
    }
    return c;
}

int  main()
{
    struct node *top;
    int item;

    top = NULL;

    printf("\n items in linked list = %d .\n",count(top));
    push(&top,11);
    push(&top,12);
    push(&top,13);
    push(&top,14);
    push(&top,15);

    stack_display(top);
    printf("\n Items in linked list = %d .",count(top));

    item = pop(&top);
    printf("  %d  ",item);

    item = pop(&top);
    printf("  %d  ",item);

    printf("\n Item in linked list = %d .",count(top));
    stack_display(top);

}