#include<iostream>
using namespace std;

class demo{
    public:
    demo(){
        cout<<"const of demo"<<endl;
    }
    ~demo(){
        cout<<"des of demo"<<endl;

    }
};
void fun(){
    demo d;
};

int main(){

    fun();
    return 0;
}