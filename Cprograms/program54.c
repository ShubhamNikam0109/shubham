//  Adding and deleting nodes from ascending order


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>



struct node
{
    int data;
    struct node *link;
};
void add(struct node **,int);
void display(struct node *);
int count(struct node *);

void main()
{
    struct node *p;
    p = NULL;

    printf("\n Number of elements in linked list = %d  .\n",count(p));
    add(&p,5);
    add(&p,1);
    add(&p,6);
    add(&p,4);
    add(&p,7);

    display(p);

    printf("\n Number of elements in linked list = %d  .",count(p));
}
void add(struct node **q , int num)
{
    struct node *r , *temp = *q ;
        
    r = malloc(sizeof(struct node));
    r->data = num;

    if(*q==NULL || (*q)->data > num)
    {
        
        *q = r;
       // temp = malloc(sizeof(struct node));
        (*q)->link = temp;
    }
    else
    {
        while(temp!=NULL)
        {
            if(temp->data<=num && (temp->link->data>num || temp->link == NULL))
            {
                r->link = temp->link;
                temp->link = r;
                return ;
            }
            temp = temp->link;
        }
    }
    
}    

/*
//  Adding element in the end
void add(struct node **q ,int num)
{
    struct node *temp , *r;
    temp = *q;
    if(*q==NULL)
    {
        temp = malloc(sizeof(struct node));
        temp->data = num;
        temp -> link = NULL;
        *q = temp;
    }
    else
    {
        temp = *q;
        while(temp->link!=NULL)
            temp = temp->link;

        r = malloc(sizeof(struct node));
        r->data = num;
        r->link = NULL;
        temp->link = r;
    }
    
}    */

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

void display(struct node *q)
{
    while(q!=NULL)
    {
        printf("%d \t",q->data);
        q = q->link;
    }
    printf("\n");
}
