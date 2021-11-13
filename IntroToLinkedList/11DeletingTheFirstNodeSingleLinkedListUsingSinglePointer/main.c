#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void print_data(struct node *head)
{
    printf(">>> Printing...\n");
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
    printf("<<<Finished printing...\n");
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

struct node *del_last_using_single_pointer(struct node *head)
{
    if (head == NULL)
    {
        printf("List is already empty!");
    }
    else if (head->link == NULL)
    {
        free(head);
        head = NULL;
    }
    else
    {
        struct node *temp = head;
        while (temp->link->link != NULL)
        {
            temp = temp->link;
        }
        free(temp->link);
        temp->link = NULL;
    }
    return head;
}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    add_at_end(head, 98);
    add_at_end(head, 3);
    add_at_end(head, 100);
    add_at_end(head, 20);
    add_at_end(head, 400);
    add_at_end(head, 565);
    add_at_end(head, 32);

    print_data(head); //printing the Single LinkedList

    del_last_using_single_pointer(head);
    del_last_using_single_pointer(head);

    print_data(head); //printing the Single LinkedList

    /*     ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    } */
    return 0;
}