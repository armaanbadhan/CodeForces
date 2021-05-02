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
    
    cout << "\n";
}


int main()
{
    //file_i_o();
    //i_am_speed();

    string a, b;
    int tt = 1;
    while (tt--)
    {
        getline(cin, a);
        getline(cin, b);
        int arr[500] = {0};
        int alen = a.length(), blen = b.length();
        int maxlen = alen;
        for(int ia = 0; ia < alen; ia++)
        {
            arr[alen - ia - 1] = a[ia] - '0';
        }
        for(int ib = 0; ib < blen; ib++)
        {
            int num = b[blen - ib - 1] - '0';
            int aed = num*arr[0];
            arr[0] = aed % 10;
            int carry = aed / 10;
            int i = 1;
            while (carry)
            {
                aed = (num*arr[i] + carry);
                arr[i + ib] = aed % 10;
                carry = aed / 10;
                i++;
            }
        }//aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
        cout << "ans: ";
        int i = 0;
        while (i < alen + blen)
        {
            cout << arr[i];
            i++;
        }
        cout << "\n";
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