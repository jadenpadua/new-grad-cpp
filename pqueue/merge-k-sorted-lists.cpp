//LC Session for 4/4/21
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int, vector<int>, greater<int>> pq;
        
        for(int i = 0; i < lists.size(); ++i) {
            ListNode* head = lists[i];
            while(head) {
                pq.push(head->val);
                head = head->next;
            }
        }
        
        ListNode* dummy = new ListNode(-1);
        ListNode* curr = dummy;
        
        while(!pq.empty()) {
            curr->next = new ListNode(pq.top());
            pq.pop();
            curr = curr->next;
        }
        
        curr = dummy->next;
        delete dummy;
        return curr;
    }
};
