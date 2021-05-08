#include <iostream>
#include<vector>
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
    vector<int> pos;
    vector<int> neg;
    int zero = 0;
    int temp;
    for (int in = 0; in < n; in++)
    {
        cin >> temp;
        if (temp > 0)pos.push_back(temp);
        if (temp < 0)neg.push_back(temp);
        if (temp == 0) zero++;
    }
    cout << "1 " << neg[neg.size() - 1];
    n--;
    cout << endl;
    neg.pop_back();

    if(pos.size() > 0)
    {
        cout << "1 " << pos[0];
        n--;
        pos.erase(pos.begin());
    }
    else
    {
        cout << "2 " << neg[0] << " " << neg[1];
        neg.erase(neg.begin() + 0, neg.begin() + 2);
        n--;
        n--;
    }
    cout << endl;
    cout << n << " ";
    while(zero--)cout << "0 ";
    for(int i = 0; i < pos.size(); i++)cout << pos[i] << " ";
    for(int i = 0; i < neg.size(); i++)cout << neg[i] << " ";
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