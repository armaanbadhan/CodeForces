#include <bits/stdc++.h>
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
    int n;
    cin >> n;
    int arr[n];
    for (int in = 0; in < n; in++)
    {
        cin >> arr[in];
    }
    int first = arr[0], last = arr[n-1];
    int q, w;
    cout << abs(first - arr[1]) << " " << abs(first - last) << "\n";
    for (int in = 1; in < n-1; in++)
    {
        int mex = max(last - arr[in], arr[in] - first);
        int men = min(arr[in] - arr[in - 1], arr[in+1] - arr[in]);
        cout << men << " " << mex << "\n";
    }
    cout << abs(arr[n-2] - last) << " " << abs(last - first) << "\n";
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