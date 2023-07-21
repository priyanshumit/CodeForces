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
    ll n, k, x, ans = 0, mul = 1;
    cin >> k;
    vector<pair<ll, ll>> vec;
    for (size_t i = 0; i < k; i++)
    {
        cin >> n;
        vector<ll> arr(n);
        ll maxx = 0;
        for (size_t j = 0; j < n; j++)
        {
            cin >> x;
            arr[j] = x + 1 - j;
            maxx = max(arr[j], maxx);
        }
        vec.push_back({maxx, maxx + n});
    }
    // for (auto s : vec)
    // {
    //     cout << s.first << " " << s.second << endl;
    // }
    sortv(vec);
    // cout << endl;
    // for (auto s : vec)
    // {
    //     cout << s.first << " " << s.second << endl;
    // }
    ans = vec[0].first;
    ll temp = vec[0].second;
    for (size_t i = 1; i < vec.size(); i++)
    {
        if (temp >= vec[i].first)
        {
            temp += (vec[i].second - vec[i].first);
        }
        else
        {
            ans += vec[i].first - temp;
            temp = vec[i].second;
        }
        // ll zz = vec[i].first - vec[i - 1].second;
        // if (zz > 0)
        //     ans += zz;
        // p2(temp, ans);
    }
    cout << ans;
    // cout << vec[0].first;
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
        cout << '\n';
    }

    return 0;
}