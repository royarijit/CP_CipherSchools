#include <bits/stdc++.h>
using namespace std;
bool  check(stack<char> &st, string s){
    for(int i=0;i<s.size();i++){
            if(s[i]=='{' || s[i]=='[' || s[i]=='('){
                st.push(s[i]);
            }
        else if(s[i]=='}' || s[i]==']' || s[i]==')'){
                char ch;
                if(!st.empty())
                ch=st.top();
                else
                return false;
                if(!st.empty() && ((s[i]=='}' && e=='{') ||(s[i]==']' && e=='[') || (s[i]==')' && ch=='(') )){
                   st.pop();
                }
                else{
                   return false;
                }
                
            }
        }
        
    if(st.empty()) return true;
    else return false;
}
int main()
{
    string s;cin>>s;
    stack<char> st;
    if(check(st,s))cout<<"balanced";
    else cout<<"not balanced";
}

