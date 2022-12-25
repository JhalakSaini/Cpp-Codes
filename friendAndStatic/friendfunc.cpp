#include <iostream>
using namespace std;

class Test{
private: int a;
protected: int b;
public: int c;
 friend void fun();   // remove this friend function and see the error in line 13,14
};

void fun(){
    Test t;
    t.a=10;
    t.b=20;
    t.c=30;

}




int main(){
    return 0;
}
