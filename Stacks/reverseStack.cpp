#include <bits/stdc++.h>

using namespace std;

stack<int> reverseStack(stack<int> s){
    stack<int> s2;
    while(!s.empty()){
        s2.push(s.top());
        s.pop();
    }
    return s2;
}


void insertion(stack<int> &s, int val){
    if(s.empty()){
        s.push(val);
    }
    else{
        int t=s.top();
        s.pop();
        insertion(s, val);
        s.push(t);
    }
}

void reverseStack(stack<int> &s){
    if(!s.empty()){
        int val=s.top();
        s.pop();
        reverseStack(s);
        insertionAt(s, val);
    }
}



void printStack(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<"\n";
        s.pop();
    }
}



int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
   reverseStack(s);
   printStack(s);
}
