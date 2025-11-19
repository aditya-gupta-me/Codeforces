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
void solve(int n, string s)
{
    unordered_map<int, int> seen;

    seen.insert({s[0], 1});

    for (int i = 1; i < n; i++)
    {
        if (seen.count(s[i]) && s[i] != s[i - 1])
        {
            cout << "NO\n";
            return;
        }
        else
        {
            seen[s[i]]++;
        }
    }

    cout << "YES\n";
}

int main()
{
    FAST_IO;

    int T = 1;
    cin >> T; // uncomment for multiple test cases

    while (T--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        solve(n, s);
    }

    return 0;
}