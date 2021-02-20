#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* next;

    node(int x){
        data = x;
        next = NULL;
    }

};

void printList(struct node *node){
    while (node != NULL)
    {
        cout<<node->data;
        node = node->next;
    }
    cout<<"\n";
}

struct node *reverse (struct node *head, int k){
    node* current = head;
    node* prev = nullptr;
    node* next = nullptr;
    int count = 0;

    while(current!=nullptr && count<k){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }

    if(next!=nullptr) head->next =  reverse(next,k);

    return prev;
}

int main(void){
    int t;
    cin>>t;

    while(t--){
        struct node* head = NULL;
        struct node* temp = NULL;
        int n;
        cin >> n;

        for(int i=0 ; i<n ; i++){
            int value;
            cin >> value;
            if(i == 0){
                head = new node(value);
                temp = head;
            }
            else{
                temp->next = new node(value);
                temp = temp->next;
            }
        }

        int k;
        cin>>k;

        head = reverse(head, k);
        printList(head);
    }
}



