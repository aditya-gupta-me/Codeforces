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
void solve(ll n, vector<ll> a)
{
    vector<ll> b, c;

    ll maxEle = *max_element(a.begin(), a.end());

    for (int i = 0; i < n; i++)
    {
        if (a[i] != maxEle)
        {
            b.pb(a[i]);
        }

        else
        {
            c.pb(a[i]);
        }
    }

    // solution doesn't exist
    if (b.size() == 0)
    {
        cout << -1 << "\n";
    }

    else
    {
        cout << b.size() << " " << c.size() << "\n";
        for (int val : b)
        {
            cout << val << " ";
        }
        cout << "\n";

        for (int val : c)
        {
            cout << val << " ";
        }
        cout << "\n";
    }
}

int main()
{
    FAST_IO;

    int T = 1;
    cin >> T; // uncomment for multiple test cases

    while (T--)
    {
        ll n;
        cin >> n;

        vector<ll> vec(n, 0);

        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }

        solve(n, vec);
    }

    return 0;
}