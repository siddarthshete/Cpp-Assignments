/*
Assignment 03:
Problem statement : Write a c++ program to develop a program in c++ to create a database 
            of a students information system containing the following information:
         Name, Roll number, Class, Division, Date of Birth and Telephone number construct the
     database with struture member function make use of constructor, default constructor ,
    copy constructor , destructor,count number of students.
*/
#include<iostream>
#include<string.h>
using namespace std;
class student
{
    char name[25];
    int rollno;
    char cls[10];
    char div;
    int dob;
    long int telno;
    
    public:
    student()
    {
        
   
        cout<<"Name of student: "<<endl;
        cin>>name;
        cout<<"Roll number of student: "<<endl;
        cin>>rollno;
        cout<<"Class of student: "<<endl;
        cin>>cls;
        cout<<"Division of student: "<<endl;
        cin>>div;
        cout<<"DOB of student (in format DDMMYY) :"<<endl;
        cin>>dob;
        cout<<"Telephone number of student : "<<endl;
        cin>>telno;
      
    }
    ~student()
{
    cout<<"Destroyer worked"<<endl;
}
    void display(int n)
    
    {
        cout<<name<<"\t"<<rollno<<"\t"<<cls<<"\t"<<div<<"\t"<<dob<<"\t"<<telno<<"\t"<<endl;
    }   
    

};
int main()
{
    int a,i;
cout<<"Enter the number of Students: "<<endl;
cin>>a;

    student s[a];
    for(i=0;i<a;i++)
    {
    s[i].display(i);
    }
    
    return 0;

}