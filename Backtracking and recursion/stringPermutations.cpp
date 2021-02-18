#include <bits/stdc++.h>
using namespace std;

void permutations(string s, int start, int end){
    if(start==end) cout<<s<<" ";
    else{
        for(int i=0;i<=end;i++){
            swap(s[start],s[i]);
            permutations(s,start+1,end);
            swap(s[start],s[i]);
        }
    }
}

int main(){
    string s;cin>>s;
    permutations(s,0,s.size()-1);
}
