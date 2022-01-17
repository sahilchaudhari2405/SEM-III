#include <stdio.h>
#include <stdbool.h>
#include <conio.h>
int top=-1;
bool run=true;
void displayMenu(){
    printf("\n\n\t***Stack Operations***");
    printf("\n1) Push\n2) Pop \n3) Traverse\n4) Exit");
}

void push(int stack[], int stackSize){
    if(top==stackSize-1){
        printf("\nStack Overflow");
    }else{
        int element;
        printf("\nEnter a new element: ");
        scanf("%d",&element);
        top++;
        stack[top]=element;
        printf("**Element Inserted** top=%d\n",top);
    }
}
void pop(int stack[]){
    if(top==-1){
        printf("\n!!!Stack Underflow!!!");
    }else{
      printf("\nPopped element is: %d",stack[top]);
      top--;
      printf("\n**Element Popped**");
    }
}

void traverse(int stack[]){
  if(top==-1){
    printf("Can't traverse, stack underflow!!!");
  }else{
    printf("The elements are:\n");
    for(int i=0;i<=top;i++){
      printf("%d ",stack[i]);
    }
  }  
}

int getInput(int stack[],int stackSize){
    int operation;
    printf("\n\nEnter an operation number: ");
    scanf("%d",&operation);
    if(operation<1 || operation>4){
        printf("\nInvalid input") ;
    }else{
        switch(operation){
            case 1: push(stack,stackSize);
                    break;
            case 2: pop(stack);
                    break;
            case 3: traverse(stack);
                    break;
            case 4: printf("\n***Program Terminated***");
                    run=false;
                    break;
            default : printf("\nWrong Choice!");
                    break;
        }
    }
}

int main()
{
	int size;
	printf("Enter stack size: ");
	scanf("%d",&size);
	int stack[size];
  while(run){
    displayMenu();
	  getInput(stack,size);
  }
	return 0; 
}
