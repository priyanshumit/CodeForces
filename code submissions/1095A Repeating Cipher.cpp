#include <bits/stdc++.h>

using namespace std;

int solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i=0,j=1;i<n;j++,i+=j)
        cout << s[i];
    return 0;
}

int main(){
//	int t;
//	cin >> t;
//	while(t--)
        solve();
	return 0;
}