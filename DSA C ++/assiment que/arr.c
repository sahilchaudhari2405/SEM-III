#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void display(int* arr){
 for (int i = 0; i < 5; i++)
 {
    printf("%d  ",arr[i]);
 }
 
}
void main(){
    int arr[5];
    for (int i = 0; i <5; i++)
    {
        scanf("%d",&arr[i]);
    }
    display(arr);
    
}