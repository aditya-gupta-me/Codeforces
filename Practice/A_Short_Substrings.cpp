#include <bits/stdc++.h>
using namespace std;

// fast I/O
#define FAST_IO                  \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

// aliases
#define ll long long
#define ld long double
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) ((int)(x).size())

// constants
const int MOD = 1e9 + 7;
const int INF = 1e9 + 5;
const ll LINF = 1e18;

// solve function for each test case
void solve()
{
    string b;
    cin >> b;

    string a = b.substr(0, 2);

    for (int i = 3; i < b.size(); i += 2)
    {
        a += b[i];
    }

    cout << a << endl;
}

int main()
{
    FAST_IO;

    int T;
    cin >> T;

    for (int t = 1; t <= T; t++)
    {
        solve();
    }

    return 0;
}