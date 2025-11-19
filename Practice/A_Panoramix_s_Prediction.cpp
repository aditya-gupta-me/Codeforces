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

bool isPrime(int x)
{
    if (x <= 1)
        return false;

    if (x == 2)
        return true;

    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
            return false;
    }

    return true;
}

// solve function for each test case
void solve(int n, int m)
{
    if (!isPrime(m))
    {
        cout << "NO\n";
        return;
    }

    string ans = "";
    int count = 0;
    for (int i = n + 1; i <= m; i++)
    {
        if (isPrime(i))
        {
            if (i == m)
            {
                ans = "YES\n";
            }
            count++;
            if (count >= 2)
            {
                cout << "NO\n";
                return;
            }
        }
    }

    cout << ans;
}

int main()
{
    FAST_IO;

    int T = 1;
    // cin >> T; // uncomment for multiple test cases

    while (T--)
    {
        int n, m;
        cin >> n >> m;

        solve(n, m);
    }

    return 0;
}