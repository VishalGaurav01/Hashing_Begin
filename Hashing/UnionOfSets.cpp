#include <bits/stdc++.h>
using namespace std;

int UnionSet(int a[], int b[], int m, int n)
{
    unordered_set<int> s;
    for (int i = 0; i < m; i++)
    {
        s.insert(a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        s.insert(b[i]);
    }
    for (auto x = s.begin(); x != s.end(); x++)
    {
        cout << (*(x)) <<" " ;
    }
    return 0;
}

int main()
{
    int m, n;
    cin >> m >> n;
    int a[m], b[n];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    UnionSet(a, b, m, n);
    return 0;
}