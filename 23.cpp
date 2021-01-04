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
class Solution1 {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==nullptr)
        return l2;
        else if(l2==nullptr)
        return l1;
        else if(l1->val<=l2->val)
        {
            l1->next=mergeTwoLists(l1->next,l2);
            return l1;
        }
        else
        {
            l2->next=mergeTwoLists(l1,l2->next);
            return l2;
        }

    }
    ListNode* merge(vector<ListNode*>& lists,int l,int r){
        if(l==r) return lists[l];
        if(l>r)  return nullptr;
        int mid=(l+r)>>1;
        return mergeTwoLists(merge(lists,l,mid),merge(lists,mid+1,r));
    } 
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* ans=nullptr;
        if(lists.empty())   return ans;
        ans=merge(lists,0,lists.size()-1);
        return ans;
    }
};

class Solution2 {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==nullptr)
        return l2;
        else if(l2==nullptr)
        return l1;
        else if(l1->val<=l2->val)
        {
            l1->next=mergeTwoLists(l1->next,l2);
            return l1;
        }
        else
        {
            l2->next=mergeTwoLists(l1,l2->next);
            return l2;
        }

    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* ans=nullptr;
        if(lists.empty()) return ans;
        int size=lists.size();
        for(int i=0;i<size;i++){
            ans=mergeTwoLists(ans,lists[i]);
        }
        return ans;
    }
};
