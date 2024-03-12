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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* rug = new ListNode(0);
        rug->next = head;
        int prefix = 0;
        unordered_map<int, ListNode*> prefixMap; // Corrected spelling of 'unordered_map'
        prefixMap[0] = rug;
        ListNode* current = head;
        while (current) {
            prefix += current->val;
            if (prefixMap.find(prefix) != prefixMap.end()) {
                ListNode* temp = prefixMap[prefix]->next;
                int tempPrefix = prefix + temp->val;
                while (temp != current) {
                    prefixMap.erase(tempPrefix);
                    temp = temp->next;
                    tempPrefix += temp->val;
                }
                prefixMap[prefix]->next = current->next;
            } else {
                prefixMap[prefix] = current;
            }
            current = current->next;
        }
        return rug->next;
    }
};
