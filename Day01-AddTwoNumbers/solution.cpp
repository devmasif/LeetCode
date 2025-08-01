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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
	ListNode* result = NULL;
	ListNode* temp = new ListNode;
	result = temp;
	int carry = 0;
	while(l1 || l2) {
		

		if (!l1) {
			l1 = new ListNode;
		}
		if (!l2) {
			l2 = new ListNode;
		}

		int val = l1->val + l2->val;

		if (val >= 10) {
			temp->val = val % 10 + carry;
			carry = 1;
		}
		else {
			temp->val= val + carry;
            if (temp->val >= 10){
                temp->val %= 10;
                carry = 1;
            }
            else
			carry = 0;
		}
		l1 = l1->next;
		l2 = l2->next;
		cout << temp->val;
		if (l1 || l2) {
			temp->next = new ListNode;
			temp = temp->next;
		}
	}
    
	if (carry == 1) {
		temp->next = new ListNode;
		temp = temp->next;
		temp->val = 1;
	}

	return result;
}
};