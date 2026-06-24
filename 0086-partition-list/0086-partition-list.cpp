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
    ListNode* partition(ListNode* head, int x) {
        ListNode* smallHead = new ListNode(0);
        ListNode* largeHead = new ListNode(0);
        ListNode* small = smallHead;
        ListNode* large = largeHead;
        ListNode* temp = head;
        while(temp != NULL){
            if(temp->val < x){
                small->next = temp;
                small = small->next;
            }
            else{
                large->next = temp;
                large = large->next;
            }
            temp = temp->next;
        }
        large->next = NULL;
        small->next = largeHead->next;
        return smallHead->next;
    }
};