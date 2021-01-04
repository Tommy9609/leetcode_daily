/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/
class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==nullptr)
        return head;
        unordered_map<Node*,Node*> hash;
        Node* copyhead=head;
        Node* pre=new Node(0);
        while(copyhead!=nullptr)
        {
            hash[copyhead]=new Node(copyhead->val);
            copyhead=copyhead->next;
        }
        copyhead=head;
        pre->next=hash[copyhead];
        while(copyhead!=nullptr)
        {
            hash[copyhead]->next=hash[copyhead->next];
            hash[copyhead]->random=hash[copyhead->random];
            copyhead=copyhead->next;
        }
        return pre->next;
    }
};
