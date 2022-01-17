#include <stdio.h>
#include <stdbool.h>
#include <conio.h>
//declaring and initializing rear and front pointers with -1
int rear=-1,front=-1;
bool run=true;
void displayMenu(){
    printf("\n\n\t**Queue Operations**");
    printf("\n1) Insert\n2) Delete \n3) Traverse\n4) Exit");
}

//method to insert at the end because elements are added at the rear section of queue
void insertInQueue(int queue[], int queueSize){
  /*if rear is equal to the max size, that means the queue is 
  full because we are adding elements in the rear section and 
  after every insertion the rear is being incremented*/
  if(rear==queueSize){
    printf("\nQueue is full!!!");
  }else{
    /*
    initially when there are no elements in queue then, for the first time if we add any element then front and rear both should be increarmentd to 0
    */
    if(rear==-1){
      rear=front=0;
    }else{
        rear++; //and rest of the time increment rear only
    }
    /*
    now just use rear as index to insert elements in the queue
    */
    int element;
    printf("\nEnter an element ");
    scanf("%d",&element);
    queue[rear]=element;
    printf("\nElement inserted!!!");
  }
}
void deleteFromQueue(int queue[]){
    /*
    since the deletion takes place from the front part of the queue we use front pointer. Now if there are no elements in the queue then the front must be equal to -1 and we can say that the queue is empty.
    */
    int deletedElement;
    if(front==-1){
      printf("\nQueue is empty, can't delete' ");
    }else{
      deletedElement=queue[front];
      printf("Element deleted!!!");
      /*
      now consider a situation when we are deleting element and only one element is left at some random index, so front and rear must be pointing to that element's index, right? so in such a scenario we must re-initialize both front and rear to -1 to make available the entire queue available for the next operation cycle
      */
      if(front==rear){
        front=-1;
        rear=-1;
      }else{
        front++; // or  just increment the front after every deletion
      }
    }
}

void traverse(int queue[]){
  /*
  since we access elements from the front we will check the status of front pointer. If it's value is -1 then there are no elements hence queue is empty.
  */
  if(front==-1){
    printf("\nQueue is empty, can't traverse!");
  }else{
    printf("\nThe elements are: ");
    int i=front; //because front points to the very first/oldest element present in the queue
    while(i<=rear){
      printf("%d ",queue[i]);
      i++;
    }
  }
}

int getInput(int queue[],int queueSize){
    int operation;
    printf("\n\nEnter an operation number: ");
    scanf("%d",&operation);
    if(operation<1 || operation>4){
        printf("\nInvalid input ") ;
    }else{
        switch(operation){
            case 1: insertInQueue(queue,queueSize);
                    break;
            case 2: deleteFromQueue(queue);
                    break;
            case 3: traverse(queue);
                    break;
            case 4: printf("\n**Program Terminated**");
                    run=false;
                    break;
            default : printf("\nWrong Choice! ");
                    break;
        }
    }
}

int main()
{
	int size=10;
	int queue[size];
  while(run){
    displayMenu();
	  getInput(queue,size);
    printf("\n(Front = %d,Rear = %d)",front,rear);
  }
	return 0; 
}
