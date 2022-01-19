#include<stdio.h>
#include<stdlib.h>
#define Size 4 
  
int Top=-1, stack[Size];
void Push();
void Pop();
void show();
  
int main()
{
    int operation;
     
    while(1)    
    {
      
        printf("\n1=is Push the element\n2=is Pop the element\n3=is Show\n4=is stop program");
        printf("\n\nEnter the number which you want to perform:");
        scanf("%d",&operation);
         
        switch(operation)
        {
            case 1: Push();
                    break;
            case 2: Pop();
                    break;
            case 3: show();
                    break;
            case 4: exit(0);
             
            default: printf("\nInvalid number!!");
        }
    }
}
  
void Push()
{
    int x;
     
    if(Top==Size-1)
    {
        printf("\nOverflow!!");
    }
    else
    {
        printf("\nEnter element to be inserted to the stack:");
        scanf("%d",&x);
        Top++;
        stack[Top]=x;
    }
}
  
void Pop()
{
    if(Top==-1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nPopped top element which is->:  %d",stack[Top]);
        Top=Top-1;
    }
}
  
void show()
{
     
     
    if(Top==-1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nprinting all Elements present on stack: \n");
        for(int i=Top;i>=0;i--)
            printf("%d\n",stack[i]);
    }
}