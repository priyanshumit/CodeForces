#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n){
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int solve(){
    int n,m,ans=0;
    cin >> n >> m;
    if(isPrime(m)){
        for(int i=n+1;i<m;i++){
            if(isPrime(i)){
                ans=1;
                break;
            }
        }
        if(ans)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    else
        cout << "NO";

    return 0;
}

int main(){
//	int t;
//	cin >> t;
//	while(t--)
        solve();
	return 0;
}