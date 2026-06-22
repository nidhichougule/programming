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
    ListNode* deleteDuplicates(ListNode* head) {
          ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode* prev = dummy;
        ListNode* temp = head;
        while(temp != NULL){
            bool duplicate = false;
            while(temp->next != NULL && 
                  temp->val == temp->next->val){
                duplicate = true;
                ListNode* del = temp;
                temp = temp->next;
                delete del;
            }
            if(duplicate){
                ListNode* del = temp;
                temp = temp->next;
                delete del;
                prev->next = temp;
            }
            else{

                prev = temp;
                temp = temp->next;
            }
        }
        return dummy->next;
    }
};