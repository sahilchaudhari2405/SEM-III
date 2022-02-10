#include <bits/stdc++.h>
using namespace std;
int solve(int arr[], int n, int key)
{
    int low = 0, high = n - 1;
    int ans = -1;
    while (low <= high){
        int mid = (low + high) / 2;
        if (key == arr[mid])
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    } 
    return -1;
}
int main()
{
    int n, key;
    cout<<"Enter size: ";
    cin >> n;
    int arr[n];
    cout<<"Enter array elements: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    cout<<"Enter search element: ";
    cin>>key;
    int a =solve(arr, n, key);
}
