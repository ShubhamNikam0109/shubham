// Linked list operations

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct node
{
    int data;
    struct node *link;
};



void append(struct node **q,int num)
{
    struct node *temp , *r;
    temp = *q;
    if(*q==NULL)
    {
        temp = malloc(sizeof(struct node));
        temp->data = num;
        temp->link = NULL;
        *q = temp;
    }
    else
    {
        temp = *q;
        while(temp->link!= NULL)
        temp = temp->link;

        r = malloc(sizeof(struct node));
        r->data = num;
        r->link = NULL;
        temp->link = r;
    }
    
}

void addatbeg(struct node **q,int num)
{
    struct node *temp;
    temp = malloc(sizeof(struct node));
    temp -> data = num;
    temp -> link = *q;
    *q = temp;
}

void addafter(struct node *q, int loc ,int num)
{
    struct node *temp, *r;
    int i;
    temp = q;
    for(i=0;i<loc;i++)
    {
        temp = temp->link;
        if(temp==NULL)
        {
            printf("\n There are less numbers than %d .",loc);
        }
    }

    r = malloc(sizeof(struct node));
    r->data = num;
    r->link = temp->link;
    temp->link = r; 
}

void delete(struct node **q, int num)
{
    struct node *old , *temp;
    temp = *q;
    while(temp!=NULL)
    {
        if(temp->data==num)
        {
            if(temp==*q)
            {
                *q = temp -> link;
                free(temp);
                return ;
            }
            else
            {
                old->link = temp->link;
                free(temp);
                return ;
            }
            
        }
        else
        {
            old = temp;
            temp = temp->link;
        }
        
    }
    printf("\n Element  %d  not found .\n",num);
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
void display(struct node *q)
{
    while(q!=NULL)
    {
        printf("%d \t",q->data);
        q = q->link;
    }
    printf("\n");
}

void main()
{
    struct node *p;
    p = NULL;
 
    printf("\n Number of elements in linked list = %d  .\n",count(p));
    append(&p,1);
    append(&p,2);
    append(&p,3);
    append(&p,4);
    append(&p,17);

    display(p);

    addatbeg(&p,999);
    addatbeg(&p,888);
    addatbeg(&p,777);

    display(p);

    addafter(p,7,0);
    addafter(p,2,1);
    addafter(p,1,99);

    display(p);

    printf("\n Number of elements in linked list = %d .\n",count(p));

    delete(&p,888);
    delete(&p,1);
    delete(&p,10);

    display(p);

    printf("\n Number of elements in linked list = %d .",count(p));
}