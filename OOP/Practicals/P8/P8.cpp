#include<iostream> 
using namespace std;
void sumOfArray(int arr[], int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    cout<<"The sum of array elemets is: "<<sum<<endl;
}
int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter array elements: ";
    for(int i = 0;i<size;i++){
        cin>>arr[i];
    }
    sumOfArray(arr,6);
    return 0;
}