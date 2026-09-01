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
    ListNode* removeElements(ListNode* head, int val){
        ListNode*temp=head;
        ListNode*dummyNode=new ListNode(-1);
        dummyNode->next=head;
        ListNode*prev=dummyNode;
        ListNode*deleteNode;
        if(head==NULL ) return head;
        while(temp!=NULL){
            if(temp->val==val){
                prev->next=temp->next;
                deleteNode=temp;
                temp=temp->next; 
                delete deleteNode; 
            }
            else{
                prev=temp;
                temp=temp->next;
            }
        }
        return dummyNode->next;
    }
};