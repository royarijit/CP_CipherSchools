#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node* head, Node* tail, int position)
{
    if(position==0) return;

    Node* walk = head;
    for(int i=1; i<position; i++)
        walk = walk->next;
    tail->next = walk;
}

bool isLoop(Node* head)
{
    if(!head) return false;

    Node* fast = head->next;
    Node* slow = head;

    while( fast != slow)
    {
        if( !fast || !fast->next ) return false;
        fast=fast->next->next;
        slow=slow->next;
    }

    return true;
}

int length(Node* head)
{
    int ret = 0;
    while(head)
    {
        ret++;
        head = head->next;
    }
    return ret;
}

void removeLoop(Node* head)
{
    Node* s = head;
    Node* f = head;
    if(s==head){
        while(s->next!=head){
            s=s->next;
        }
        s->next=NULL;
    }

    while(s&&f&&s->next){
        s=s->next;
        f=f->next->next;
        if(s==f){
            break;
        }
    }

    if(s==f){
        s=head;
        while(s->next!=f->next){
            s=s->next;
            f=f->next;
        }
        f->next=NULL;
    }
}

int main(){
    
        int n, num;
        cin>>n;

        Node *head, *tail;
        cin>> num;
        head = tail = new Node(num);

        for(int i=0 ; i<n-1 ; i++){
            cin>> num;
            tail->next = new Node(num);
            tail = tail->next;
        }
        int pos;
        cin>> pos;
        loopHere(head,tail,pos);

        removeLoop(head);

        if( isLoop(head) || length(head)!=n ) cout<<"0\n";
        else cout<<"1\n";
}
