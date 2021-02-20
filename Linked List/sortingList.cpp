class Solution {
public:
    vector<int> temp;
    void fill(ListNode* head){
        ListNode *curr = head;
        while(curr!=NULL){
            temp.push_back(curr->val);
            curr=curr->next;
        }
        sort(temp.begin(),temp.end());
    }
    
    ListNode* sortList(ListNode* head) {
        fill(head);
        ListNode* curr = head;
        int i=0;
        while(curr!=NULL){
            curr->val = temp[i++];
            curr=curr->next;
        }
        return head;
        
    }
};
