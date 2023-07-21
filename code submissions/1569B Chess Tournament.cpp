#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define ld long double
#define endl '\n'
#define dbg(x) cout << #x << " = " << x << endl
#define read(a, n)              \
    for (int i = 0; i < n; i++) \
        cin >> a[i];
#define rmdup(vec) vec.erase(unique(vec.begin(), vec.end()), vec.end())
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define sortv(a) sort(a.begin(), a.end())
#define sortrev(a) sort(a.rbegin(), a.rend())
#define gcd __gcd
#define ffo find_first_of
#define flo find_last_of
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define printv(a)                      \
    for (int i = 0; i < a.size(); i++) \
    {                                  \
        cout << a[i];                  \
    }                                  \
    cout << endl
#define YES cout << "YES"
#define NO cout << "NO"
#define p1(a) cout << a << endl
#define p2(a, b) cout << a << " " << b << endl
#define p3(a, b, c) cout << a << " " << b << " " << c << endl
#define p4(a, b, c, d) cout << a << " " << b << " " << c << " " << d << endl

using namespace std;

// **************************************************************************************************************** //

// **************************************************************************************************************** //

int solve()
{
    ll n, k, x, ans = 0, mul = 1, one = 0, two = 0;
    string s;
    cin >> n >> s;
    vector<ll> vec;
    vector<vector<char>> arr(n, vector<char>(n, 'a'));
    for (size_t i = 0; i < n; i++)
        if (s[i] == '1')
            one++;
        else
            two++, vec.push_back(i);
    if (two < 3 && one != n)
    {
        cout << "NO" << endl;
        return 0;
    }
    if (one == n)
    {
        YES << endl;
        for (size_t i = 0; i < n; i++)
        {
            for (size_t j = 0; j < n; j++)
            {
                if (i == j)
                    cout << "X";
                else
                    cout << "=";
            }
            cout << endl;
        }
        return 0;
    }
    // printv(vec);

    arr[vec[0]][vec[vec.size() - 1]] = '-';
    arr[vec[vec.size() - 1]][vec[0]] = '+';

    ll xx = 0, yy = 1;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (i == j)
            {
                arr[i][j] = 'X';
            }
            else if (i == vec[xx] && j == vec[yy] && yy < vec.size())
            {
                arr[i][j] = '+';
                arr[j][i] = '-';
                xx++;
                yy++;
            }
            else
            {
                if (arr[i][j] == 'a')
                    arr[i][j] = '=';
                if (arr[j][i] == 'a')
                    arr[j][i] = '=';
            }
        }
        // cout << endl;
    }
    YES << endl;
    for (size_t j = 0; j < n; j++)
    {
        printv(arr[j]);
    }

    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //	#ifndef ONLINE_JUDGE
    //	freopen("input.txt", "r", stdin);
    //	freopen("output.txt", "w", stdout);
    //	#endif

    int t = 1;

    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}