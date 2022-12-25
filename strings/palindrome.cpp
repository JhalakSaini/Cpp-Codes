#include<iostream>
#include<cstring>
#include<string.h>
#include<string>
using namespace std;
int main(){
    string str,rev;
    int a=0;
    cout<<"enter string: ";
    getline(cin,str);
    rev = "";
    int n = (int)str.length();
    rev.resize(n);
    for (int i = n-1; i>=0;i--)
    {
        /* code */
        rev[a]=str[i];
        a++;
    }
    rev[n]='\0';
    cout<<"reverse is "<<rev<<endl;

    if (str.compare(rev)==0)
    {
        /* code */
        cout<<"palindrome it is ";
    }
    else
    {
        
        cout<<"not a palindrome ";
    } 

    
    return 0;

}

