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
void solve(int n, int h, int l, vector<int> vec)
{
    int c_row = 0, c_col = 0, c_all = 0;

    for (int val : vec)
    {
        bool check_row = (val <= h);
        bool check_col = (val <= l);

        if (check_row)
        {
            c_row++;
        }
        if (check_col)
        {
            c_col++;
        }

        if (check_row || check_col)
        {
            c_all++;
        }
    }

    int result = min({c_row, c_col, c_all / 2});

    cout << result << "\n";
}

int main()
{
    FAST_IO;

    int T = 1;
    cin >> T; // uncomment for multiple test cases

    while (T--)
    {
        int n, h, l;

        cin >> n >> h >> l;

        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }

        solve(n, h, l, vec);
    }

    return 0;
}