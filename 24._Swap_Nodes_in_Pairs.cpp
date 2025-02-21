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
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL || head->next == NULL) return head;
        ListNode* head_to_return = head->next;

        while (head && head->next) {
            ListNode* tmp = head->next->next;
            head->next->next = head;
            if (tmp && tmp->next) head->next = tmp->next;
            else head->next = tmp;
            head = tmp;
            
        }

        return head_to_return;
    }
};
