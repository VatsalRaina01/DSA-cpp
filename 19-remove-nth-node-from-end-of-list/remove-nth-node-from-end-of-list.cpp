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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL) return head;
        if(head->next==NULL && n==1) return NULL;
        int sizel=1;
        ListNode* prev=head;
        ListNode* curr=head->next;
        while(head->next!=NULL){
            head=head->next;
            sizel++;
        }
        head=prev;
        if(sizel==n){
            ListNode* newhead=head->next;
            delete head;
            return newhead;

        }
        for(int i=1;i<sizel-n%sizel;i++){
            prev=prev->next;
            curr=curr->next;
        }
        prev->next=curr->next;
        curr->next=nullptr;


        return head;

    }
};