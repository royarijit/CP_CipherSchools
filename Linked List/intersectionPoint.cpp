#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};


Node* inputList(int size){
    if(size==0) return NULL;

    int val;
    cin>> val;

    Node *head = new Node(val);
    Node *tail = head;

    for(int i=0; i<size-1; i++){
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}

int intersectPoint(Node* head1, Node* head2){
    unordered_set<Node*>s;
    while(head1)
    {
        s.insert(head1);
        head1=head1->next;
    }
    while(head2)
    {
        if(s.find(head2)!=s.end())
        {
            return head2->data;
        }
        head2=head2->next;
    }
    return -1;
}

int main()
{
    int n1,n2,n3;
    cin>>n1>>n2>>n3;

        Node* head1 = inputList(n1);
        Node* head2 = inputList(n2);
        Node* common = inputList(n3);

        Node* temp = head1;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;

        temp = head2;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;

        cout << intersectPoint(head1, head2) << endl;
}

 
    
    

