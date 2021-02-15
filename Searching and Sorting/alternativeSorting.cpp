#include <bits/stdc++.h>

using namespace std;

vector<int> alterSort(vector<int> &v){
    sort(v.begin(),v.end());
    vector<int> ans(v.size());
    int it=0;
    for(int i=0;i<v.size();i++){
        if((i+1)%2==0) {
            ans[i]=v[it]; it++;
        }
        if(it==v.size()/2) break;
    }
    for(int i=v.size()-1;i>=0;i--){
        if((i+1)%2==1) {
            ans[i]=v[it]; it++;
        }
    }

    return ans;
}

int main(){
    int size;cin>>size;
    vector<int> v(size);
    for(int i=0;i<size;i++) cin>>v[i];
    alterSort(v);
    vector<int> ans = alterSort(v);
    for(auto i: ans) cout<<i<<" ";
}
