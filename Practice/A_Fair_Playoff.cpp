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
void solve(vector<int> vec)
{
    int max1 = max(vec[0], vec[1]);
    int max2 = max(vec[2], vec[3]);

    if (min(vec[0], vec[1]) > max2 || max1 < min(vec[2], vec[3]))
        cout << "NO\n";
    else
        cout << "YES\n";
}

int main()
{
    FAST_IO;

    int T = 1;
    cin >> T; // uncomment for multiple test cases

    while (T--)
    {
        vector<int> vec(4, 0);

        for (int i = 0; i < 4; i++)
        {
            cin >> vec[i];
        }

        solve(vec);
    }

    return 0;
}