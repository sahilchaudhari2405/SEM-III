#include<iostream>

#include<stack>
using namespace std;

int main(){
     stack<int> i;
     i.push(1);
     i.push(2);
     i.push(3);
     i.push(4);
     i.push(5);
     i.pop();
    cout<<i.top()<<" ";
}