// Reverse a linked list


#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct node
{
    int data;
    struct node *link;
};

void addatbeg(struct node **q,int num)
{
    struct node *temp;

    temp = malloc(sizeof(struct node));
    temp->data = num;
    temp->link = *q;
    *q = temp;
}

void reverse(struct node **x)
{
    struct node *q,*r,*s;

    q = *x;
    r = NULL;

    while(q!=NULL)
    {
        s = r;
        r = q;
        q = q->link;
        r->link = s;
    }
    *x = r;
}

void display(struct node *q)
{
    while(q!=NULL)
    {
        printf(" %d ",q->data);
        q = q->link;
    }
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
    struct node *p;
    p = NULL;

    addatbeg(&p,1);
    addatbeg(&p,2);
    addatbeg(&p,3);
    addatbeg(&p,4);
    addatbeg(&p,5);
    addatbeg(&p,6);

    display(p);
    printf("\n Number of elements in linked list = %d  .",count(p));

    reverse(&p);
    
    display(p);
    printf("\n Number of elements in linked list = %d  .",count(p));
}