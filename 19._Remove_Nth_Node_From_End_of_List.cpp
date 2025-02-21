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
        vector <ListNode*> list1;
        while (head) {
            list1.push_back(head);
            head = head->next;
        }
        if (list1.size() == 1) return NULL;
        int index_to_delete = list1.size() - n;
        if (n == 1) list1[index_to_delete-1]->next = NULL;
        else if (index_to_delete == 0) return list1[1];
        else list1[index_to_delete-1]->next = list1[index_to_delete+1];
        return list1[0];
    }
};
