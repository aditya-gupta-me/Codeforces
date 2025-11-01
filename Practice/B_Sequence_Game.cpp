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
void solve(int n, vector<int> vec)
{
    if (n == 1)
    {
        cout << n << "\n";
        cout << vec[0] << "\n";
        return;
    }
    // cout << "Came here 2" << endl;

    vector<int> result;
    result.pb(vec[0]);
    // cout << "Came here 3" << endl;

    for (int i = 1; i < n; i++)
    {
        if (vec[i] >= vec[i - 1])
        {
            result.pb(vec[i]);
        }
        else
        {
            result.pb(vec[i]);
            result.pb(vec[i]);
        }
    }

    cout << result.size() << "\n";
    for (int val : result)
    {
        cout << val << " ";
    }

    cout << "\n";
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

        vector<int> vec(n, 0);

        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        // cout << "Came here 1" << endl;
        solve(n, vec);
    }

    return 0;
}