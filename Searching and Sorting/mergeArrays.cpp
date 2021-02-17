#include<bits/stdc++.h>
using namespace std;

vector<int> mergeArrays(vector<int> &v1, vector<int> &v2){
    int n1=v1.size();
    int n2=v2.size();
    int i=0, j=0, k=0;
    vector<int> ans(n1+n2);
    while (i<n1 && j <n2){
        if (v1[i] < v2[j]) ans[k++] = v1[i++];
        else ans[k++] = v2[j++];
    }
    while (i < n1){
        ans[k++] = v1[i++];
    }
    while (j < n2){
        ans[k++] = v2[j++];
    }

    return ans;
}
int main()
{
    int n1;cin>>n1;
    vector<int> v1(n1);
    for(int i=0;i<n1;i++) cin>>v1[i];

    int n2;cin>>n2;
    vector<int> v2(n2);
    for(int i=0;i<n2;i++) cin>>v2[i];

    vector<int> ans = mergeArrays(v1,v2);

    for(auto i: ans) cout<<i<<" ";
}
