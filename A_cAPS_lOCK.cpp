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
    string s;
    cin >> s;
    f1;

    for(int i = 1; i < s.size(); i++)
    {
        if(islower(s[i]))
        {
            flag = 0;
            break;
        }
    }

    if(flag)
    {
        if(islower(s[0])) s[0] = toupper(s[0]);
        else if(isupper(s[0]))  s[0] = tolower(s[0]);
        
        for(int i = 1; i < s.size(); i++)
        {
            s[i] = tolower(s[i]);
        }
    }
    
    for(int i = 0; i < s.size(); i++)
    cout << s[i];

    return 0;
}