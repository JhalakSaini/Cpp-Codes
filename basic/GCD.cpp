#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter two number ";
    cin>>m>>n;
    cout<<"m is "<<m;
    cout<<"  n is "<<n<<endl;
     while (m!=n)
     {
        if (m>n)
        {
            m-=n;
            cout<<endl<<"m is "<<m; 
            cout<<"  n is "<<n;
        }
        else
        {
            n-=m;
            cout<<endl<<"m is "<<m;
            cout<<"  n is "<<n;
        }
        
        
     }
     cout<<endl<<"the greatest common divisor is "<<m;
     



    return 0;
}

