#include<iostream.h>
using namespace std;
class father
{
protected :
int age;

public:
father(){}
father(int x)
{
age = x;
}

virtual void iam()
{
cout<<"I AM THE FATHER, my age is : "<<age;
}
};

class son:public father
{
public:
son(int x)
{
age=x;
}

void iam()
{
cout<<"\nI AM THE SON, my age is :"<<age<<endl;
}
};

class doughter:public father
{
public:
doughter(int x)
{
age=x;
}
void iam()
{
cout<<"\nI AM THE DOUGHTER, my age is :"<<age<<endl;
}
};

int main()
{
father f(46);
father *p;
f.iam();
son s(20);
p=&s;
p->iam();
doughter d(25);
p=&d;
p->iam();
return 0;
}
