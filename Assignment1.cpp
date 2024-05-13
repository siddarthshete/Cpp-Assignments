/*Assignment No: 01
Problem Statement: WRITE A CPP PROGRAM TO DISPLAY NAMES,EMPLOYEE_ID,SALARY OF THREE EMPLOYEES DECLEAR THE CLASS OF EMPLOY CREATE A ARRAY OF 
CLASS OBJECTS READ AND DISPLAY THE CONTENT OF ARRAY
Name : Shete Siddarth Sudhir
Class: FYC   Rollno:61
*/
#include<iostream>              //  Header files
#include<string.h>
using namespace std;
class employee{             // Class declaration
    public:
    string name;
    int id;
    int salary;
};
int main()          
{
    employee e[100];                    //Object Creation
    int a,i;
    cout<<"Enter the number of Employees : "<<endl;
    cin>>a;

        for(i=0;i<a;i++)            //  for loop1
    {
        cout<<"Name of Employee "<<i+1<<endl;
        cin>>e[i].name;
        cout<<"ID of Employee "<<i+1<<endl;                 //taking inputs from user
        cin>>e[i].id;
        cout<<"Salary of Employee "<<i+1<<endl;
        cin>>e[i].salary;
    }

        for(i=0;i<a;i++)            //for loop 2
        {
            cout<<"Name of Employee "<<i+1<<" : "<<e[i].name<<endl;
            cout<<"ID of Employee "<<i+1<<" : "<<e[i].id<<endl;                     //Displaying the outputs
            cout<<"Salary of Employee "<<i+1<<" : "<<e[i].salary<<endl;


        }
        return 0;
        
}
