#include<iostream>
using namespace std;
int main(){

   int n;
    cout<<"enter the number ";
    cin>>n;
    int num = n;
    int rev = 0;

    while (n>0)
    {
        int r = n%10;
        n = n/10;
        rev = rev *10 + r;
        
        
    }
    cout<<"the reverse is "<<rev;
    if (rev==num)
    {
        /* code */
        cout<<endl<<"it is a palindrome ";
    }
    else
    {
        cout<<endl<<"it is not a palindrome";
    }
    
    
    
    return 0;
}