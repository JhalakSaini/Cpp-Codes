#include<iostream>
using namespace std;
int main(){
   int a = 5;
   int *p;  // declaration of a pointer
   p= &a;   //initialisation of pointer
   
   cout<<a<<endl;
   cout<<&a<<endl;  //address of a variable
   cout<<p<<endl;   //adress of variable where p is pointing
   cout<<&p<<endl;  // address of pointer p
   cout<<*p<<endl;  // data where pointer p is pointing  //dereferencing

    
        
    return 0;
}