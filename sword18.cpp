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
    ListNode* deleteNode(ListNode* head, int val) {
        if(head==nullptr)
        return head;
        ListNode* prehead=new ListNode(0);
        prehead->next=head;
        ListNode* slow=prehead;          //搞个哨兵，解决第一个是要删除元素的情况
        ListNode* fast=head;
        while(fast!=nullptr)
        {
            if(fast->val==val)
              {
                  slow->next=fast->next;
                  break;
              }
              slow=fast;
              fast=fast->next;
        }
        return prehead->next;

    }
};
