#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main(){
    int x=10;
    int *p;
    p=&x;
    cout<<x<<endl;    //10
    cout<<&x<<endl;  //add of x
    cout<<p<<endl;  //add of x
    cout<<&p<<endl;  //add of p
    cout<<*p<<endl;  //value stored 
    
    int i=5;
    int j=++i;
    cout<<i<<j;


    return 0;
}