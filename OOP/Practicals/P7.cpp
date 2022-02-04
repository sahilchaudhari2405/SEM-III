#include<iostream> 
using namespace std;
void callByValue(int a, int b){
    int temp=a;
    a=b;
    b=temp;
    cout<<"Values of a and b after swapping in call by value "<<a<<" "<<b<<endl;
}
void callByReference(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
    cout<<"Values of a and b after swapping in call by reference "<<*a<<" "<<*b<<endl;
}

int main(){
    int n1=1,n2=2;
    cout<<"Values of a and b before swapping "<<n1<<" "<<n2<<endl;
    callByValue(n1,n2);
    callByReference(&n1,&n2);
    cout<<"Values of a and b after swapping "<<n1<<" "<<n2<<endl;
    return 0;
}