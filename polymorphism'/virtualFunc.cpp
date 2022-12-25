#include <iostream>
using namespace std;

class Base{
    public:
    virtual void display(){      // remove virtual and you will see the difference
        cout<<"Base ";
    }
};
class Derived: public Base{
    public :
    void display(){
        cout<<"Derived ";
    }
};
int main(){
    Derived d;
    Base *p=&d;
    p->display();
    return 0;
}


