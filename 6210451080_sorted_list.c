//6210451080 Chanikarn Yamwong
#include <stdio.h>
#include<stdlib.h>
struct node {
 int data;
 struct node* next;
};
struct node*create_list(int create)
{

    struct node *num = (struct node *)malloc(sizeof(struct node));
    num->data = create;
    num->next = NULL;
    return num;
    
};

void print_list(struct node *head)
{
    struct node *tmp;
    for (tmp=head; tmp; tmp = tmp->next)
        printf("%d\n",tmp->data);    
    
};
void newjimon(struct node**IU , struct node *num)
{
    struct node *ku;
    if (*IU == NULL||(*IU)->data>=num->data)
    {
        num->next = *IU;
        *IU = num;
    }
    else
    {
        ku = *IU;
    while (ku->next!=NULL&&ku->next->data<num->data)
    {
        ku = ku->next;
    }
    num->next = ku->next;
    ku->next = num;
    }
    
}
int main()
{ struct node *head = NULL;
  
    int a;
    while (1)
    {
        scanf("%d",&a);
        if (a <= -1)
        {
            break;
        }
        else
        {
            struct node *num = create_list(a);
            newjimon(&head,num);
            
        }
        
    }

    print_list(head);
    

}