class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        ListNode *fast = head;
        ListNode *slow = head;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }
};

#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}