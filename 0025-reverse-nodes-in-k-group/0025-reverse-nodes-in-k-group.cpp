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

    // Returns the kth node starting from temp
    ListNode* getKthNode(ListNode* temp, int k) {
        k -= 1;

        while (temp != NULL && k > 0) {
            temp = temp->next;
            k--;
        }

        return temp;
    }

    // Reverses the linked list
    ListNode* reverseLinkList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr != NULL) {
            ListNode* nextNode = curr->next;

            curr->next = prev;

            prev = curr;
            curr = nextNode;
        }

        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {

        ListNode* temp = head;
        ListNode* prevLast = NULL;

        while (temp != NULL) {

            // Find kth node
            ListNode* kthNode = getKthNode(temp, k);

            // Less than k nodes remaining
            if (kthNode == NULL) {
                if (prevLast != NULL)
                    prevLast->next = temp;

                break;
            }

            // Store node after kth node
            ListNode* nextNode = kthNode->next;

            // Disconnect current group
            kthNode->next = NULL;

            // Reverse current group
            reverseLinkList(temp);

            // If this is the first group
            if (temp == head) {
                head = kthNode;
            }
            else {
                prevLast->next = kthNode;
            }

            // temp becomes the last node after reversal
            prevLast = temp;

            // Move to next group
            temp = nextNode;
        }

        return head;
    }
};