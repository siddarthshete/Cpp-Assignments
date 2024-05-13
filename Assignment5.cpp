/*
Asaignment no: 05
Name:Shete Siddarth Sudhir
Div: C Roll no: 61
Problem Statement: Write a c++ program to impliment a class complex which impliment
the following 
1] Constructor (including a default constructor which creates the complex number 
a+ib)
2]Overload operator + to add 2 complex numbers 
3]Overload operator multiply (*) to multiply 2 complex numbers. 
*/
#include<iostream>
using namespace std;
class complex{
 private: 
 float real,imag;
 public:
 complex():real(0),imag(0){}
 void input(){
 cout<<"Enter Real and Imaginary parts respectively";
 cin>>real>>imag;
 }
 complex operator + ( complex & obj){
 complex temp;
 temp.real=real+obj.real;
 temp.imag=imag+obj.imag;
 return temp;
 }
 void output(){
 if(imag<0)
 {
 cout<<"output complex number:";
 cout<<real<<imag<<"i";
 }
 else{
 cout<<"output complex number:";
 cout<<real<<"+"<<imag<<"i";
 }
 }
 complex operator * (complex & obj){
 complex temp;
 temp.real=real*obj.real-imag*obj.imag;
 temp.imag=real*obj.imag-obj.real*imag;
 return temp;
 }
 
 };
 int main()
 {
 int op;
 cout<<"Select the option:"<<endl;
 cout<<"1.Addition of complex number"<<"\n"<<"2.Multiplication of Complex 
number"<<endl;
 cin>>op;
 complex num1,num2,result;
 
 switch(op){
 case 1: 
 cout<<"Enter first complex number:"<<endl; 
 num1.input();
 cout<<"Enter second complex number:"<<endl;
 num2.input();
 result=num1+num2;
 result.output();
 
 break;
 
 case 2:
 cout<<"Enter first complex number:"<<endl;
 num1.input();
 cout<<"Enter second complex number:"<<endl;
 num2.input();
 result=num1*num2;
 result.output();
 break;
 
 default:
 cout<<"Enter the right choice:"<<endl;
 
 }
 return 0;
 }
 /*
 Output:
 Select the option:
1.Addition of complex number
2.Multiplication of Complex number
1
Enter first complex number:
Enter Real and Imaginary parts respectively12 41
Enter second complex number:
Enter Real and Imaginary parts respectively22 12
output complex number:34+53i
 */
