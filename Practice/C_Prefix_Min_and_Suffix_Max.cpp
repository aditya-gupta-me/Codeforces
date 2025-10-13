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
void solve(vector<int> &vec, int n)
{
    string res = "";
    // prefix and suffix vector
    vector<int> pMin(n), sMax(n);

    pMin[0] = vec[0];

    for (int i = 1; i < n; i++)
    {
        pMin[i] = min(vec[i], pMin[i - 1]);
    }

    sMax[n - 1] = vec[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        sMax[i] = max(vec[i], sMax[i + 1]);
    }

    for (int i = 0; i < n; i++)
    {
        if (pMin[i] < vec[i] && sMax[i] > vec[i])
        {
            res += "0";
        }
        else
        {
            res += "1";
        }
    }

    cout << res << "\n";
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

        vector<int> vec(n);

        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }

        solve(vec, n);
    }

    return 0;
}