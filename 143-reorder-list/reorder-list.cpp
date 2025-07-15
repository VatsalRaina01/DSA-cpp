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
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL) return; 
        ListNode *i=head;
        ListNode *j=head;
        while(j!=NULL && j->next!=NULL){
            i=i->next;
            j=j->next->next;
        }
        ListNode *mid=i;
        ListNode *prev=i->next;
        while(prev!=NULL && prev->next!=NULL){
            ListNode *curr=prev->next;
            prev->next=curr->next;
            curr->next=mid->next;
            mid->next=curr;
        }
        i=head;
        j=mid->next;
        while(i!=mid && j!=NULL){
            mid->next=j->next;
            j->next=i->next;
            i->next=j;
            i=j->next;
            j=mid->next;




        }
        mid->next=nullptr;

         
        
    }
};