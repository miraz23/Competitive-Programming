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
#define s0 long long sum = 0
#define a0 long long ans = 0
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
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        vector<long long>v(n);

        ll sum = 0, sum1 = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += ((v[i] + x - 1) / x);
            sum1 += v[i];
        }
        cout << (sum1 + (x - 1)) / x << " " << sum << endl;
    }
    return 0;
}