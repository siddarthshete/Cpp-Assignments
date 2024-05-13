/* 
ASSIGNMENT:08
Problem statement :Write a C++ program to Create a class of employees (data  members name, 
DOB, mobile). Write a function to accept the data and display the information. Use exception handling while accepting the data. e.g in DOB day value should be
 in between 1 to 31, month value should be in between 1 to 12 etc. Store and retrieve a data from the file.

 Name : Shete Siddarth Sudhir
 Class : F.Y.Comp      Div:C
 Roll no: 61 
 */ 

#include <iostream> 
#include <fstream>/*headfile for fstream*/ 
using namespace std; 
class employees /*class for employees data*/ 
{ 
public : 
string name; 
int month; 
int day; 
int year; 
string mob; 
void read() 
{ 
cout<<"Enter Name : "; 
cin>>name; 
cout<<"\n"; 
cout<<"Enter Date of Birth : "; 
cout<<"\n"; 
try/*exception handling for date of birth*/ 
{ 
cout<<"Day : "; 
cin>>day; 
cout<<"\n"; 
if(day>31) 
{ 
cout<<"Invalid day"; 
cout<<"\n"; 
throw day; 
} 
else if (day<0) 
{ 
cout<<"Invalid day"; 
cout<<"\n"; 
throw day; 
} 
} 
catch (int day)/*sets default value*/ 
{ 
day=1; 
cout<<"Default day set!!!"; 
cout<<"\n"; 
} 
try 
{ 
cout<<"Month : "; 
cin>>month; 
cout<<"\n"; 
if(month>12) 
{ 
cout<<"Invalid Month"; 
cout<<"\n"; 
throw month; 
}
else if (month<0) 
{ 
cout<<"Invalid Month"; 
cout<<"\n"; 
throw month; 
} 
} 
catch (int month) 
{ 
month=1; 
cout<<"Default Month set!!!"; 
cout<<"\n"; 
} 
cout<<"Year : "; 
cin>>year; 
cout<<"Enter Mobile Number : "; 
cin>>mob; 
cout<<"\n"; 
} 
friend void fill(employees l) /*function to read and output data into the  file*/ 
{ 
fstream emp; 
emp.open("Employ.txt"); 
emp.seekg(0,ios::end); 
emp<<l.name; 
emp<<"\n"; 
emp<<"DOB: " <<l.day<<"|"<<l.month<<"|"<<l.year<<"|"; 
emp<<"\n"; 
emp<<l.mob; 
emp<<"\n"; 
emp<<"********************************"; 
emp<<"\n"; 
emp.close(); 
} 
}; 
int main() { 
int o,i; 
cout<<"Enter number of Employees : "; 
cin>>o; 
employees list[o]; 
for(i=0;i<o;i++)/*input data into file*/ 
{ 
list[i].read(); 
fill(list[i]); 
} 
fstream emp; 
emp.open("Employ.txt"); 
string jolly; 
emp>>jolly; 
while(emp)/*output data */ 
{ 
cout<<jolly; 
cout<<"\n"; 
emp>>jolly; 
} 
cout<<"\n"; 
cout<<emp.tellp(); 
emp.close(); 
 return 0; 
}

/*
OUTPUT:
Enter number of Employees : 2
Enter Name : Siddarth

Enter Date of Birth : 
Day : 16

Month : 02

Year : 2004
Enter Mobile Number : 8317171202

Enter Name : dev

Enter Date of Birth :
Day : 08  

Month : 04

Year : 2005
Enter Mobile Number : 142578964

*/

