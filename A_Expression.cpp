/*

||-------------------------------||         
||      Mohiul Islam Miraz       ||
||-------------------------------||

*/

#include <bits/stdc++.h>
#define push                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);
#define sac sort(v.begin(), v.end())
#define sdc sort(v.begin(), v.end(), greater<int>())
#define f1 bool flag = true
#define f0 bool flag = false
#define c0 int count = 0
#define c1 int count = 1
#define s0 int sum = 0
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define minus cout << -1 << endl
#define cnt cout << count << endl
#define sm cout << sum << endl
using namespace std;

int main()
{
    push;
    int a, b, c;
    cin >> a >> b >> c;

    vector<int>v;
    v.push_back(a * b * c);
    v.push_back(a + b + c);
    v.push_back((a * b) + c);
    v.push_back(a + (b * c));
    v.push_back((a + b) * c);
    v.push_back(a * (b + c));

    sort(v.begin(), v.end());

    cout << v[v.size() - 1] << endl;

    return 0;
}