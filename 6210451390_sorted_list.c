// 6210451390 :: Phubordee Romin
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1

typedef struct node{
    int data;
    struct node *next;
}Node;

//set_prev is function when value input less than head 
Node *set_prev(Node *head,Node *tail,int numInput)
{
    Node *tmp;
    tmp = (Node *)malloc(sizeof(Node));
    tmp->data = numInput;
    tmp->next = head;
    head = tmp;
    return head;
}

//set_next is function to find position and insert valus in link list
Node *set_next(Node *head,Node *tail, int numInput)
{
    int bool = 1;
    Node *tmp,*first,*second;
    first = head;
    tmp = head;
    second = head->next;
    tmp = (Node *)malloc(sizeof(Node));
    while(TRUE){
        if(numInput>=first->data && second == NULL)
        {
            tmp ->data = numInput;
            tmp ->next = NULL;
            first->next = tmp;
            break;
        }
        else if(numInput >= first->data && numInput < second->data)
        {
            tmp->data = numInput;
            tmp->next = second;
            first ->next = tmp;
            break;
        }
        first = first->next;
        second = second->next;
    }
    return head;
}

Node *set_position(Node **head,Node **tail,int numInput)
{
    if (*head == NULL){
        *head = *tail =(Node *)malloc(sizeof(Node));
        (*head)->data = numInput;
        (*head)->next = NULL;
        (*tail)->next = (*head)->next;
    }
    else if(numInput < (*head)->data)
    {
        return set_prev(*head,*tail,numInput);
    }
    else if(numInput >= (*head)->data)
    {
        return set_next(*head,*tail,numInput);
    }
    return *head;
}

void printf_link_list(Node **head)
{
    struct node *tmp;
    for(tmp = *head; tmp ;tmp = tmp->next)
    {
        printf("%d\n",tmp->data);
    }
}

int main()
{
    Node *head = NULL, *tail = NULL;
    int input;
    while(scanf("%d",&input)==1)
    {
        if(input == -1)
            break;
        head = set_position(&head,&tail,input);
    }
    printf_link_list(&head);
}