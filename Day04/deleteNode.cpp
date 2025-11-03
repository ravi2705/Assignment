//Delete Node in a Linked List

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {

       ListNode* nodeTobeDeleted = node->next;
       node->val = nodeTobeDeleted->val ;
       node->next = nodeTobeDeleted->next ;
       delete nodeTobeDeleted;
    }
};