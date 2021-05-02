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

int hcfhcf(int a, int b)
{
    if (b > a)swap(a, b);
    int temp;
    while (a%b)
    {
        temp = a;
        a = b;
        b = temp%b;
    }
    return b;
}

bool good(int a, int b)
{
    return (hcfhcf(a, b) == 1);
}



int main()
{
    // file_i_o();
    i_am_speed();
    int a, b;
    while (cin >> a)
    {
        cin >> b;
        bool res = good(a, b);
    }// didnt submit aaaaaaaaaaa
    return 0;
}


void file_i_o()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}