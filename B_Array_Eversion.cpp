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
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int>v;

        for(int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        c0;
        int max = 0;

        for(int i = n - 1; i >= 0; i--)
        {
            if(v[i] > max)
            {
                max = v[i];
                count++;
            }
        }
        count--;
        cnt;
    }

    return 0;
}