#include <bits/stdc++.h>

using namespace std;

void segregate(vector<int> &v){
    int left=0,right=v.size()-1;
    while(left<right){
        while(v[left]==0&&left<right) left++;
        while(v[right]==1&&left<right) right--;
        if(left<right){
            v[left]=0;
            v[right]=1;
            left++;
            right--;
        }

    }
}

int main(){
    int size;cin>>size;
    vector<int> v(size);
    for(int i=0;i<size;i++) cin>>v[i];
    segregate(v);
    for(auto i: v) cout<<i<<" ";

}
