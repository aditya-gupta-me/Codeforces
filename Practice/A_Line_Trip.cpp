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
void solve(int n, int x, vector<int> vec)
{
    vec.insert(vec.begin(), 0);
    vec.pb(x);

    // for (int val : vec)
    // {
    //     cout << val << " ";
    // }

    // cout << endl;

    int maxDis = INT_MIN;
    for (int i = 0; i < vec.size() - 1; i++)
    {
        int dis = i == vec.size() - 2 ? 2 * abs(vec[i] - vec[i + 1]) : abs(vec[i] - vec[i + 1]);

        maxDis = max(dis, maxDis);
    }

    cout << maxDis << "\n";
}

int main()
{
    FAST_IO;

    int T = 1;
    cin >> T; // uncomment for multiple test cases

    while (T--)
    {
        int n, x;
        cin >> n >> x;

        vector<int> vec;

        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            vec.pb(num);
        }

        solve(n, x, vec);
    }

    return 0;
}