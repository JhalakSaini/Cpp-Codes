#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main(){
    string str,str2;
    int sum=0,sum2=0;
    cout<<"enter first string ";
    getline(cin,str);
    cout<<"enter second string ";
    getline(cin,str2);
    if (str.length()==str2.length())
    {
        int n=str.length();
        for (int i = 0; i < n; i++)
        {
            
            sum = sum + int(str[i]);
            sum2 = sum2 +int(str2[i]);
        }
        if (sum==sum2)
        {
            cout<<"they are anagram";
        }
        else
            cout<<"they are NOT anagram";
        
    }
    else{
        cout<<"they are not anagram";
    }
    
    
    
    return 0;
}