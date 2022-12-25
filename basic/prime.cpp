#include<iostream>
using namespace std;
int main(){

    int n,count;
    cout<<"enter the number ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
            count++;
            cout<<n<<" is divisible by "<<i<<endl;
        }
        
    }
    cout<<endl;
    if (count==2)
    {
        cout<<n<<" is a prime number";
    }
    else{
        cout<<"not a prime number";
    }
    
    
    
    return 0;
}