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
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int min1 = 2e9, min2 = 2e9;
        s0;
        while (n--)
        {
            int n;
            cin >> n;
            vector<int> v(n);
            for (auto &x : v)
            {
                cin >> x;
            }
            sort(v.begin(), v.end());
            min1 = min(min1, v[0]);
            min2 = min(min2, v[1]);
            sum += v[1];
        }
        cout << min1 + sum - min2 << endl;
    }

    return 0;
}