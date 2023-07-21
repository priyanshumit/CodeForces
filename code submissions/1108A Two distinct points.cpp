#include <bits/stdc++.h>

using namespace std;

int solve(){
    int l1,r1,l2,r2;
    cin >> l1 >> r1 >> l2 >> r2;
    if(l1!=r2)
        cout << l1 << " " << r2 << endl;
    else
        cout << r1 << " " << r2 << endl;
    return 0;
}

int main(){
	int t;
	cin >> t;
	while(t--)
        solve();
	return 0;
}