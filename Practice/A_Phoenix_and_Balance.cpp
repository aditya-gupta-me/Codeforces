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
    // yo start from here,
    // don't worry, you gonna solve this one too
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

        // 2, 4, 8, 16, 32, 64, 128, 256
        //  2 + 256 => 258
        // 4 + 128 => 132
        // 126
        // 8 + 64 => 72
        // 16 + 32 => 48
        // 24

        vector<int> vec;

        for (int i = 1; i <= n; i++)
        {
            int result = pow(2, i);
            // cout << result << endl;
            vec.pb(result);
        }

        int diff;

        if (n <= 2)
        {
            diff = vec[1] - vec[0];
        }
        else
        {
            int r = vec.size() - 1;
            vector<int> sum;

            for (int l = 0; l < vec.size(); l++)
            {
                int s = vec[l] + vec[r--];
                sum.pb(s);
            }

            for (int i = 0; i < n - 1; i++)
            {
                diff = abs(sum[i] - sum[i + 1]);
            }
        }

        cout << diff << endl;

        // for (int val : vec)
        // {
        //     cout << val << endl;
        // }
        // solve();
    }

    return 0;
}