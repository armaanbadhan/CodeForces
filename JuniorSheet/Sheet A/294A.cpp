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
    int n;
    cin >> n;
    int arr[n];
    for(int in = 0; in < n; in++)
    {
        cin >> arr[in];
    }
    int m, x, y, up, down;
    cin >> m;
    for (int im = 0; im < m; im++)
    {
        cin >> x >> y;
        x--; y--;
        up = arr[x] - y - 1;
        down = y;
        if (x > 0)arr[x-1] += down;
        if (x < n-1)arr[x+1] += up;
        arr[x] = 0;
    }
    for (int in = 0; in < n; in++)
    {
        cout << arr[in] << "\n";
    }
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