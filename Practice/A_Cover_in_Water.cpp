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
    bool c = false;
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '.' && i + 1 < n && s[i + 1] == '.' && i + 2 < n && s[i + 2] == '.')
        {
            c = true;
            break;
        }

        if (s[i] == '.')
        {
            total++;
        }
    }

    if (c)
    {
        cout << 2 << endl;
    }
    else
    {

        cout << total << endl;
    }
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
        cin.ignore();

        string s;
        getline(cin, s);
        solve(n, s);
    }

    return 0;
}