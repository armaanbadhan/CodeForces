#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define MOD 1000000007
#define i_am_speed() ios_base::sync_with_stdio(false);\
                     cin.tie(NULL);\
                     cout.tie(NULL);


void solve(){
    int n, res = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        int y = 0, x = 0;
        for (int ix = 0; ix < 3; ix++){
            cin >> y;
            x += y;
        }
        if (x > 1){
            res++;
        }
    }
    cout << res;
    cout << "\n";
}


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    i_am_speed();

    int t = 1;
    //cin >> t;
    for(int it = 0; it < t; it++){
        #ifndef ONLINE_JUDGE
            cout << "\tTest Case " << it+1 << ":\n";
        #endif
        solve();
    }
    return 0;
}
