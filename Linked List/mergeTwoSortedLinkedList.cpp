#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

Node* sortedMerge(Node* head_A, Node* head_B){
    Node* head=NULL;
    Node** ref=&head;

    while(head_A&& head_B){
        if(head_A->data<head_B->data){
            *ref=head_A;
            head_A=head_A->next;
        }
        else{
            *ref=head_B;
            head_B=head_B->next;
        }
        ref=&((*ref)->next);
    }
    if(head_A){
        *ref=head_A;
    }
    else{
        *ref=head_B;
    }

    return head;
}

void printList(struct Node *n){
    while (n!=NULL){
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}


int main(){
        int n,m;
        cin>>n>>m;

        int data;
        cin>>data;
        struct Node *head1 = new Node(data);
        struct Node *tail1 = head1;
        for (int i = 1; i < n; ++i){
            cin>>data;
            tail1->next = new Node(data);
            tail1 = tail1->next;
        }

        cin>>data;
        struct Node *head2 = new Node(data);
        struct Node *tail2 = head2;
        for(int i=1; i<m; i++){
            cin>>data;
            tail2->next = new Node(data);
            tail2 = tail2->next;
        }

        Node *head = sortedMerge(head1, head2);
        printList(head);
}


