#include <bits/stdc++.h>

using namespace std;

int maxProfit(vector<int> &v){
    int profit=0;
    int curr=v[0];
    for(int i=0;i<v.size();i++){
        curr = min(curr,v[i]);
        profit = max(profit,v[i]-curr);
    }

    return profit;
}

int main(){
    int size;cin>>size;
    vector<int> v(size);
    for(int i=0;i<size;i++) cin>>v[i];
    cout<<maxProfit(v);

}
