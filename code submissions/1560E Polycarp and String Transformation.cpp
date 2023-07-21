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
    ll n, mpsize = 0, ssize = 0;
    string s;
    cin >> s;
    map<char, int> a;
    vector<char> vec;
    vector<ll> count(26, 0);

    for (size_t i = 0; i < s.length(); i++)
        a[s[i]]++;
    mpsize = a.size();

    // for (auto it : a)
    // {
    //     cout << it.first << " " << it.second << endl;
    // }
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (count[s[i] - 'a'] == 0)
        {
            vec.push_back(s[i]);
            count[s[i] - 'a']++;
        }
    }
    reverse(vec.begin(), vec.end());
    for (size_t i = 1; i <= vec.size(); i++)
    {
        ssize += a[vec[i - 1]] / i;
    }
    // p2("size : ", ssize);
    string final = s.substr(0, ssize);
    // cout << final << " ";
    // for (size_t i = 0; i < vec.size(); i++)
    // {
    //     cout << vec[i];
    // }
    string ans = final;
    for (size_t i = 0; i < vec.size(); i++)
    {
        string x;
        for (size_t j = 0; j < final.size(); j++)
        {
            if (final[j] != vec[i])
                x += final[j];
        }
        ans += x;
        final = x;
        // p2("final : ", final);
    }
    // cout << endl;
    if (ans == s)
    {
        cout << s.substr(0, ssize) << " ";
        for (size_t i = 0; i < vec.size(); i++)
        {
            cout << vec[i];
        }
    }
    else
        cout << -1;
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