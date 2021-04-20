#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define MOD 1000000007
#define i_am_speed() ios_base::sync_with_stdio(false);\
                     cin.tie(NULL);\
                     cout.tie(NULL);


const char vov[6] = {'a', 'e', 'i', 'o', 'u', 'y'};

void solve()
{
    string s, res = "";
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for (auto ch: s)
    {
        bool vovfound = false;
        for(auto v: vov)
        {
            if (ch == v)
            {
                vovfound = true;
                break;
            }
        }
        if (not vovfound)
        {
            res += '.';
            res += ch;
        }
    }
    cout << res;
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
    //cin >> t;
    for(int it = 0; it < t; it++)
    {
        #ifndef ONLINE_JUDGE
            cout << "\tTest Case " << it+1 << ":\n";
        #endif
        solve();
    }
    return 0;
}
