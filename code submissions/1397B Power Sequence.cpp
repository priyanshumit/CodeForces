#include <bits/stdc++.h>

using namespace std;

unsigned long long int finalans(const vector<unsigned long long int> &seq,unsigned long long int x){
    unsigned long long int ans=0;
    for(int i=0;i<seq.size();i++){
        ans+=llabs(seq[i]-pow(x,i));
    }
    return ans;
}

int main()
{
    unsigned long long int n,x,t,tem,sum(0);
    cin >> n;
    vector<unsigned long long int> seq;
    for(int i=0;i<n;i++){
        cin >> x;
        sum+=x;
        seq.push_back(x);
    }
    tem=sum-1;
    t=sum-1;
    sort(seq.begin(),seq.end());
    for(x=1;t<sum;x++){
        t=finalans(seq,x);
        if(t>tem)
            break;
        tem=t;
    };
    cout << tem << endl;
    return 0;
}