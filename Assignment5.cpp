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
    complex operator + (const complex & obj){
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

    };
    int main(){
        complex num1,num2,result;
        cout<<"Enter first complex number:"<<endl;
        num1.input();
        cout<<"Enter secound complex number:"<<endl;
        num2.input();
        result=num1+num2;
        result.output();
        return 0;

    }
