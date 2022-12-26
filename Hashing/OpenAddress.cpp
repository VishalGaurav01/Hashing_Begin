#include<bits/stdc++.h>
using namespace std;

class MyHash{
int *arr;
int cap,size;
MyHash(int key){
    cap=key;
    size=0;
    for (int i = 0; i < cap; i++)
    {
        arr[i]=-1;
    }
}
int hash(int key){
    return key%cap;
}
bool search(int key){}
bool insert(int key){}
bool erase (int key){}
};

bool MyHash ::search(int key){
    int h = hash(key);
    int i=h;
    while(arr[i]!=-1){
        if(arr[i]==key) return true;
        i=(i+1)%cap;
        if(i==h) return false;
    }
    return false;
}

bool MyHash :: insert(int key){
    if(size==cap) return false;
    int i= hash(key);
    while(arr[i]!=-1 && arr[i]!=-2 && arr[i]!=key)
    (i=i+1)%cap;
    if(arr[i]==key) return false;
    else{
        arr[i]=key;
        size++;
        return true;
    }
}

bool MyHash :: erase(int key){
    
}

int main(){
    
return 0;
}