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
        unordered_map<int, int> map = {
            {1, 0},
            {2, 0},
            {3, 0},
            {4, 0},
            {5, 0}};

        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                char c;
                cin >> c;

                if (c == 'X')
                {
                    if (i >= 4 && i <= 5 && j >= 4 && j <= 5)
                        map[5]++;
                    else if (i >= 3 && i <= 6 && j >= 3 && j <= 6)
                        map[4]++;
                    else if (i >= 2 && i <= 7 && j >= 2 && j <= 7)
                        map[3]++;
                    else if (i >= 1 && i <= 8 && j >= 1 && j <= 8)
                        map[2]++;
                    else
                        map[1]++;
                }
            }
        }

        int sum = 0;

        for (const auto &pair : map)
        {
            if (pair.second >= 1)
            {
                sum += pair.first * pair.second;
            }
        }

        cout << sum << "\n";
        // solve();
    }

    return 0;
}