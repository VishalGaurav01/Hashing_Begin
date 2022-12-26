#include<bits/stdc++.h>
using namespace std;
int marvel(int arr[],int n,int sum){
    unordered_map<int,int>v;
    int pre_sum=0,res=0;
    for (int i = 0; i < n; i++)
    {
        pre_sum += arr[i];
        if(pre_sum==sum) res=i+1;
        if(v.find(pre_sum)==v.end()) v.insert({pre_sum,i});
        if(v.find(pre_sum)!=v.end()) res=max(res,i-v[pre_sum-sum]);
    }
    return res;
}

int main(){
    
return 0;
}