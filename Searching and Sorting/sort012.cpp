#include<bits/stdc++.h>
using namespace std;

void sort012(vector<int> &v){
    int low = 0, mid = 0, high = v.size()-1;
    while(mid <= high){
        switch(v[mid]){
            case 0:
                swap(v[low], v[mid]);
                low++;
                mid++;
                break;

            case 1:
                mid++;
                break;

            case 2:
                swap(v[mid], v[high]);
                high--;
                break;
        }
    }
}
int main()
{
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    sort012(v);

    for(auto i: v) cout<<i<<" ";
}
