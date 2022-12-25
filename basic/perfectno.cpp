#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter the number: ";
    cin>>n;
    int sum=0;
    for (int i = 1; i <n; i++)
    {
        if (n%i==0)
        {
            cout<<i<<endl;
            sum+=i;
        }
        
    }   
    cout<<"sum is "<<sum<<endl;
    if (sum==n)
    {
        cout<<"it is a perfect number";
    }
    else
        cout<<"it is not a perfect number";
    
    return 0;
}