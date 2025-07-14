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
    ListNode* reverseList(ListNode* head) {
        if(!head)
        return nullptr;

      ListNode* cur =  head;
      ListNode* prev = nullptr;

      while(cur)
      {
        ListNode* nextNode = cur->next;
        cur->next = prev;

        prev = cur;
        cur = nextNode;
      }

         head =  prev ;

     return  prev;


    }
        
    
};