#include <bits/stdc++.h>
using namespace std;

void findMaximum(string s, int k, string& max){

    if (k==0) return;
    int n=s.length();

    for (int i=0;i<n-1;i++) {
        for (int j=i+1;j<n;j++) {
            if (s[i] < s[j]) {
                swap(s[i], s[j]);
                if (s.compare(max) > 0) max = s;
                findMaximum(s, k - 1, max);
                swap(s[i], s[j]);
            }
        }
    }
}

int main()
{
    string s;cin>>s;
    int k;cin>>k;
    string max = s;
    findMaximum(s, k, max);
    cout<<max;
}
