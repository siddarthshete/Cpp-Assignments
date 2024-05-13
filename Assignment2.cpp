/*
Assignment No: 02
Problem Statement :
 Write a cpp program to create class DM which stores the value 
of distance in meter and centimeters. Read the values for a class object and find 
greatest
 distance from two objects.Use friend function to carry the addition
operation. The display should be in format of meters and centimeter.
Name:Shete Siddarth Sudhir
Class: FYC Roll no: 61
*/
#include<iostream> // Header files
using namespace std;
class DM //class declaration
{
public: //access specifier
int meter;
int centimeter;
public:
DM()
{
meter=0;
centimeter=0;
}
DM(int m,int cm)
{
meter=m;
centimeter=cm;
}
friend DM add(DM d1,DM d2) //friend function
{
int cm=d1.centimeter+d2.centimeter;
int m=d1.meter+d2.meter;
cm=cm%100;
return DM(m,cm);
}
void putdata() //member function
{
cout<<"Meter:"<<meter<<endl;
cout<<"Centimeter:"<<centimeter<<endl;
}
friend DM great(DM d1,DM d2) //friend function
{
float dist1=d1.meter*100+d1.centimeter;
float dist2=d2.meter*100+d2.centimeter;
cout<<"greater object:\n"; //condition forchecking greater distance
if(dist1>dist2)
{
cout<<"first object is greater\n";
}
else
{
cout<<"second object is greater\n";
}
return DM(dist1,dist2);
}
};
int main()
{
int m1,m2,cm1,cm2;
cout<<"Enter the Distance in Meter for First object:";
cin>>m1;
cout<<"Enter the Distance in Centimeter for First object:";
cin>>cm1;
cout<<"Enter the Distance in Meter for second object:";
cin>>m2;
cout<<"Enter the Distance in Centimeter for second object:";
cin>>cm2;
DM d1(m1,cm1);
DM d2(m2,cm2);
DM d3=add(d1,d2);
cout<<"Distance of first object\n";
d1.putdata();
cout<<"Distance of second object\n";
d2.putdata();
cout<<"Total distance:\n";
d3.putdata();
great(d1,d2);
return 0;
}
/*Output:
Enter the Distance in Meter for First object:12
Enter the Distance in Centimeter for First object:20
Enter the Distance in Meter for second object:8
Enter the Distance in Centimeter for second object:40
Distance of first object
Meter:12
Centimeter:20
Distance of second object
Meter:8
Centimeter:40
Total distance:
Meter:20
Centimeter:60
greater object:
first object is greater
*/
