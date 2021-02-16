#include <bits/stdc++.h>

using namespace std;

int colNum(string s){
    long long res=0;
    long long count = 1;
    long long n = s.size();
    for(int i=n-1;i>=0;i--){
        res+=count*(s[i]-'A'+1);
        count*=26;
    }
    return res;
}

int main(){
    string s;cin>>s;
    cout<<colNum(s);
}