struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr)
            return head;
		ListNode* dummy = new ListNode(-1,head);
		ListNode* current = head;
		ListNode* nxt = current->next;

		while (current && nxt) {
			ListNode* tmp = nxt->next;
			nxt->next = current;
			current = nxt;
			nxt = tmp;
		}

		dummy->next->next = nullptr;
		return current;
    }
};
