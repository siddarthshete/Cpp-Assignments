/*
ASSIGNMENT_NO_04
Name: Shete Siddarth Sudhir 
ROllno:61 Div:C 
Problem Statement: 
 Write a c++ program to create base person, 
Derive acedamic performance class degree and percentage from person 
 class and display biodata of person.
*/
#include<iostream> //Header file 
using namespace std;
class person{ //class declaration 
 protected: //Acess specifier
char name[50]; //data members
long int pno;
 public: //Acess specifier
 void getdata() //member function
{
cout<<"Enter name of student"<<endl; //input and
output statements
cin>>name;
cout<<"Enter the phone number"<<endl;
cin>>pno;
}
};
class academic_performance : public person //Derived class 
person
{
 char deg[20]; //data members
int per;
 public: //Acess 
specifier
void setdata()
//member function
 {
 cout<<"Enter the name of qualified degree "<<endl;
 cin>>deg;
 cout<<"Enter the percentage "<<endl;
 cin>>per;
 }
 void display(){
 cout<<name<<"\t"<<pno<<"\t"<<deg<<"\t"<<per<<endl;
 }
 };
 int main() //main function
 {
 int i,a;
 
 cout<<"Enter the number of persons"<<endl;
cin>>a;
academic_performance p[a];
for(i=0;i<a;i++)
{
p[i].getdata();
p[i].setdata();
}
cout<<"\n name \t phone number \t degree \t 
percentage \n";
 for(i=0;i<a;i++)
{
p[i].display();
}
 return 0; //return 
value/type 
 }
 
/*
Output:
Enter the number of persons
3
Enter name of student
Siddarth
Enter the phone number
123456
Enter the name of qualified degree 
btech
Enter the percentage
86
Enter name of student
rajesh
Enter the phone number
7894556
Enter the name of qualified degree
be
Enter the percentage
88
Enter name of student
krushna
Enter the phone number
852147
Enter the name of qualified degree
bsc
Enter the percentage
78
 name phone number degree percentage
Siddarth 123456 btech 86
rajesh 7894556 be 88
krushna 852147 bsc 78
*/
 
 
