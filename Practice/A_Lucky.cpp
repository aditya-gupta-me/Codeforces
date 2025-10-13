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
    // yo start from here,
    // don't worry, you gonna solve this one too
}

int main()
{
    FAST_IO;

    int T = 1;
    cin >> T; // uncomment for multiple test cases

    while (T--)
    {
        string s;
        cin >> s;

        int leftSum = s[0] - '0' + s[1] - '0' + s[2] - '0';
        int rightSum = s[3] - '0' + s[4] - '0' + s[5] - '0';

        if (leftSum == rightSum)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
        // solve();
    }

    return 0;
}