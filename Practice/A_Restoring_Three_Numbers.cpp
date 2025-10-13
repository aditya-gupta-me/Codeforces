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

// debug (uncomment to use)
// #define debug(x) cerr << #x << " = " << x << endl

// solve function for each test case
void solve()
{
    vector<int> vec(4);
    for (int i = 0; i < 4; ++i)
    {
        cin >> vec[i];
    }

    sort(all(vec));

    int s = vec[3];

    int a = s - vec[2];
    int b = s - vec[1];
    int c = s - vec[0];

    cout << a << " " << b << " " << c << "\n";
}

int main()
{
    FAST_IO;

    int T = 1;
    // cin >> T; // uncomment for multiple test cases

    while (T--)
    {
        solve();
    }

    return 0;
}