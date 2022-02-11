#include<iostream> 
using namespace std;
class Student{
    char name[20];
    int roll;
    long enroll;
    public:
        Student(char name[], int roll, long enroll){
            cout<<"The name of the student is - "<<name;
            cout<<"\nThe Roll number of the student is - "<<roll;
            cout<<"\nThe Enrollment number of the student is - "<<enroll;
        }
        ~Student(){
            cout<<"\nDestructor invoked"<<endl;
        }
};

int main(){
    Student s1("Lovely",101,1915430221);

    return 0;
}