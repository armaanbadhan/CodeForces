#include <iostream>
using namespace std;

#define ll long long
#define ull unsigned long long
#define MOD 1000000007
#define i_am_speed() ios_base::sync_with_stdio(false);\
                     cin.tie(NULL);\
                     cout.tie(NULL);
void file_i_o();

/*
ASCII VALUES 'A' -> 65, 'Z' -> 90, 'a' -> 96, 'z' -> 122, '0' -> 48;
*/

void solve()
{
    ll n, k;
    cin >> n >> k;
    if (n&1)
    {
        if (2*k <= n + 1)
        {
            cout << 2*k - 1;
        }
        else
        {
            k -= (n+1)/2;
            cout << 2*k;
        }
    }
    else
    {
        if (2*k <= n)
        {
            cout << 2*k - 1;
        }
        else
        {
            k -= n/2;
            cout << 2*k;
        }
    }
    cout << "\n";
}


int main()
{
    file_i_o();
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


void file_i_o()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}