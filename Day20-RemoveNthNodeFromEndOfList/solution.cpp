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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *ptr1 = head;
        for (int i = 0; i < n; i++)
        {
            ptr1 = ptr1->next;
        }

        if (!ptr1)
        {
            ListNode *newHead = head->next;
            delete head;
            return newHead;
        }

        ListNode *ptr2 = head;
        ListNode *prev = nullptr;

        while (ptr1)
        {
            prev = ptr2;
            ptr2 = ptr2->next;
            ptr1 = ptr1->next;
        }

        prev->next = ptr2->next;
        delete ptr2;

        return head;
    }
};