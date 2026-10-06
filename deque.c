#include <stdio.h>

#define SIZE 10

int deque[SIZE];
int front = 5;
int rear = 4;

void insertFront(int value)
{
    if (front == 0)
    {
        printf("Deque is full from Front\n");
        return;
    }

    front--;
    deque[front] = value;
}

void insertRear(int value)
{
    if (rear == SIZE - 1)
    {
        printf("Deque is full from Rear\n");
        return;
    }

    rear++;
    deque[rear] = value;
}

void deleteFront()
{
    if (front > rear)
    {
        printf("Deque is empty\n");
        return;
    }

    printf("Deleted from Front: %d\n", deque[front]);
    front++;
}

void deleteRear()
{
    if (front > rear)
    {
        printf("Deque is empty\n");
        return;
    }

    printf("Deleted from Rear: %d\n", deque[rear]);
    rear--;
}

void display()
{
    if (front > rear)
    {
        printf("Deque is empty\n");
        return;
    }

    printf("Remaining elements: ");

    for (int i = front; i <= rear; i++)
    {
        printf("%d ", deque[i]);
    }

    printf("\n");
}

int main()
{
    insertFront(10);
    insertRear(20);
    insertFront(30);

    deleteFront();
    deleteRear();

    display();

    return 0;
}

