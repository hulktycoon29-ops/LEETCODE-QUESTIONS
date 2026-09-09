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
    ListNode* deleteDuplicates(ListNode* head){
        ListNode*temp=head;
        ListNode*prev=head;
        if(head==NULL )  return NULL;
        while(temp->next!=NULL ){
            if(temp->val<temp->next->val){
                prev->next=temp->next;
                prev=temp->next;
            }
            temp=temp->next;
        }
        prev->next=NULL;
        return head;
    }
};