#include<bits/stdc++.h>
using namespace std;

int func(int arr[],int m){
    for (int i = 0; i < m; i++)
    {
            if(arr[i]==0) arr[i]=-1;
    }
    unordered_map<int,int>v;
    int pre_sum=0, res=0; 
    for (int i = 0; i < m; i++)
    {
        pre_sum += arr[i];
        if(pre_sum==0) res= i+1;
        if(v.find(pre_sum)==v.end()) v.insert({pre_sum,i});
        if(v.find(pre_sum)!= v.end()) res= max(res,i-v[pre_sum]);
    }
    return res;
}

int main(){
    
return 0;
}