#include <iostream>
using namespace std;

class Rectangle
{
    private:
    int length;
    int breadth;

    public:
    // CONSTRUCTOR

   /* Rectangle()   // non parameterized
    {
        length=0;
        breadth=0;
    } */
    Rectangle(int l=0, int b=0)   // parameterized  + having default arguments ; working as non parameterized constructor
    {
        setLength(l);
        setBreadth(b);
    }
    Rectangle(Rectangle(&r))   //copy constructor
    {
        length=r.length;
        breadth=r.breadth;
    }

    
    ////////////// ACCESSORS AND MUTATORS///////
    void setLength(int l){  // function to allocate value to the private data members       ** MUTATOR
        if(l<0)
            length=0;
        else
            length=l;
    }
    void setBreadth(int b){  
        if(b<0)
            length=0;
        else
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
    Rectangle r1(10,5);
    Rectangle r2(r1);
    cout<<r2.area()<<endl;
    Rectangle r;
    cout<<r.area()<<endl;
    
    return 0;
}