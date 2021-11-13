#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

int main()
{
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    printf("the value head->data is = %d\n", head->data);
    printf("The adress head->link is = %p\n", head->link);
    printf("the adress inside head pointer is head = %p\n\n", head);

    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL;

    printf("the value current->data is = %d\n", current->data);
    printf("The adress current->link is = %p\n", current->link);
    printf("the adress inside current pointer is head = %p\n\n", current);
    head->link = current; // link the first node with the second node
    printf("The adress head->link is = %p = current = %p\n", head->link, current);

    current = malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL;
    head->link->link = current; //link the second node with the third node

    return 0;
}
