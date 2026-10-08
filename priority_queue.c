#include <stdio.h>

#define SIZE 10

int queue[SIZE];
int priority[SIZE];
int count = 0;

void insert(int value, int p)
{
    queue[count] = value;
    priority[count] = p;
    count++;
}

void deleteHighestPriority()
{
    if (count == 0)
    {
        printf("Priority Queue is empty\n");
        return;
    }

    int highest = 0;

    for (int i = 1; i < count; i++)
    {
        if (priority[i] < priority[highest])
        {
            highest = i;
        }
    }

    printf("Deleted element: %d\n", queue[highest]);

    for (int i = highest; i < count - 1; i++)
    {
        queue[i] = queue[i + 1];
        priority[i] = priority[i + 1];
    }

    count--;
}

void display()
{
    printf("Remaining elements with priorities:\n");

    for (int i = 0; i < count; i++)
    {
        printf("Element: %d, Priority: %d\n", queue[i], priority[i]);
    }
}

int main()
{
    insert(10, 2);
    insert(20, 1);
    insert(30, 3);

    deleteHighestPriority();

    display();

    return 0;
}