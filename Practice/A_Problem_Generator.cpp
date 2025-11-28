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
    int n, m;
    cin >> n >> m;
    string a;
    cin >> a;

    unordered_map<char, int> problem_count;
    for (char ch : a)
    {
        problem_count[ch]++;
    }

    int problems_needed = 0;

    for (char ch = 'A'; ch <= 'G'; ++ch)
    {
        if (problem_count[ch] < m)
        {
            problems_needed += m - problem_count[ch];
        }
    }

    cout << problems_needed << endl;
}

int main()
{
    FAST_IO;

    int T = 1;
    cin >> T; // uncomment for multiple test cases

    while (T--)
    {
        solve();
    }

    return 0;
}