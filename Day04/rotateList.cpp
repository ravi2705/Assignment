// Rotate LinkedList

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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL) return head;
        int n = 0;
        ListNode* temp1 = head;
        while(temp1 != NULL){
            n++;
            temp1 = temp1->next;
        }
        for(int i = 1; i <= k % n; i++){
            ListNode* temp = head;
            ListNode* prev;
            while(temp->next != NULL){
                prev = temp;
                temp = temp->next;
            }
            temp->next = head;
            prev->next = NULL;
            head = temp;
        }
        return head;
    }
};