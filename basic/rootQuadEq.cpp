#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a,b,c,r1,r2;
    cout<<"enter coefficients ";
    cin>>a>>b>>c;
    r1 = (-b + sqrt(b*b-4*a*c))/(2*a);
    r2 = (-b - sqrt(b*b-4*a*c))/(2*a);
    cout<<"the roots of the given equation are "<<r1<<"  "<<r2;



        
    return 0;
}