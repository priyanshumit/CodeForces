#include <bits/stdc++.h>
#define for0(i,n) for(int i=0;i<n;i++)
#define all(x) (x).begin(), (x).end()

using namespace std;

int solve(){
    int m,n;
    cin >> n >> m;
    if(n%m==0)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}

int main(){
	int t;
	cin >> t;
	while(t--)
        solve();
	return 0;
}