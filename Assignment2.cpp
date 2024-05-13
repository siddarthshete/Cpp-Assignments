#include<iostream>
using namespace std;
class DM{
    private: 
    long int m;
    long int cm;
    public:
    void take(){
        cout<<"Enter value in meter:";
        cin>>m;

    }
    friend DM add(DM m,DM cm);
};
DM add (DM S1,DM S2)
{
    int tm,tcm;
    tcm=(S1.m*100+S2.m*100);
    tm=tcm/100;
    cout<<tm<< " meter"<<endl;
    cout<<tcm<<" centimeter"<<endl;

};
int main()
{
    DM S1, S2;
    cout<<"Enter distance 1:"<<endl;
    S1.take();
    cout<<"Enter distance 2:"<<endl;
    S2.take();
    cout<<"The Total distance is :"<<endl;
    add(S1,S2);
    return 0;
}

