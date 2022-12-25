#include <iostream>
#include<cstring>
using namespace std;
int main(){
    int n=123;
    int r;
    int n2=0;
    while (n>0)
    {
        r=n%10;
        n=n/10;
        n2=(n2*10)+r;
    }
    cout<<n2;
    while (n2>0)
    {   
        r=n2%10;
        n2=n2/10;
        switch (r)
        {
        case 0:
            cout<<"zero ";
            break;
        case 1:
            cout<<"one ";
            break;
        case 2:
            cout<<"two ";
            break;
        case 3:
            cout<<"three ";
            break;
        }
    }
    
    
    return 0;
}