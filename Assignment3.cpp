/*
Assignment 03:
Problem statement : Write a c++ program to develop a program in c++ to create a 
database 
 of a students information system containing the following information:
 Name, Roll number, Class, Division, Date of Birth and Telephone number 
construct the
 database with struture member function make use of constructor, default 
constructor ,
 copy constructor , destructor,count number of students.
Name:Shete Siddarth Sudhir
Class: FYC Roll no: 61
*/
#include<iostream> //header files
#include<string.h>
using namespace std;
class student //Class declaration
{
 char name[25];
 int rollno;
 char cls[10];
 char div;
 int dob;
 long int telno;
 
 public: //Access specifier
 student() //Constructor made
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
 ~student() // Destructor 
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
/*
Output:
Enter the number of Students: 
2
Name of student: 
Siddarth
Roll number of student: 
61
Class of student: 
FYC
Division of student: 
C
DOB of student (in format DDMMYY) :
16022004
Telephone number of student : 
1234567890
Name of student:
pratik
Roll number of student:
54
Class of student:
fyb
Division of student:
b
DOB of student (in format DDMMYY) :
15062004
Telephone number of student :
9876540123
Siddarth 61 FYC C 16022004 1234567890
pratik 54 fyb b 15062004 2147483647
Destroyer worked
Destroyer worked
*/
