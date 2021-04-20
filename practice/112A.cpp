#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define MOD 1000000007
#define i_am_speed() ios_base::sync_with_stdio(false);\
                     cin.tie(NULL);\
                     cout.tie(NULL);


void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    if (s1 == s2)
    {
        cout << 0;
    }
    else if (s1 > s2)
    {
        cout << 1;
    }
    else
    {
        cout << -1;
    }
    cout << "\n";
}


int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    i_am_speed();

    int t = 1;
    // cin >> t;
    for(int it = 0; it < t; it++)
    {
        #ifndef ONLINE_JUDGE
            cout << "\tTest Case " << it+1 << ":\n";
        #endif
        solve();
    }
    return 0;
}
