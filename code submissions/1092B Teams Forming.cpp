#include <bits/stdc++.h>

using namespace std;

int solve(){
    int n,prob{0};
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    sort(arr,arr+n);
    for(int i=0;i<n;i+=2){
        prob+=arr[i+1]-arr[i];
    }
    cout << prob;
    return 0;
}

int main(){
//	int t;
//	cin >> t;
//	while(t--)
        solve();
	return 0;
}