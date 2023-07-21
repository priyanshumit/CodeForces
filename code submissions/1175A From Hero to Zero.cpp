#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        unsigned long long int n,k,r,ans{0};
        cin >> n >> k;
        if(k>n)
            cout << n <<endl;
        else{
            while(n){
                r=n%k;
                if(r!=0)
                    ans+=r;
                do{
                    n=n/k;
                    ans++;
                }while(n%k==0&&n!=0);
            }
        cout << ans-1 << endl;
        }
    }
    return 0;
}