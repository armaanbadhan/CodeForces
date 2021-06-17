#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

#define MOD 1000000007
#define i_am_speed() ios_base::sync_with_stdio(false);\
                     cin.tie(NULL);\
                     cout.tie(NULL);
#define debug(a) cout << a << endl
#define debug2(a, b) cout << a << " " << b << endl;

typedef long long ll;
typedef unsigned long long ull;

void file_i_o();

/*
ASCII VALUES 'A' -> 65, 'Z' -> 90, 'a' -> 96, 'z' -> 122, '0' -> 48;
INT_MAX -> 2,147,483,647 (10^10), LLONG_MAX -> 9,223,372,036,854,775,807 (10^19)
*///////////////////////////////////////////////////////////////////////////////

/*

*/

void solve()
{
    int n, k, inp;
    cin >> n >> k;
    vector<pair<int, int>> vec;
    for (int in = 0; in < n; in++)
    {
        cin >> inp;
        vec.push_back(make_pair(inp, in+1));
    }
    sort(vec.begin(), vec.end());
    int curr = 0;
    int res = 0;
    for (; res < n; res++)
    {
        curr += vec[res].first;
        if (curr > k)
        {
            break;
        }
    }
    cout << res << "\n";
    for (int i = 0; i < res; i++)
    {
        cout << vec[i].second << " ";
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