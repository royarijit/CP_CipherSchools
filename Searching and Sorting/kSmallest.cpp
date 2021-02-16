#include <bits/stdc++.h>

using namespace std;

void kSmallest(vector<int> &v, int k){
    vector<int> temp=v;
    vector<int> store;
    sort(temp.begin(),temp.end());
    for(int i=0;i<k;i++) store.push_back(temp[i]);
    for(int i=0;i<v.size();i++){
        if(find(store.begin(),store.end(),v[i])!=store.end()) cout<<v[i]<<" ";
    }

}

int main(){
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int k;cin>>k;
    kSmallest(v,k);
}
