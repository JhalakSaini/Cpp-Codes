#include<iostream>
using namespace std;

class Base{
    public:
    virtual void display(){
        cout<<"display of base"<<endl;
    }
};
class Derived:public Base
{
    public:
    void display(){
        cout<<"display of derived"<<endl;
    }
};

int main(){
    Base *p;
    Derived d;
    p = &d;
    p->display();
    return 0;
}