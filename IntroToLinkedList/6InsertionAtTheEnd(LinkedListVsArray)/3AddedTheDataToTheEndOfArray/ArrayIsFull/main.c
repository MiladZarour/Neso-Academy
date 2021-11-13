#include <stdio.h>
#include <stdlib.h>

int add_at_end(int a[], int b[], int n, int freePos, int data)
{
    for (size_t i = 0; i < n; i++)
    {
        b[i] = a[i];
    }

    b[freePos] = data;
    freePos++;
    return freePos;
}

int main()
{
    int a[3];
    int i, n, freePos;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the [%d] element : ", i + 1);
        scanf("%d", &a[i]);
    }
    int size = sizeof(a) / sizeof(a[0]);
    freePos = n;

    if (n == size)
    {
        int b[size + 2];
        freePos = add_at_end(a, b, size, freePos, 65);
        for (i = 0; i < freePos; i++)
        {
            printf("a[%d] = %d\n", i, b[i]);
        }
    }
}