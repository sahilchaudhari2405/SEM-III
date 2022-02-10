#include<iostream> 
using namespace std;

class College{
    public:
    char collegeName[20];
    char collegeAddress[20];
    char collegePhone[20];
      void getCollegeData(){
          cout<<"Enter College name: ";
          cin>>collegeName;
          cout<<"Enter College address: ";
          cin>>collegeAddress;
          cout<<"Enter College phone number: ";
          cin>>collegePhone;
      }
      void displayCollegeData(){
          cout<<endl<<"College Name is: "<<collegeName<<endl;
          cout<<"College Address is: "<<collegeAddress<<endl;
          cout<<"College Phone number is: "<<collegePhone<<endl;
      }
};

class Student:public College{
    char studentName[20],studentPhone[10];
    int studentAge;
    public:
      void getStudentData(){
          cout<<"Enter student Name: ";
          cin>>studentName;
          cout<<"Enter student Age: ";
          cin>>studentAge;
          cout<<"Enter student Phone number: ";
          cin>>studentPhone;
      }
      void displayStudentData(){
          cout<<"Student Name is: "<<studentName;
          cout<<"\nStudent Age is: "<<studentAge;
          cout<<"\nStudent Phone number is: "<<studentPhone<<endl;
      }
};

class Staff:public College{
    char staffName[20],staffSubject[10],staffDepartment[10];
    public:
      void getStaffData(){
          cout<<"Enter Staff Name: ";
          cin>>staffName;
          cout<<"Enter Staff Department: ";
          cin>>staffDepartment;
          cout<<"Enter Staff Subject: ";
          cin>>staffSubject;
      }
      void displayStaffData(){
          cout<<"Staff Name is: "<<staffName;
          cout<<"\nStaff Department is: "<<staffDeparment;
          cout<<"\nStaff Subject is: "<<staffSubject<<endl;
      }
};

int main(){
    Student student;
    Staff staff;
    cout<<"Student"<<endl;
    student.getCollegeData();
    student.getStudentData();
    student.displayCollegeData();
    student.displayStudentData();
    cout<<endl<<"Staff"<<endl;
    staff.getCollegeData();
    staff.getStaffData();
    staff.displayCollegeData();
    staff.displayStaffData();
    return 0;
}
