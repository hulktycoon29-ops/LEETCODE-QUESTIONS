class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        if (head == NULL || head->next == NULL)
            return head;


        int length = 0;
        ListNode* temp = head;

        while (temp != NULL) {
            length++;
            temp = temp->next;
        }

        
        ListNode* first = head;
        ListNode* prevFirst = NULL;

        int cnt = 1;
        while (cnt != k) {
            prevFirst = first;
            first = first->next;
            cnt++;
        }

        
        ListNode* second = head;
        ListNode* prevSecond = NULL;

        int num_last = length - k + 1;
        cnt = 1;

        while (cnt != num_last) {
            prevSecond = second;
            second = second->next;
            cnt++;
        }


        if (first == second)
            return head;

        // Adjacent: first -> second
        if (first->next == second) {
            if (prevFirst)
                prevFirst->next = second;
            else
                head = second;

            first->next = second->next;
            second->next = first;

            return head;
        }

        
        if (second->next == first) {
            if (prevSecond)
                prevSecond->next = first;
            else
                head = first;

            second->next = first->next;
            first->next = second;

            return head;
        }

        
        if (prevFirst)
            prevFirst->next = second;
        else
            head = second;

        if (prevSecond)
            prevSecond->next = first;
        else
            head = first;

        ListNode* tempNext = first->next;

        first->next = second->next;
        second->next = tempNext;

        return head;
    }
};