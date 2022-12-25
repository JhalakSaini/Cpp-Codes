#include<iostream>
using namespace std;

int gcd(int a,int b){
    if (a==0)
    {
        /* code */return b;
    }
    else if(b==0){
        return a;
    }
    else if (a==b)
    {
        return a;
    }
    else if(a>b){
        return gcd(a-b,b);
    }
    else
    {
        return gcd(a,b-a);
    }
    
    
}

int main(){
    cout<<gcd(16,16);
    
    return 0;
}