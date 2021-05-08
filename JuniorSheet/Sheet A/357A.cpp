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
    int m;
    cin >> m;
    int arr[m + 1] = {0}, temp;
    for (int im = 1; im <= m; im++)
    {
        cin >> temp;
        arr[im] = arr[im-1] + temp;
    }
    int x, y;
    cin >> x >> y;

    for (int im = 1; im < m; im++)
    {
        if ((arr[m] - arr[im] >= x) && (arr[im] >= x) && (arr[m] - arr[im] <= y) && (arr[im] <= y))
        {
            cout << im + 1;
            return;
        }
    }
    cout << 0;
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