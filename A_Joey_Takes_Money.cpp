///////////////////////////////
//                           //
//   Md.Mohiul Islam Miraz   //
//                           //
///////////////////////////////

#include<bits/stdc++.h>
#define in1 cin >> t
#define in2 cin >> n
#define in3 cin >> a[i]
#define in4 cin >> s
#define f flag
#define f1 int flag = 1
#define ff1 flag = 1
#define f0 int flag = 0
#define ff0 flag = 0
#define c0 int counter = 0
#define cc counter++
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cnt cout << counter << endl
using namespace std;

int main()
{
    int t;
    in1;

    while(t--)
    {
        int n;
        in2;
        
        ll a[n];
        ll ans = 0;
        
        for(int i = 0; i < n; i++)
        {
            in3;
        }
        
        for(int i = 0; i < n - 1; i++)
        {
            ll x = 0;
            ll y = 1;
            
            x = a[i] * a[i + 1];
            a[i] = y;
            a[i + 1] = x;
        }

        for(int i = 0; i < n; i++)
        {
            ans += a[i];
        }
        cout << ans * 2022 << endl;
    }
}