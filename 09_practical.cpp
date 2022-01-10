#include <iostream>
using namespace std;
class space
{
    int x;
    int y;
    int z;
    public:
    void getdata(int a, int b,int c)
    {
        x = a;
        y = b;
        z=c;
    }
    void display()
    {
        cout << x << " " << y << " " <<z<<"\n";
    }
    void cal();
    void operator-();
   
};
    void space:: operator-()
    {
        x = -x;
        y = -y;
        z=-z;
    }

int main()
{
    space s;
    cout << "Before overloading: " << endl;
    s.getdata(15,30, 45);

    s.display();
    cout << "After Overloading: " << endl;
    -s;
    
    s.display();
    return 0;
}
