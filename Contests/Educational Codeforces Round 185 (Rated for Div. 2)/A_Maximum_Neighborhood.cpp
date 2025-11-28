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

    int T;
    cin >> T; // uncomment for multiple test cases

    while (T--)
    {
        int n;
        cin >> n;

        vector<vector<int>> vec(n, vector<int>(n));

        int ele = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                vec[i][j] = ele++;
            }
        }

        // n * n
        int sum = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int total = vec[i][j];

                if (i > 0)
                    total += vec[i - 1][j]; // top
                if (i < n - 1)
                    total += vec[i + 1][j]; // bottom
                if (j > 0)
                    total += vec[i][j - 1]; // left
                if (j < n - 1)
                    total += vec[i][j + 1]; // right

                sum = max(sum, total);
            }
        }

        cout << sum << "\n";
        // solve();
    }

    return 0;
}