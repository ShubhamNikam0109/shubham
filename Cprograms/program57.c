// Queue  implementation


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    int data;
    struct node *link;
};

void addq(struct node **f, struct node **r , int item)
{
    struct node *q;

    q = malloc(sizeof(struct node));
    q->data = item;
    q->link = NULL;

    if(*f==NULL)
        *f = q;
    else
        (*r)->link = q;
    
    *r = q;
    
}

int delq(struct node **f, struct node **r)
{
    struct node *q;
    int item;
    if(*f==NULL)
        printf("  Queue is empty  .");
    else  
        {
            q = *f;
            item = q->data;
            *f = q->link;
            free(q);
            if(*f==NULL)
                *r = NULL;
            return(item);
        }
        
}

void q_display(struct node *q)
{
    printf("\n Front ->  ");
    while(q!=NULL)
    {
        if(q->link==NULL)
            printf("\n <- Rare  ");
        printf(" %2d  ",q->data);
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
void main()
{
    struct node *front , *rare;
    int item;
    front = rare = NULL;

    printf("\n Items in linked list = %d  .  ",count(front));
    addq(&front,&rare,11);
    addq(&front,&rare,12);
    addq(&front,&rare,13);
    addq(&front,&rare,14);
    addq(&front,&rare,15);

    q_display(front);
    printf("\n Items in linked list = %d  .  ",count(front));
    
    printf("\n items extracted from queue ");
    
    item = delq(&front,&rare);
    printf(" %d ",item);

    item = delq(&front,&rare);
    printf(" %d ",item);

    q_display(front);
    printf("\n Item in linked liet = %d .",count(front));


}