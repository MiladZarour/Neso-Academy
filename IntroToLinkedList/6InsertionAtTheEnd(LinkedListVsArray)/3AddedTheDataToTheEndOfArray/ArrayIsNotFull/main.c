#include <stdio.h>
#include <stdlib.h>

int add_at_end(int a[], int freePos, int data)
{
    a[freePos] = data;
    freePos++;
    return freePos;
}

int main()
{
    int a[10];
    int i, n, freePos;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    fflush(stdin);
    for (i = 0; i < n; i++)
    {
        printf("Enter the [%d] element : ", i + 1);
        scanf("%d ", &a[i]);
    }
    freePos = n;
    freePos = add_at_end(a, freePos, 65);

    for (i = 0; i < freePos; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
}