/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head){
    struct ListNode*slow=head;
    struct ListNode*fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    struct ListNode*temp=NULL;
    while(slow)
    {
       struct ListNode*p2=slow->next;
        slow->next=temp;
        temp=slow;
        slow=p2;
    }
    while(temp)
    {
        if(temp->val!=head->val) return 0;
        temp=temp->next;
        head=head->next;
    }
    return 1;

}