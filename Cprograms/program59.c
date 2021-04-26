//  Implementation of doubly linked list


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct dnode
{
    struct dnode *prev;
    int data;
    struct dnode *next;
};
void d_append(struct dnode **s , int num)
{
    struct dnode *r , *q = *s;
    if(*s==NULL)
    {
        *s = malloc(sizeof(struct dnode));
        (*s)->prev = NULL;
        (*s)->next = NULL;
        (*s)->data = num;
    }
    else
    {
        while(q->next!=NULL)
            q = q->next;

        r = malloc(sizeof(struct dnode));
        r->data = num;
        r->next = NULL;
        r->prev = q;
        q->next = r;
    }
    
}

void d_addatbeg(struct dnode **s , int num)
{
    struct dnode *q;

    q = malloc(sizeof(struct dnode));
    q->prev = NULL;
    q->data = num;
    q->next = *s;
    (*s)->prev = q;
    *s = q;
}

void d_addafter(struct dnode *q, int loc , int num)
{
    struct dnode *temp;
    int i ;
    for(i=0;i<loc;i++)
    {
        q = q->next;
        if(q==NULL)
        {
            printf("Elements is less then  %d  elements .",loc);
            return ;
        }
    }
    q = q->prev;
    temp = malloc(sizeof(struct dnode));
    temp->data = num;
    temp->prev = q;
    temp->next = q->next;
    temp->next->prev = temp;
    q->next = temp;
}
int count(struct dnode *q)
{
    int c = 0;
    while(q!=NULL)
    {
        q = q->next;
        c++;
    }
    return c;
}
void d_display(struct dnode *q)
{
    while(q!=NULL)
    {
        printf(" %d ",q->data);
        q = q->next;
    }
    printf("\n");
}
void main()
{
    struct dnode *p;
    p = NULL;

    printf("Elements in doubly linked list = %d  .",count(p));

    d_append(&p,11);
    d_append(&p,21);
    d_display(p);

    printf("Elements in doubly linked list = %d  .",count(p));

    d_addatbeg(&p,33);
    d_addatbeg(&p,55);
    d_display(p);

    printf("Elements in doubly linked list = %d  .",count(p));

    d_addafter(p,1,4000);
    d_addafter(p,2,5000);
    d_display(p);

    printf("Elements in doubly linked list = %d  .",count(p));
}