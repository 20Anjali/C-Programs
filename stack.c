/*A stack is a linear data structure that follows the principle of Last In First Out (LIFO).
 This means the last element inserted inside the stack is removed first.*/

#include <stdio.h>
#include <stdlib.h>

#define size 10

struct stack
{
    int items[size];
    int top;
};

typedef struct stack st;

void createEmptyStack(st *s)
{
    s->top = -1;
}

int isfull(st *s)
{
    if (s->top == size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isempty(st *s)
{
    if (s->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(st *s, int newitem)
{
    if (isfull(s))
    {
        printf("Stack is full.\n");
    }
    else
    {
        s->top++;
        s->items[s->top] = newitem;
    }
}

int pop(st *s)
{
    if (isempty(s))
    {
        printf("Stack is empty.\n");
        return -1;
    }
    else
    {
        int pop_item = s->items[s->top];
        printf("Popped item: %d\n", pop_item);
        s->top--;
        return pop_item;
    }
}

void printstack(st *s)
{
    if (isempty(s))
    {
        printf("Stack is empty.\n");
    }
    else
    {
        printf("Stack: ");
        for (int i = 0; i <= s->top; i++)
        {
            printf("%d ", s->items[i]);
        }
        printf("\n");
    }
}

void sort(st *s)
{
    int temp;

    for (int i = 0; i < s->top; i++)
    {
        for (int j = 0; j < s->top - i; j++)
        {
            if (s->items[j] > s->items[j + 1])
            {
                temp = s->items[j];
                s->items[j] = s->items[j + 1];
                s->items[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int ch = 0, newitem;
    st *s = (st *)malloc(sizeof(st));
    if (s == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    createEmptyStack(s);

    while (1)
    {
        printf("       Menu       \n");
        printf("1. Push element.\n");
        printf("2. Pop element.\n");
        printf("3. Print Stack\n");
        printf("4. Sort elements\n");
        printf("5. Exit\n");
        printf("Enter your choice: \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            if (isfull(s))
            {
                printf("Stack is full. Cannot push.\n");
            }
            else
            {
                printf("Enter number to add: ");
                scanf("%d", &newitem);
                push(s, newitem);
            }
            break;
        case 2:
            printf("Stack after pop out element: %d\n", pop(s));
            break;
        case 3:
            printstack(s);
            break;
        case 4:
            sort(s);
            printf("Sorted stack: ");
            printstack(s);
            break;
        case 5:
            free(s);
            exit(0);
        default:
            printf("Invalid Option.\n");
        }
    }
    return 0;
}
