#include <iostream>

using namespace std;

int solve(){
    int n,x;
    string s,ans;
    cin >> n >> s;
    x=n;
    while(x--)
        ans+=s[n-1];
    cout << ans <<endl;
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}