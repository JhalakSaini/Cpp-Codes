#include <iostream>
using namespace std;



int main(){

    try{ 
        int a=1,b,c;
        cout<<"enter b ";
        cin>>b;
        if(b==0){
            throw 101;
        }
        c=a/b;
        cout<<c;
    }
    catch(int e){
        cout<<"division by zero error code "<<e;
    }
    return 0;
}