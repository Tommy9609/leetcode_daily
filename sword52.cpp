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
        if(headA==nullptr)
         return headA;
        if(headB==nullptr)
        return headB;

        unordered_set<ListNode*> tmp;
        ListNode* cur=headA;
        while(cur!=nullptr)
        {
            tmp.insert(cur);
            cur=cur->next;
        }
        cur=headB;
        while(cur!=nullptr)
        {
            if(tmp.find(cur)!=tmp.end())
              break;
            else
            cur=cur->next;
        }
        return cur;
    }
};
