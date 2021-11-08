#include <iostream>
#include <string>
using namespace std;

struct phone{
    string part1;
    string part2;
    string part3;
};

int main(){
    phone first, second;
    second.part1 = "212";
    second.part2 = "767";
    second.part3 = "8900";
    cout<<"Enter your area code, exchange and number: "<<endl;
    cin>>first.part1>>first.part2>>first.part3;
    cout<<"My number is "<<second.part1<<second.part2<<second.part3<<endl;
    cout<<"Your number is "<<first.part1<<first.part2<<first.part3<<endl;

    return 0;

}
