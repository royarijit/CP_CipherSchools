#include <bits/stdc++.h>

using namespace std;

int maxSum(vector<int> &v){
    int maxx = INT_MIN;
    int maxe = 0;

    for (int i = 0; i < v.size(); i++){
        maxe = maxe + v[i];
        if (maxx < maxe) maxx = maxe;
        if (maxe < 0) maxe = 0;
    }
    return maxx;
}

int main(){
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    cout<<maxSum(v);
}
