#include <iostream>
using namespace std;

class Rectangle
{
    private:
    int length;
    int breadth;

    public:
    void setLength(int l){  // function to allocate value to the private data members       ** MUTATOR
        length=l;
    }
    void setBreadth(int b){  
        breadth=b;
    }
    int getLength(){      // function to get /print/access the value of private members     ***ACCESSOR
        return length;
    }
    int getBreadth(){
        return breadth;
    }
    int area(){
        return length*breadth;
    }
}; 

int main(){
    Rectangle r;
    r.setLength(10);
    r.setBreadth(5);
    cout<<"length is: "<<r.getLength();
    
    return 0;
}