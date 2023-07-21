#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int
#define ld long double
#define endl '\n'
#define dbg(x) cout << #x << " = " << x << endl
#define read(a, n)            \
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
#define printv(a)                    \
  for (int i = 0; i < a.size(); i++) \
  {                                  \
    cout << a[i] << " ";             \
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
int printDivisors(int n)
{
  for (int i = 1; i <= n; i++)
    if (n % i != 0)
      return i;
  return n;
}
// **************************************************************************************************************** //

int solve()
{
  ll n;
  string s, ans;
  cin >> n;
  ll y = printDivisors(n);
  char z = 'a';
  for (int i = 0; i < y; i++)
  {
    s += z;
    z++;
  }
  // cout << y;
  ans = s;
  while (ans.length() < n)
    ans += s;
  ans = ans.substr(0, n);
  cout << ans;
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