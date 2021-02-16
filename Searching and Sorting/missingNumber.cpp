#include <bits/stdc++.h>

using namespace std;

int missingNumber(vector<int> &v){
    int sum = accumulate(v.begin(),v.end(),0);
    int n = v.size()+1;
    int total = (n*(n+1))/2;
    return total-sum;
}

int main(){
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    cout<<missingNumber(v);
}
