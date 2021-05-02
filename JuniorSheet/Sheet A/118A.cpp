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

/*
ASCII VALUES 'A' -> 65, 'Z' -> 90, 'a' -> 96, 'z' -> 122, '0' -> 48;
*/

const char arr[] = {'a', 'o', 'y', 'e', 'u', 'i'}; // nub

void solve()
{
    string s, res = "";
    cin >> s;
    bool vov;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for (int l = 0; l < s.length(); l++)
    {
        vov = false;
        for(char ch : arr)
        {
            if (ch == s[l])
            {
                vov = true;
                break;
            }
        }
        if (!vov)
        {
            res += ".";
            res += s[l];
        }
    }
    cout << res;
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