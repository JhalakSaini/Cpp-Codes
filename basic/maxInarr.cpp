#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int A[]={45,67,76,567,122,12,-12};
    int max= INT_MIN;

    for(auto i:A)
        if (i>max)
        {
            /* code */
            max=i;
        }
        
    cout<<"max is "<<max;
    return 0;
    
    ///////////////////
}