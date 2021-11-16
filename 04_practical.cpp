#include <iostream>
using namespace std;
int main()
{
    float a,b;
    char c,d;
    label:
    cout<<"Enter first, operator and second number one by one" << endl;
    cin>>a>>c>>b;
    switch (c)
    {
        case '+':
        cout<<"Addition of numbers: "<<a+b<<endl;
        break;
        case '-':
        cout<<"Substraction of numbers: "<<a-b<<endl;
        break;
        case '*':
        cout<<"Multiplication of numbers: "<<a*b<<endl;
        break;
        case '/':
        cout<<a<<"divided by"<<b<<":"<<a/b<<endl;
        break;
    }
    cout<<"Do you want to do another calculation (y/n)"<<endl;
    cin>>d;
    if (d == 'y' or d=='Y'){
        goto label;
    }
    else{
        return 0;
    }
}