#include <bits/stdc++.h>

using namespace std;

int solve(){
    int ans{0},n,m;
    cin >> n >> m;
    string s;
    for(int i=1;i<=n;i++){
        cin >> s;
        if(s[m-1]=='R')
            ans++;
        for(int j=0;i==n&&j<m-1;j++){
            if(s[j]=='D')
                ans++;
        }
        s.clear();
    }
    cout << ans << endl;
    return 0;
}

int main(){
	int t;
	cin >> t;
	while(t--)
        solve();
	return 0;
}