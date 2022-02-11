#include <stdio.h>
#include <stdbool.h>
#include <conio.h>
int rear = -1, front = -1;
bool run = true;
void displayMenu()
{
    printf("\n\n\t**Double Ended Queue Operations**");
    printf("\n1) Insert at First\n2) Delete from First \n3) Insert at Last \n4) Delete from Last \n5) Traverse\n6) Exit");
}

void insertLast(int queue[], int queueSize)
{
    if (rear == queueSize)
    {
        printf("\nQueue is full front the rear end!!!");
    }
    else
    {
        if (rear == -1)
        {
            rear = front = 0;
        }
        else
        {
            rear++;
        }

        int element;
        printf("\nEnter an element ");
        scanf("%d", &element);
        queue[rear] = element;
        printf("\nElement inserted!!!");
        //traverse(queue);
    }
}

void insertFirst(int queue[], int queueSize)
{
    if (front == 0)
    {
        printf("\nQueue is full from the front end!!!");
    }
    else
    {

        if (front == -1)
        {
            rear = front = 0;
        }
        else
        {
            front--;
        }
        int element;
        printf("\nEnter an element ");
        scanf("%d", &element);
        queue[front] = element;
        printf("\nElement inserted at front!!!");
        //traverse(queue);
    }
}

void removeFirst(int queue[])
{
    int deletedElement;
    if (front == -1)
    {
        printf("\nQueue is empty, can't delete' ");
    }
    else
    {
        deletedElement = queue[front];
        printf("Element deleted!!!");

        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front++;
        }
    }
    //traverse(queue);
}

void removeLast(int queue[])
{
    int deletedElement;
    if (rear == -1)
    {
        printf("\nQueue is empty, can't delete' ");
    }
    else
    {
        deletedElement = queue[front];
        printf("Element deleted!!!");

        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            rear--;
        }
    }
    //traverse(queue);
}


void traverse(int queue[])
{

    if (front == -1)
    {
        printf("\nQueue is empty, can't traverse!");
    }
    else
    {
        printf("\nThe elements are: ");
        int i = front;
        while (i <= rear)
        {
            printf("|_%d_", queue[i]);
            i++;
        }
    }
}

int getInput(int queue[], int queueSize)
{
    int operation;
    printf("\n\nEnter an operation number: ");
    scanf("%d", &operation);
    if (operation < 1 || operation > 6)
    {
        printf("\nInvalid input ");
    }
    else
    {
        switch (operation)
        {
        case 1:
            insertFirst(queue, queueSize);
            break;
        case 2:
            removeFirst(queue);
            break;
        case 3:
            insertLast(queue, queueSize);
            break;
        case 4:
            removeLast(queue);
            break;
        case 5:
            traverse(queue);
            break;
        case 6:
            printf("\n**Program Terminated**");
            run = false;
            break;
        default:
            printf("\nWrong Choice! ");
            break;
        }
    }
}

int main()
{
    int size = 10;
    int queue[size];
    while (run)
    {
        displayMenu();
        getInput(queue, size);
        printf("\n(Front = %d,Rear = %d)", front, rear);
    }
    return 0;
}