#include <stdio.h>
#include <stdlib.h>
#define Size 10

int Rear = -1, Queue[Size];
int Front = -1;
void Insert(int x)
{

    if (Rear == Size - 1 && Front == 0)
    {
        printf("\ncircular queue Overflow!!");
    }
    if (Front == -1)
    {
        Front = 0;
        Rear = 0;
    }
     Queue[Rear] = x;
     Rear++;


}

void Delete()
{
    if (Front == Rear)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        Front++;
        printf("\ndelete front  element on queue which is->:  %d", Queue[Front]);
        printf("\n");
    }
}

void Traverse()
{

    if (Front == Rear)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nprinting all Elements present on queue: \n");
        for (int i = Front; i < Rear; i++)
            printf("%d ", Queue[i]);
            printf("\n");
    }
}
int main()

{

    int choice, val;

    do

    {

        printf("1.Insert\n");

        printf("2.Delete\n");

        printf("3.print element\n");

        printf("4.Quit\n");

        printf("Enter your choice : ");

        scanf("%d", &choice);

        switch (choice)

        {

        case 1:

            printf("Input the element for insertion in cqqueue : ");

            scanf("%d", &val);

            Insert(val);

            break;

        case 2:

            Delete();

            break;

        case 3:

            Traverse();

            break;

        case 4:

            break;

        default:

            printf("Wrong choice\n");
        }

    } while (choice != 4);

    return 0;
}
