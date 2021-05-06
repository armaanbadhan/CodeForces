#include <iostream>
using namespace std;

#define MOD 1000000007
#define i_am_speed() ios_base::sync_with_stdio(false);\
                     cin.tie(NULL);\
                     cout.tie(NULL);

typedef long long ll;
typedef unsigned long long ull;

void file_i_o();

/*
ASCII VALUES 'A' -> 65, 'Z' -> 90, 'a' -> 96, 'z' -> 122, '0' -> 48;
INT_MAX -> 2,147,483,647 (10^10), LLONG_MAX -> 9,223,372,036,854,775,807 (10^19)
*/

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int vis[26] = {0};
    bool res = true;
    char prev = s[0];
    vis[prev - 'A'] = 1;
    for (int i = 1; i < n; i++)
    {
        if (prev == s[i])continue;
        
        if(vis[s[i] - 'A'] == 0)
        {
            prev = s[i];
            vis[prev - 'A'] = 1;
        }
        else
        {
            res = false;
            break;
        }
    }
    cout << ((res) ? "YES" : "NO");
    cout << "\n";
}


int main()
{
    file_i_o();
    i_am_speed();

    int t = 1;
    cin >> t;
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