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
void solve(vector<ll> vec, int n)
{
    sort(vec.begin(), vec.end());

    vec[0]++;
    ll p = 1;

    for (int val : vec)
    {
        p *= val;
    }

    cout << p << "\n";
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

        vector<ll> vec(n);

        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }

        solve(vec, n);
    }

    return 0;
}