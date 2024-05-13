/* 
Problem Statement: 
Write a C++ program to Create a class template to represent generic vectors. 
Include following functions: 
To create a vector, To modify the value of given vector, Multiply vector by a 
scalar value.Display vector. 
Name :Shete Siddarth Sudhir 
Class : FYC Roll no:61 
*/ 
#include<iostream> //Header files 
using namespace std; 
// Class template to represent generic vectors 
template<typename T, typename S> 
class Vec { 
T a[3]; // Array to store vector elements 
public: //Access specifier 
// Constructor to initialize the vector 
Vec() { 
cout << "Enter the vector: \n"; 
for (int i = 0; i<3; i++) { 
cout << "a[" << i << "] = "; 
cin >> a[i]; 
} 
cout << "The vector is: " 
<< a[0] << "i + " 
<< a[1] << "j + " 
<< a[2] << "k" << endl; 
} 
// Function to modify the vector 
void modify() { 
cout << "\nDo you want to modify a single element or the entire vector?\n1: Single element\n2: Entire Vector\nYour choice: "; int op; 
cin >> op; 
switch(op) { 
case 1: 
{ 
cout << "\nEnter:\n1: first element\n2: second element\n3: third element\nYour choice:"; 
int mi; 
cin >> mi; 
switch(mi) { 
case 1: { 
cout << "\nEnter the new first element: "; 
cin >> a[0]; 
break; 
} 
case 2: { 
cout << "\nEnter the new second element: "; 
cin >> a[1]; 
break; 
} 
case 3: { 
cout << "\nEnter the new third element: "; 
cin >> a[2]; 
break; 
} 
default: 
cout << "Invalid Input!!!" << endl; 
break; 
} 
break; 
} 
case 2: { 
cout << "\nEnter the new vector: " << endl; 
for (int i = 0; i<3; i++) { 
cout << "a[" << i << "] = "; 
cin >> a[i]; 
} 
break; 
} 
default: 
cout << "Invalid Input!!!" << endl; 
break; 
} 
cout << "\nThe modified vector is: " 
<< a[0] << "i + " 
<< a[1] << "j + "
<< a[2] << "k" << endl; 
} 
// Function to multiply the vector by a scalar value 
void multiply() { 
S Scalar; 
cout << "\nEnter the scalar value: "; 
cin >> Scalar; 
for (int i = 0; i < 3; i++) { 
a[i] = a[i] * Scalar; 
} 
cout << "\nAfter Multiplication: " 
<< a[0] << "i + " 
<< a[1] << "j + " 
<< a[2] << "k" << endl; 
} 
}; 
int main() { 
int ch;
Vec <int, double> V; // Create an instance of the Vec class with int and double types int ch; 
cout << "\nEnter:\n1: Modify Vector\n2: Multiply by Scalar\nYour Choice: ";
cin >> ch; 
switch(ch) { 
case 1: { 
V.modify(); 
break; 
} 
case 2: { 
V.multiply(); 
break; 
} 
default: 
cout << "Invalid Input!!!" << endl; 
break; 
} 
return 0; 
} 

