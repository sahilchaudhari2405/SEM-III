#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define size 10
int stack[size], Top = -1;

void Push()
{
   int x;
    if (Top >= size - 1)
    {
        printf("\nOverflow!!");
    }
    else
    {
        int n;
        printf("\n How many element to be inserted on stack:");
        scanf("%d", n);
        for (int i = 0; i < 3; i++)
        {
            scanf("%d", &x );
            Top++;
            stack[Top]=x;
        }
    }
};
void Pop()
{
    int pop_element;
    scanf("how many element pop%d", pop_element);
    if (Top == -1)
    {
        printf("Underflow!!");
    }
    else
    {
        for (int i = 1; i <= pop_element; i++)
        {
        Top-=i;
        }
    }
}
void show()
{

    if (Top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nElements present in the stack: \n");
        for (int i = 0; i <= Top; i++)
            printf("%d\n", stack[i]);
    }
}
int main()
{
  int choice;

    while (1)
    {
        printf("\nOperations performed by Stack");
        printf("\n1.Push the element\n2.Pop the element\n3.Show\n4.End");
        printf("\n\nEnter the choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            Push();
            break;
        case 2:
            Pop();
            break;
        case 3:
            show();
            break;
        case 4:
            exit(0);

        default:
            printf("\nInvalid choice!!");
        }
    }
    
}