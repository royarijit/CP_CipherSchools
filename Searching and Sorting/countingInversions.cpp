#include <bits/stdc++.h>

using namespace std;

int countInversions(vector<int> &v){
    int count=0;
    for(int i=0;i<v.size()-1;i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]>v[j]) count++;
        }
    }
    return count;
}

int main(){
    int size;cin>>size;
    vector<int> v(size);
    for(int i=0;i<size;i++) cin>>v[i];
    cout<<countInversions(v);

}
