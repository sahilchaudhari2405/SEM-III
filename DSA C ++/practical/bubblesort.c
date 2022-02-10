
#include <stdio.h>
#include <conio.h>

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        // Last i elements are already in place
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
// Driver code
int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    
    bubbleSort(arr,*(&arr + 1) - arr );
     printf("sorted array\n");
    // for loop used for print sorted array
    for (int i = 0; i < *(&arr + 1) - arr; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    getch();
    return 0;
}
