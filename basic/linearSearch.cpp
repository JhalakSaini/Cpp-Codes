#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter the size of the array ";
    cin>>n;
    int A[n];
    for (int i = 0; i <n; i++)
    {
        /* code */
        cout<<"enter the element at A["<<i<<"]: ";
        cin>>A[i];
    }
    int key;
    cout<<"enter key: ";
    cin>>key;
    for (int i = 0; i < n; i++)
    {
        if (key==A[i])
        {
            cout<<"the key is present at index "<<i;
            return 0;
        }      
    }
    cout<<"key not found ";
    return 0;

}