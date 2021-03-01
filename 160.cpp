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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*,int> hash;
        while(headA!=nullptr){
            hash[headA]++;
            headA=headA->next;
        }
        while(headB!=nullptr){
             if(hash.find(headB)!=hash.end())
             {
                 return headB;
             }
             headB=headB->next;
        }
        return nullptr;

    }
};
