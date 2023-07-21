#include <bits/stdc++.h>

using namespace std;
int sum(int n){
    int r{0};
    while(n){
        r+=n%10;
        n=n/10;
    }
    return r;
}
int solve(){
    int n,x,r{0};
    cin >> n;
    while(sum(n)%4!=0)
        n++;
    cout << n;
    return 0;
}

int main(){
//	int t;
//	cin >> t;
//	while(t--)
        solve();
	return 0;
}