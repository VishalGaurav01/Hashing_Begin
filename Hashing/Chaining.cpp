#include<bits/stdc++.h>
using namespace std;

struct MyHash
{
    int bucket;
    list<int>*table;
    void insert(int key){
        int i= key%bucket;
        table[i].push_back(key);
    }
    void remove(int key){
        int i =key%bucket;
        table[i].remove(key);
    }

};

struct MySearch{
    int bucket;
    list<int>*table;
    bool search(int key){
        int i=key%bucket;
        for(auto x: table[i])
        if(x==key) return true;
        return false;
    }
};


int main(){
    
return 0;
}

