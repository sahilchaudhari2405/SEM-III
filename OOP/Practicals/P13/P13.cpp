#include<iostream> 
using namespace std;
template <class T>
void add(T n1, T n2){
    T ans=n1+n2;
    cout<<"The addition of "<<n1<<" and "<<n2<<" is "<<ans<<endl;
}
int main(){
    add(5,10);
    add(2.5f,5.7f);
    add(true,false);
    return 0;
}