#include<bits/stdc++.h>
using namespace std;
int d[] = {1, 1, 2, 6, 4, 2, 2, 4, 2, 8};

int lastDig(int n)
{
    if (n<10) return d[n];
    if (((n/10)%10)%2 == 0) return (6*lastDig(n/5)*d[n%10]) % 10;
    else return (4*lastDig(n/5)*d[n%10]) % 10;
}
int main()
{
    int n;cin>>n;
    cout<<lastDig(n);
}
