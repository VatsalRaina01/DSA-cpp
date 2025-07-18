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
        ListNode* prev=head;
        ListNode* curr=head->next;
        int siz=1;
        while(head->next!=NULL){
            head=head->next;
            siz++;
        }
        head=prev;
        if (n == siz) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
        
        for(int i=1;i<siz-n%siz;i++){
            prev=prev->next;
            curr=curr->next;
        }
        prev->next=curr->next;
        curr->next=nullptr;

        return head;
    }
};