#include<iostream>
using namespace std;
int main(){

    int A[10]={3,5,7,12,13,22,33,44,55,66};
    int l=0, h=9,key,mid;
    cout<<"enter key: ";
    cin>>key;
    while (l<=h)
    {
        mid = (l+h)/2;
        if (key==A[mid])
        {
            cout<<"key found at "<<mid;
            return 0;
        }
        else if (key<mid)
        {
            h = mid-1;
        }
        else{
            l = mid+1;
        } 
    }
    cout<<"not found";
    




    return 0;
}