/*
Assignment no:06
Problem Statement: Write a cpp program to make operators for a publishing company which does markwting for book and audio cassette versions.
 Create a class publication that stores the title (a Write a program that instantiates the book and tape class, Allows user to enter the data and 
 display the data members. If an exception is caught, replace all the data member values with zero values
 Name :Shete Siddarth Sudhir
Class : FYC Roll no:61
*/
#include<iostream> //Header Files
#include<string>
using namespace std;
class publication // base class (publication)
{
protected: //Access specifier
string title; //data members
float price;
public: //Access specifier
virtual void getdata() //virtual function
{
}
virtual void display()
{
}
};
class book : public publication // Derived class (book)
{
private: //Access specifier
int page_count;
public: //Access specifier
void getdata() //Member function
{
cout << "Enter title: ";
getline(cin, title);
cout << "Enter price: ";
cin >> price;
cin.ignore();
cout << "Enter page count: ";
cin >> page_count;
cin.ignore(); // Ignore the newline character left in the input buffer
}
void display() //Member function
{
cout<<"Title: "<<title<<endl;
cout<<"Price: "<<price<<endl;
cout<<"Page Count: "<<page_count<<endl;
}
};
class tape : public publication //tape class
{
private: //Access specifier
float playing_time;
public: //Access specifier
void getdata() //Member function
{
cout << "Enter title: ";
getline(cin, title);
cout << "Enter the cost: ";
cin >> price;
cin.ignore(); // Ignore the newline character left in the input buffer
cout << "Enter playing time (in minutes): ";
cin >> playing_time;
cin.ignore(); // Ignore the newline character left in the input buffer
}
void display() //Member function
{
cout<<"Title: "<<title<<endl;
cout<<"Price: "<<price<<endl;
cout<<"Playing Time: "<<playing_time<<" minutes"<<endl;
}
};
int main()
{
publication* pubptr; //assigning the pointer
book b; 
tape t;
try { //try block
cout << "Enter details for a book:" << endl;
pubptr = &b;
pubptr->getdata();
cout << "\nEnter details for a tape:" << endl;
pubptr = &t;
pubptr->getdata();
cout << "\nDisplaying details entered:" << endl;
cout << "\nBook details:" << endl;
pubptr = &b;
pubptr->display();
cout << "\nTape details:" << endl;
pubptr = &t;
pubptr->display();
} catch (...) { // caught block
b.getdata(); // Re-enter data for book
t.getdata(); // Re-enter data for tape
cout << "An exception is occured\n" << endl;
}
return 0;
}
