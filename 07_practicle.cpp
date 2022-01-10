#include<iostream>
using namespace std;
class DB;
class DM
{
public:
float meter,centimeter;
void get_data()
 {
cout<<"Enter Distance in meter's and in centimeter : "<<endl;
cin>>meter>>centimeter;
 }
friend void add(DM&,DB&);
};
class DB
{
public:
float feet,inch;
void get_data()
 {
cout<<"Enter Distance in feet and in inch : "<<endl;
cin>>feet>>inch;
 }
friend void add(DM&,DB&);
};
void add(DM& a,DB& b)
{
cout<<"Enter the format in which you want your addition . For addition in
meter's type m else type f : "<<endl;
char c;
cin>>c;
if(c=='m')
 {
float feet_to_meter;
feet_to_meter=b.feet*0.3048;
float inch_to_meter;
inch_to_meter=b.inch*0.254;
float centimeter_to_meter;
centimeter_to_meter=a.centimeter*0.01;
cout<<"The … }
else if(c=='f')
 {
float meter_to_feet;
meter_to_feet=a.meter*3.28084;
float centimeter_to_feet;
centimeter_to_feet=a.centimeter*0.0328084;
float inch_to_feet;
inch_to_feet=b.inch*0.0833;
cout<<"The answer in feet's is :
"<<b.feet+meter_to_feet+centimeter_to_feet+inch_to_feet;
 }
else
 {
cout<<"You have entered incorrect choice!!";
 }
};
int main()
{
DM a;
a.get_data();
DB b;
b.get_data();
add(a,b);
}
