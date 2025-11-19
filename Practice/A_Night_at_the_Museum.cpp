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
#define sz(x) ((int)(x).size()))

// constants
const int MOD = 1e9 + 7;
const int INF = 1e9 + 5;
const ll LINF = 1e18;

// debug (uncomment to use)
// #define debug(x) cerr << #x << " = " << x << endl

// solve function for each test case
void solve(string s)
{
    // tc -> ares, zeus, map
    int l = s.length();
    int sum = abs('a' - s[0]);
    if (abs(26 - sum) < sum)
        sum = 26 - sum;

    for (int i = 0; i < l - 1; i++)
    {
        int a = abs(s[i] - s[i + 1]);
        int b = abs(26 - a);
        if (a > b)
            a = b;
        sum += a;
        // cout << sum << "\n";
    }

    cout << sum << "\n";
}

int main()
{
    FAST_IO;

    int T = 1;
    // cin >> T; // Uncomment for multiple test cases

    while (T--)
    {
        string s;
        cin >> s;
        solve(s);
    }

    // cout << "zeus";

    return 0;
}