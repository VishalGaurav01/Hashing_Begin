#include<bits/stdc++.h>
using namespace std;

bool IsSubSrray(int arr[],int n,int sum){
    unordered_set<int>v;
    int pre_sum =0;
    for (int i = 0; i < n; i++)
    {
        pre_sum += arr[i];
        if(v.find(pre_sum - sum) != v.end()) return true;
        if(pre_sum == sum) return true;
        v.insert(pre_sum);
    }
    return false;
}

int main(){
    
return 0;
}