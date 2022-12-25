#include<iostream>
using namespace std;

int fib(int x){
    if (x <=1)
    {
        return x;
    }
    else
    {
        return fib(x-1)+fib(x-2);
    }
    
    
}

int main(){

    int n;
    cout<<"enter n ";
    cin>>n;
    int sum=0;
    for (int i = 0; i <n; i++)
    {
        cout<<fib(i)<<" ";
        sum+= fib(i);
    }
    cout<<endl;
    cout<<"number at "<<n<<"th position "<<fib(n)<<endl;
    cout<<"sum is "<<sum;
    

    return 0;
}






