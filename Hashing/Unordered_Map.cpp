#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string, int> s;
    s.insert({"gfg",20});
    s["vishal"]=30;
    s["sunny"]=60;
    if(s.find("sunny") != s.end()) cout<<"FOUND"<<endl;
    else cout<<"NOT FOUND"<<endl;
    auto it = s.find("gfg");
    if(it != s.end()) cout<<(it->second)<<endl;
    for (auto i = s.begin(); i != s.end(); i++)
    {
        cout<<(i->first)<<" "<<(i->second)<<endl;
    }
    
    return 0;
}