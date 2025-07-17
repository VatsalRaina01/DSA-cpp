/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL) return head;
        int count=1;
        ListNode* tail=head;
        while(tail->next!=NULL){
            count++;
            tail=tail->next;
        }
        tail->next=head;
        for(int i=0;i<count-k%count;i++){
            tail=tail->next;
        }
        head=tail->next;
        tail->next=NULL;

        return head;

        
        
    }
};