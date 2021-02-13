#include <bits/stdc++.h>

using namespace std;

int majorityElement(vector<int> &v){
    unordered_map<int,int> mp;
    int ans=-1;
    for(auto i : v) mp[i]++;
    for(auto e : mp) {
        if(e.second>v.size()/2) ans = e.first;
    }
    return ans;
}

int main(){
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    cout<<majorityElement(v);
}
