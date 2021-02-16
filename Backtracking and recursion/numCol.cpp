#include <bits/stdc++.h>

using namespace std;

string numCol(int n){
    string s="";
    n--;
    while(n>=0){
        s+=('A'+n%26);
        n/=26;
        n--;
    }
    reverse(s.begin(),s.end());
    return s;
}

int main(){
    int n;cin>>n;
    cout<<numCol(n);
}
