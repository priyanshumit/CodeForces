#include <bits/stdc++.h>

using namespace std;

int solve(){
    int n,t=1;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    sort(arr,arr+n);
    for(int i=1;i<n;i++)
        if(arr[i]-arr[i-1]==1){
            cout << 2 << endl;
            t=0;
            break;
        }
    if(t)
        cout << 1 << endl;
    return 0;
}

int main(){
	int t;
	cin >> t;
	while(t--)
        solve();
	return 0;
}