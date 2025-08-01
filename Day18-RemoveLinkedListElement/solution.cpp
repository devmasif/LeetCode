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
class Solution
{
public:
    ListNode *removeElements(ListNode *head, int val)
    {
        ListNode *temp = head;
        ListNode *prev;
        while (temp)
        {
            if (temp->val == val)
            {
                if (temp == head)
                {
                    head = head->next;
                    delete temp;
                    temp = head;
                }
                else
                {
                    prev->next = temp->next;
                    delete temp;
                    temp = prev;
                }
                continue;
            }

            prev = temp;
            temp = temp->next;
        }

        return head;
    }
};