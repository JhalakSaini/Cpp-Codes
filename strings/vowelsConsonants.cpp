#include<iostream>
#include<cstring>
#include<string.h>
#include<string>
using namespace std;
int main(){
    int vowels=0,consonants=0,space=0,extraspace=0,words=0;
    string str;
    cout<<"enter the string: ";
    getline(cin,str);
    int n= str.length();
    for (int i=0;i<n;i++)
    {
        /* code */
        if (str[i]=='a'|| str[i]=='A'|| str[i]=='e'|| str[i]=='E'|| str[i]=='i'|| str[i]=='I'|| str[i]=='o'|| str[i]=='O'|| str[i]=='u'|| str[i]=='U')
        {
            vowels++;
        }
        else if((str[i]<=122 && str[i]>=97) || (str[i]<=90 && str[i]>=65)){
            consonants++;
        }
        else if(str[i]==' ')
        {
            if (str[i]==str[i+1])
            {
                /* code */extraspace++;
            }
            else
            {
                space++;
            }
        }  
    }
    cout<<"vowels: "<<vowels<<" consonants: "<<consonants<<" space: "<<space+extraspace<<" words: "<<space+1;





    return 0;

}