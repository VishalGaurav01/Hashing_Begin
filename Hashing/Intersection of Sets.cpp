#include <bits/stdc++.h>
using namespace std;

int IntersectionSet(int arr[], int arr1[], int n, int m)
{
    unordered_set<int>s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }
    int res=0;
    for (int j = 0; j < m; j++)
    {
        if (s.find(arr1[j]) != s.end())
        {
            res++;
            s.erase(arr1[j]);
        }
    }
    return res;
}