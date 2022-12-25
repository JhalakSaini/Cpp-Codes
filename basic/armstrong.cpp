#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter the number ";
    cin>>n;
    int num = n;
    int sum = 0;

    while (n>0)
    {
        int r = n%10;
        n = n/10;
        cout<<r<<" ";
        sum+=r*r*r;
        
        
    }
    cout<<endl<<"sum is "<<sum<<endl;
    if (num==sum)
    {
        cout<<"it is an armstrong number";
    }
    else{
        cout<<"it is not an armstrong number";
    }
    
    return 0;
}