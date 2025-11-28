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
void solve(vector<int> vec)
{
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

        vector<int> b(n);
        ll sumB = 0;
        int non0 = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            sumB += b[i];
            if (b[i] > 0)
            {
                non0++;
            }
        }

        ll maxSum = sumB - n + 1;

        ll ans = min((ll)non0, maxSum);

        cout << ans << "\n";
    }

    return 0;
}