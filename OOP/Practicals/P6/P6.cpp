#include<iostream> 
using namespace std;
class Complex{
    int real,img;
    public:
        void getNumber(){
            cout<<"Enter real part: ";
            cin>>real;
            cout<<"Enter imaginary part: ";
            cin>>img;
        }
        void printSum(){
            cout<<"The sum is : "<<real<<"+"<<img<<"i"<<endl;
        }
        friend Complex sumComplex(Complex num1, Complex num2);
};
Complex sumComplex(Complex a, Complex b){
    Complex ans;
    ans.real=a.real+b.real;
    ans.img=a.img+b.img;
    return ans;
}

int main()
{
    Complex c1,c2,ans;
    cout<<"Enter real and imaginary part for 1st number"<<endl;
    c1.getNumber();
    cout<<"Enter real and imaginary part for 2nd number"<<endl;
    c2.getNumber();
    ans=sumComplex(c1,c2);
    ans.printSum();
    return 0;
} 

