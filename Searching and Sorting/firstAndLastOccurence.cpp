#include <bits/stdc++.h>

using namespace std;

void position(vector<int> &v, int n){
    int first,last;
    for(int i=0;i<v.size();i++){
        if(v[i]==n) {
            first=i;
            break;
        }
    }

    for(int i=0;i<v.size();i++){
        if(v[i]==n) last=i;
    }
    cout<<"First occurence: "<<first<<"\n";
    cout<<"Last occurence: "<<last<<"\n";
}

int main(){
    int size;cin>>size;
    vector<int> v(size);
    for(int i=0;i<size;i++) cin>>v[i];
    int n;cin>>n;
    position(v,n);

}
