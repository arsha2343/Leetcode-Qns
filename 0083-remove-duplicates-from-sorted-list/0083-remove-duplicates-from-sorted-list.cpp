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
        if(head == NULL || head->next == NULL) return head;
        ListNode* temp = head->next;
        ListNode* prev = head;
        while(temp != NULL){
            if(temp->val == prev->val){
                ListNode* t = temp;
                prev->next = prev->next->next;
                temp = temp->next;
                t->next = NULL;
                delete t;
            }
            else{
            prev = temp;
            temp = temp->next;
            }
        }
        return head;
    }
};