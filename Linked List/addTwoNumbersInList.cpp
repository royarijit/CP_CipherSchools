#include "bits/stdc++.h"
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size){
    int val;
    cin>> val;

    Node* head = new Node(val);
    Node* tail = head;

    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}

void printList(Node* n){
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

Node *reverse(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;

    while(curr != NULL)
    {
        Node *next = curr->next;

        curr->next = prev;
        prev = curr;

        curr = next;
    }

    return prev;
}

struct Node* addTwoLists(struct Node* first, struct Node* second){
    long long num1=0,num2=0;
    long long curr;
    while(first!=NULL){
        curr=first->data;
        num1=num1*10+curr;
        first=first->next;
    }
    while(second!=NULL){
        curr=second->data;
        num2=num2*10+curr;
        second=second->next;
    }
    long long sum=num1+num2;

    long long val=sum%10;
    sum=sum/10;
    Node* newList = new Node(val);
    Node* tail = newList;

    while(sum>0)
    {   long long rem=sum%10;
        tail->next = new Node(rem);
        tail = tail->next;
        sum/=10;
    }
    newList = reverse(newList);
    return newList;

}

int main(){
    
        int n, m;
        cin>>n;
        Node* first = buildList(n);
        cin>>m;
        Node* second = buildList(m);
        Node* res = addTwoLists(first,second);
        printList(res);
}




