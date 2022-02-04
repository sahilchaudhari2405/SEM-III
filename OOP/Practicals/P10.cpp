#include<iostream> 
using namespace std;
class MyClass{
    int val;
    public:
        MyClass(int n){
            val=n;
        }
        void operator+(MyClass add){
            int sum= val + add.val;
            cout<<"The addition of two objects is: "<<sum<<endl;
        }
        void operator-(MyClass sub){
            int subtraction= val - sub.val;
            cout<<"The subtraction of two objects  is: "<<subtraction<<endl;
        }
};

int main(){
    MyClass m1(10),m2(5);
    m1+m2;
    m1-m2;
    return 0;
}