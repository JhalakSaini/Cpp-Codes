#include <iostream>
#include<string>
using namespace std;
template<class T>
T add( T x, T y){
    return x+y;
}
int main(){
    int a=5,b=4;
    int z=add(a,b);
    float y= add(3.4f,5.4f);
    cout<<z<<" "<<y;

    return 0;
}