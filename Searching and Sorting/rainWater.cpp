#include <bits/stdc++.h>

using namespace std;

int rainWater(vector<int> &v){
    int res = 0;
    for (int i=1; i<v.size()-1; i++) {
        int left = v[i];
        for (int j=0; j<i; j++) left = max(left, v[j]);
        int right = v[i];
        for (int j=i+1; j<v.size(); j++) right = max(right, v[j]);
        res = res + (min(left, right) - v[i]);
    }
    return res;
}

int main(){
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    cout<<rainWater(v);
}
