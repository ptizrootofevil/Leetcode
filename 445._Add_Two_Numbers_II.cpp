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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverseList(l1);
        l2 = reverseList(l2);
        ListNode* reshead = new ListNode(0);
        ListNode* head = reshead;
        int carr = 0;
        while (l1 || l2 || carr) {
            if (l1) {
                carr += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                carr += l2->val;
                l2 = l2->next;
            }
            head->val = carr % 10;
            carr /= 10;
            head->next = new ListNode(0);
            head = head->next;
        }
        return reverseList(reshead)->next;
    }

    ListNode* reverseList(ListNode* head) {
        if (!head) return NULL;
        ListNode* prev = NULL;
        ListNode* next = head->next;
        while(next) {
            head->next = prev;
            prev = head;
            head = next;
            next = next->next;
        }
        head->next = prev;
        return head;
    }
};
