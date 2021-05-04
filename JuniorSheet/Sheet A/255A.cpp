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
    int n, temp;
    cin >> n;
    int chest = 0, bicep = 0, back = 0;
    for (int in = 0; in < n; in++)
    {
        cin >> temp;
        if(in%3 == 0)chest += temp;
        else if(in%3 == 1)bicep += temp;
        else back += temp;
    }
    cout << ((chest > bicep && chest > back) ? "chest" : (back > bicep) ? "back" : "biceps");
    // nub
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