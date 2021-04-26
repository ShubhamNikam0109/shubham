// Implement dequeue as linked list


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    int data;
    struct node *link;
};

void addqatend(struct node **f,struct node **r,int item)
{
    struct node *q;

    q= malloc(sizeof(struct node));
    q->data = item;
    q->link = NULL;

    if(*f==NULL)
        *f = q;
    else
        (*r)->link = q;
    
    *r = q;
}

void addqatbeg(struct node **f, struct node **r, int item)
{
    struct node *q;
    int *temp;

    q = malloc(sizeof(struct node));
    q->data = item;
    q->link = NULL;

    if(*f==NULL)
        *f=*r=q;
    else
    {
        q->link = *f;
        *r = *f;
        *f = q;
    }
    
}

int delqatbeg(struct node **f, struct node **r)
{
    struct node *q;
    int item;
    if(*f==NULL)
        printf(" Queue is empty .");
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

int delqatend(struct node **f,struct node **r)
{
    struct node *q, *left , *temp;
    int item;
    temp = *f;

    if(*r==NULL)
        printf(" Queue is empty .");
    else
    {
        while(temp!=*r)
        {
            left = temp;
            temp = temp->link;
        }
        q= *r;
        item = q->data;
        free(q);
        *r = left;
        (*r)->link = NULL;

        if(*r==NULL)
            *f = NULL;
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

    printf("\n Elements in linked list = %d  .",count(front));
    addqatend(&front,&rare,11);
    addqatbeg(&front,&rare,10);
    addqatend(&front,&rare,12);
    addqatend(&front,&rare,13);
    addqatend(&front,&rare,14);

    q_display(front);

    printf("\n Elements in linked list = %d  .",count(front));

    item = delqatbeg(&front,&rare);
    printf(" %d ",item);

    item = delqatbeg(&front,&rare);
    printf(" %d ",item);

    q_display(front);

    item = delqatend(&front,&rare);
    printf(" %d ",item);

    q_display(front);
}