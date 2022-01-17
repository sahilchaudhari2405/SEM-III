#include <stdio.h>
#include <stdbool.h>
#include <conio.h>
int topA=-1,topB=10;
bool run=true;
void displayMenu(){
    printf("\n\n\t**Stack Operations**");
    printf("\n1) Push\n2) Pop \n3) Traverse\n4) Exit");
}

void push(int stack[], int stackSize){
  printf("\n1) PushA\n2) PushB ? ");
  int selectOperation;
  scanf("%d",&selectOperation);
  if(selectOperation==1){
    if(topA==topB){
        printf("\nStack Overflow");
    }else{
        int element;
        printf("\nEnter a new element: ");
        scanf("%d",&element);
        topA++;
        stack[topA]=element;
        printf("*Element Inserted* top=%d\n",topA);
    }
  }else{
    if(topA==topB){
        printf("\nStack Overflow");
    }else{
        int element;
        printf("\nEnter a new element: ");
        scanf("%d",&element);
        topB--;
        stack[topB]=element;
        printf("*Element Inserted* top=%d\n",topB);
    }
  }
}
void pop(int stack[]){
    printf("\n1) PopA\n2) PopB ? ");
  int selectOperation;
  scanf("%d",&selectOperation);
  if(selectOperation==1){
    if(topA==-1){
        printf("\n!!!Stack Underflow!!!");
    }else{
      int popped=stack[topA];
      printf("\nPopped element is: %d",popped);
      topA--;
      printf("\n*Element Popped*");
    }
  }else{
      if(topB==10){
          printf("\n!!!Stack Underflow!!!");
      }else{
          int popped=stack[topB];
          printf("\nPopped element is: %d",popped);
      topB++;
      printf("\n*Element Popped*");
      }
  }
}

void traverse(int stack[]){
  if(topA==-1){
    printf("Can't traverse, stack underflow!!!");
  }else{
    printf("The elements are:\n");
    int i=topA;
    while(i>-1){
      printf("%d ",stack[i]);
      i--;
    }
    printf(" ...... ");
    i=topB;
    while(i<10){
        printf("%d ",stack[i]);
        i++;
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
            case 4: printf("\n**Program Terminated**");
                    run=false;
                    break;
            default : printf("\nWrong Choice!");
                    break;
        }
    }
}

int main()
{
	int size=10;
	int stack[size];
  while(run){
    displayMenu();
	  getInput(stack,size);
  }
	return 0; 
}
