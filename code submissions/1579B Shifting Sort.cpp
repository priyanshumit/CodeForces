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
        cout << a[i] << " ";           \
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
    ll n, k, mul = 1;
    cin >> n;
    vector<ll> arr(n);
    vector<ll> arr_s(n);
    read(arr, n);
    arr_s = arr;
    sortv(arr_s);
    if (arr == arr_s)
    {
        p1(0);
        return 0;
    }
    if (n == 2)
    {
        p1(1);
        p3(1, 2, 1);
        return 0;
    }

    vector<pair<pair<ll, ll>, ll>> ans;
    // int x = 0;
    // int final = arr_s[x];
    int aaa = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (arr == arr_s)
        {
            p1(aaa);
            break;
        }
        if (arr[i] != arr_s[i])
        {
            for (size_t j = i; j < n; j++)
            {
                if (arr[j] == arr_s[i])
                {
                    rotate(arr.begin() + i, arr.begin() + j, arr.end());
                    ans.push_back({{i + 1, n}, j - i});
                    // p3(i + 1, n, j - i);
                    // p1("=========");
                    // x++;
                    // final = arr_s[x];
                    aaa++;
                    break;
                }
            }
        }
        // p1(final);
        // printv(arr);
    }
    for (size_t i = 0; i < ans.size(); i++)
    {
        cout << ans[i].first.first << " " << ans[i].first.second << " " << ans[i].second;
        cout << endl;
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
        // cout << '\n';
    }

    return 0;
}