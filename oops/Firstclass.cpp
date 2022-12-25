#include <iostream>
using namespace std;
class Rectangle
{
    public:  // necesarry to make the data members public so as to access them
    int length;
    int breadth;
    int area(){
        return length*breadth;
    }
};
int main(){
    Rectangle r1,r2;
    r1.length = 10;  // access is available because of "public" mentioning 
    r1.breadth= 5;
    r2.length=10;
    r2.breadth=40;
    cout<< r1.area()<<endl;;

    // pointer to object "in stack memory"
    Rectangle r;
    Rectangle *p;
    p=&r;
    p-> length=10; 
    p-> breadth=12;  // arrow is used for accesing the members of an object  ; arrow is a dereferencing operator
    cout<<p->area()<<endl;

    // in heap memory     DYNAMIC OBJECT 
    Rectangle *ptr= new Rectangle;
    ptr-> length=10; 
    ptr-> breadth=12;  
    cout<<ptr->area()<<endl;

    return 0;
}