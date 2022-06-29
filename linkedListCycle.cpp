struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};


class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* hare = head;
        ListNode* tortoise = head;
        
        while (hare && hare->next) {
            hare = hare->next->next;
            tortoise = tortoise->next;
            
            if (hare == tortoise)
                return true;
        }
        
        return false;
    }
        
//         unordered_set<ListNode*> myTable;
        
//         while(head != nullptr) {
            
//             auto it = myTable.find(head);
            
//             if (it != myTable.end())
//                 return true;
            
//             myTable.insert(head);
//             head = head->next;
        
//         }
//         return false;
};