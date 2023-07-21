#include <bits/stdc++.h>

using namespace std;

int solve(){
    int a,b,c,n,r;
    cin >> a >> b>> c >> n;
    r=(a+b+c+n)%3;
    n=(a+b+c+n)/3;
    if((r==0)&&n>=a&&n>=b&&n>=c)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}

int main(){
	int t;
	cin >> t;
	while(t--)
        solve();
	return 0;
}