#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define ull unsigned long long
#define MOD 1000000007
#define i_am_speed() ios_base::sync_with_stdio(false);\
                     cin.tie(NULL);\
                     cout.tie(NULL);
void file_i_o();


void solve()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    if (s1 == s2)cout << 0;
    else if (s1 > s2)cout << 1;
    else cout << -1;
    cout << "\n";
}


int main()
{
    file_i_o();
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


void file_i_o()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}