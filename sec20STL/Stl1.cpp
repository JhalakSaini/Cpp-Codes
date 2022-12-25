#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4};
    v.push_back(10);
    v.push_back(20);
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<"  ";
    }
    cout<<endl;
    map<int,string> m;
    m.insert(pair<int,string>(10,"saini"));
    m.insert(pair<int,string>(11,"khan"));
    m.insert(pair<int,string>(12,"singh"));
    m.insert(pair<int,string>(13,"will"));

    map<int,string>::iterator itr;
    for (itr = m.begin(); itr!=m.end(); itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    

    return 0;
}
