#include <iostream>
using namespace std;

namespace first{
    void fun(){
    cout<<"first namespace ";
    }
}

namespace second{
    void fun(){
        cout<<"second namespace";
    }

}

int main(){
    first::fun();
    second::fun();
    return 0;
}