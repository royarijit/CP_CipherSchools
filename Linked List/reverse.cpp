#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node *next;
    node(int data){
        this->data=data;
        next = nullptr;
    }
};

class operations{
public:
    node* head;
    operations(){
        head = nullptr;
    }
    void reverseList(){
        node* curr = head;
        node* prev = nullptr, *next = nullptr;

        while (curr!= nullptr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }

    void print(){
        if(head== nullptr) return;
        node *temp = head;
        while(temp!= nullptr){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }

    void push(int data) {
        node* temp = new node(data);
        temp->next = head;
        head = temp;
    }
};



int main()
{
    operations l;
    l.push(1);
    l.push(2);
    l.push(3);
    l.push(4);
    l.print();
    l.reverseList();
    l.print();

}
