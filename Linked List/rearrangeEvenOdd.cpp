#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

Node *rearrangeEvenOdd(Node *head){
    if(!head || !head->next) return head;

    Node *a=head;
    Node *b=head->next;
    Node *Head=head->next;

    while(a&&b&&a->next&&b->next){
        a->next=b->next;
        a=a->next;
        b->next=a->next;
        b=b->next;
    }

    if(b) b->next=NULL;
    a->next=Head;
    return head;

}

int main()
{
    int i,n,l;
        struct Node *head = NULL;
        struct Node *temp = head;
        cin>>n;
        for(i=1; i<=n; i++){
            cin>>l;

            if (head == NULL){
                head = temp = new Node(l);

            }
            else{  temp->next = new Node(l);
                temp = temp->next;
            }
        }
        head = rearrangeEvenOdd(head);
        while(head != NULL){
            printf("%d ", head->data);
            head = head->next;
        }
        printf("\n");
    
}
