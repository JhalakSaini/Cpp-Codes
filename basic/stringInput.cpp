#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int main(){
    string name;
    cout<<"whats your name"<<endl;
    // getline takes the full name till the time we hit the enter button
    // cin takes the name till we hit spacebar
    getline(cin,name);
    cout<<"welcome "<<name;

    return 0;
}