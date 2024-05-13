/*Assignment no: 01
Problem Statements: WRITE A CPP PROGRAM TO DISPLAY NAMES,EMPLOYEE_ID,SALARY OF 
THREE EMPLOYEES DECLEAR THE CLASS OF EMPLOY CREATE A ARRAY OF 
CLASS OBJECTS READ AND DISPLAY THE CONTENT OF ARRAY
Name:Shete Siddarth Sudhir
Class : FYC Roll no:61
*/
#include<iostream>
#include<string.h>
using namespace std;
class employee{
 public:
 string name;
 int id;
 int salary;
};
int main()
{
 employee e[100];
 int a,i;
 cout<<"Enter the number of Employees : "<<endl;
 cin>>a;
 for(i=0;i<a;i++)
 {
 cout<<"Name of Employee "<<i+1<<endl;
 cin>>e[i].name;
 cout<<"ID of Employee "<<i+1<<endl;
 cin>>e[i].id;
 cout<<"Salary of Employee "<<i+1<<endl;
 cin>>e[i].salary;
 }
 for(i=0;i<a;i++)
 {
 cout<<"Name of Employee "<<i+1<<" : "<<e[i].name<<endl;
 cout<<"ID of Employee "<<i+1<<" : "<<e[i].id<<endl;
 cout<<"Salary of Employee "<<i+1<<" : "<<e[i].salary<<endl;
 }
 return 0;
 
}
/*
Output:
Enter the number of Employees : 
2
Name of Employee 1
Rajesh
ID of Employee 1
123456
Salary of Employee 1
30000
Name of Employee 2
Suresh
ID of Employee 2
543216
Salary of Employee 2
45000
Name of Employee 1 : Rajesh
ID of Employee 1 : 123456
Salary of Employee 1 : 30000
Name of Employee 2 : Suresh
ID of Employee 2 : 543216
Salary of Employee 2 : 45000
*/
