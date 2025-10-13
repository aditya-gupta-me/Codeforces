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

bool isPrime(ll num)
{
    if (num <= 1)
        return false;
    for (ll i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

// solve function for each test case
void solve(ll n)
{
    for (ll i = 4; i < n; i++)
    {
        int diff = n - i;
        if (!isPrime(diff) && !isPrime(i))
        {
            cout << i << " " << diff << "\n";
            return;
        }
    }
}

int main()
{
    FAST_IO;

    int T = 1;
    // cin >> T; // uncomment for multiple test cases

    while (T--)
    {
        ll n;
        cin >> n;
        solve(n);
    }

    return 0;
}