#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define MOD 1000000007
#define i_am_speed() ios_base::sync_with_stdio(false);\
                     cin.tie(NULL);\
                     cout.tie(NULL);


void solve(){
    int n, k, res = 0;
    cin >> n >> k;
    int arr[n] = {0};
    for (int in = 0; in < n; in++){
        cin >> arr[in];
    }
    int x = arr[k-1];
    for (int in = 0; in < n; in++){
        if (arr[in] > 0 and arr[in] >= x){
            res++;
        }
        else{
            break;
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
