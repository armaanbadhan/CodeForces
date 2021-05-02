#include <iostream>
#include <vector>
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
    int n, x;
    cin >> n;
    vector<int> a;
    vector<int> b;
    vector<int> c;
    for (int in = 0; in < n; in++)
    {
        cin >> x;
        if (x == 1) a.push_back(in+1);
        else if (x == 2) b.push_back(in+1);
        else c.push_back(in + 1);
    }
    int w = min(min(a.size(), b.size()), c.size());
    cout << w << "\n";
    for (int iw = 0; iw < w; iw++)
    {
        cout << a.at(iw) << " " << b.at(iw) << " " << c.at(iw) << "\n";
    }
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