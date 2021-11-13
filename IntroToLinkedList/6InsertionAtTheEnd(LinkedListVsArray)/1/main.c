#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

/* void count_of_nodes(struct node *head)
{
    int count = 0;
    if (head == NULL)
    {
        printf("Linked list is empty");
    }
    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }
    printf("the list has %d nodes", count);
} */

void print_data(struct node *head)
{
    printf(">>> Printing Begin >>>\n");
    if (head == NULL)
    {
        printf("Linked list is empty");
    }
    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        printf("ptr = %p , ptr->link = %p , ptr->data = %d\n", ptr, ptr->link, ptr->data);
        ptr = ptr->link;
    }
    printf(">>> Finished Printing......\n");
}

void add_at_end(struct node *head, int data)
{
    struct node *ptr, *temp;
    ptr = head;
    temp = (struct node *)malloc(sizeof(struct node));

    temp->data = data;
    temp->link = NULL;

    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;
}

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
    printf("The adress head->link is = %p = current = %p\n\n", head->link, current);

    current = malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL;
    head->link->link = current; //link the second node with the third node

    //count_of_nodes(head);
    print_data(head);
    add_at_end(head, 67);
    print_data(head);

    return 0;
}
