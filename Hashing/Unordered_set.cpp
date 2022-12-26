#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<int>s;
    s.insert(20);
    s.insert(40);
    s.insert(20);
    s.insert(60);
    for (auto i = s.begin(); i != s.end(); i++)
    {
        cout<<(*i)<<endl;
    }
    s.erase(s.begin(),s.end());
    cout<<s.size()<<endl;
    if(s.find(20)==s.end()) cout<<"NOT FOUND";
    else cout<<"FOUND "<<(*(s.find(20)));
    
return 0;
} 