#include <bits/stdc++.h>

using namespace std;

int solve(){
    int n,e=2,o=1;
    cin >> n;
    if(n%2==1)
        cout << -1 << endl;
    else{
        while(e<=n&&o<=n){
            cout << e << " ";
            cout << o << " ";
            e+=2;
            o+=2;
        }
    }
    return 0;
}

int main(){
//	int t;
//	cin >> t;
//	while(t--)
        solve();
	return 0;
}