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
    int t;
    cin >> t;

    int suma = 0;
    int sumb = 0;
    int sumc = 0;

    while (t--)
    {
        int a, b, c;
        cin>> a >> b >> c;

        suma += a;
        sumb += b;
        sumc += c;
    }
    if(suma == 0 && sumb == 0 && sumc == 0) yes;
    else no;

    return 0;
}