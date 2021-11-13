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

struct node *add_at_end(struct node *ptr, int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    ptr->link = temp;
    return temp;
}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    printf("the value head->data is = %d\n", head->data);
    printf("The adress head->link is = %p\n", head->link);
    printf("the adress inside head pointer is head = %p\n\n", head);

    struct node *ptr = head;
    ptr = add_at_end(ptr, 98);
    ptr = add_at_end(ptr, 3);
    ptr = add_at_end(ptr, 67);

    print_data(head);
    ptr = add_at_end(ptr, 67);
    print_data(head);

    return 0;
}
