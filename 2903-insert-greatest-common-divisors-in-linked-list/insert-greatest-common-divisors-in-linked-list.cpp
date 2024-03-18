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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
     ListNode* temp=head;
     while(temp->next){
        int g=gcd(temp->val,temp ->next->val);
        ListNode* rug=new ListNode(g,temp->next);
        temp->next=rug;
        temp=rug->next;
        
     }
     return head;

    }
};