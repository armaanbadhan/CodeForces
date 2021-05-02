#include <iostream>
#include <cmath>
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
    
    cout << "\n";
}


int main()
{
    //file_i_o();
    i_am_speed();

    ll n;
    while (true)
    {
        cin >> n;
        if(n== 0)break;
        ll sqr = sqrt(n);
        cout << ((sqr*sqr == n)? "yes": "no") << "\n";
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